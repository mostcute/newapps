#include "newapptcpclient.h"
#include "dataprocess.h"
#include <QCryptographicHash>
newapptcpclient::newapptcpclient(QObject *parent) : QObject(parent)
{
    IPPORT = 0;
    type = 0;
    tcpSocket = new QTcpSocket(this);
   // connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readMessage()));
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readStream()));
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(displayError(QAbstractSocket::SocketError)));
    connect(tcpSocket,SIGNAL(disconnected()),this,
           SLOT(print_hello()));
}
newapptcpclient::~newapptcpclient()
{

   tcpSocket->deleteLater();
}
void newapptcpclient::print_hello()
{
   delete tcpSocket;
   tcpSocket = NULL;

}
void newapptcpclient::newConnect()
{
    blockSize = 0; //初始化其为0
    tcpSocket->abort(); //取消已有的连接

//连接到主机，这里从界面获取主机地址和端口号
    tcpSocket->connectToHost(IPADDRESS,IPPORT);
}

void newapptcpclient::readMessage()
{
    QDataStream in(tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);
    //设置数据流版本，这里要和服务器端相同
    if(blockSize==0) //如果是刚开始接收数据
    {
       //判断接收的数据是否有两字节，也就是文件的大小信息
       //如果有则保存到blockSize变量中，没有则返回，继续接收数据
       if(tcpSocket->bytesAvailable() < (int)sizeof(quint16)) return;
       in >> blockSize;
    }
    if(tcpSocket->bytesAvailable() < blockSize) return;
    //如果没有得到全部的数据，则返回，继续接收数据
    in >> message;
    blockSize = 0;
    //将接收到的数据存放到变量中
    printf(message.toLocal8Bit().data());
    sendMessage(message);
    //显示接收到的数据
}
void newapptcpclient::readStream()
{
    QDataStream in(tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);
    //设置数据流版本，这里要和服务器端相同
    if(blockSize==0) //如果是刚开始接收数据
    {
       //判断接收的数据是否有两字节，也就是文件的大小信息
       //如果有则保存到blockSize变量中，没有则返回，继续接收数据
       if(tcpSocket->bytesAvailable() < (int)sizeof(quint64)) return;
       in >> blockSize;
    }
    if(type == 0)
    {
        if(tcpSocket->bytesAvailable() < (int)sizeof(qint8)) return;
        in >> type;

    }
    if(type == 1)
    {  qDebug()<<"type == 1";
       if(tcpSocket->bytesAvailable() < blockSize -sizeof(qint8)) return;
       struct register_data data;
       in.readRawData(data.ID,20);
       blockSize = 0;
       type = 0;
       qDebug()<<"register success your id is"<<data.ID;
    }
    else if(type == 2)//登录反馈
    {  qDebug()<<"type == 2";
       if(tcpSocket->bytesAvailable() < blockSize -sizeof(qint8)) return;
       qint8 result;
       in >> result;
       if(result == 1)
       {
         //qDebug()<<"登录成功";
           emit login_result(1);
       }
       else if(result == 2)
       {
           //qDebug()<<"账号错误";
           emit login_result(2);
       }
       else if(result == 3)
       {
        //qDebug()<<"密码错误";
           emit login_result(3);
       }
       else
       {
           qDebug()<<"服务器异常";
       }

       blockSize = 0;
       type = 0;
       //qDebug()<<"register success your id is"<<data.ID;
    }

}
void newapptcpclient::sendMessage(QString word)
{
    //用于暂存我们要发送的数据
    QByteArray block;

    //使用数据流写入数据
    QDataStream out(&block,QIODevice::WriteOnly);

    //设置数据流的版本，客户端和服务器端使用的版本要相同
    out.setVersion(QDataStream::Qt_5_9);
    //我们获取已经建立的连接的子套接字


    out<<(quint16) 0;
    out<<word;
    out.device()->seek(0);
    out<<(quint16) (block.size() - sizeof(quint16));

    tcpSocket->write(block);
    //clientConnection->disconnectFromHost();

    //发送数据成功后，显示提示
   // printf("send message successful!!!");
}
void newapptcpclient::sendStream(QByteArray stream)
{
   tcpSocket->write(stream);
}

void newapptcpclient::displayError(QAbstractSocket::SocketError)
{
    qDebug() << tcpSocket->errorString(); //输出错误信息
}
void newapptcpclient::IPCONFIG(QString IP, qint16 port)
{
    IPADDRESS = IP;
    IPPORT = port;
}
void newapptcpclient::register_new_id(QString name, QString password, QString email)
{
    QString md5;
    QByteArray ba,bb;
    QCryptographicHash md(QCryptographicHash::Md5);
    ba.append(password);
    md.addData(ba);
    bb = md.result();
    md5.append(bb.toHex());


    struct register_data data;
    strcpy(data.username,qPrintable(name));
    strcpy(data.password,qPrintable(md5));
    strcpy(data.email,qPrintable(email));
    QByteArray block;
    //使用数据流写入数据
    QDataStream out(&block,QIODevice::WriteOnly);
    //设置数据流的版本，客户端和服务器端使用的版本要相同
    out.setVersion(QDataStream::Qt_4_6);
    //我们获取已经建立的连接的子套接字
    out<<(quint64) 0;
    out<<(qint8)(1);
    out.writeRawData(data.username,50);
    out.writeRawData(data.password,33);
    out.writeRawData(data.email,50);

    out.device()->seek(0);
    out<<(quint64) (block.size() - sizeof(quint64));
    //sendStream(block);
    tcpSocket->write(block);
    //qDebug()<<(block.size() - sizeof(quint64))<<" "<<sizeof(qint64);
    //qDebug()<<data.username;

}
void newapptcpclient::login(QString ID, QString password)
{
    QString md5;
    QByteArray ba,bb;
    QCryptographicHash md(QCryptographicHash::Md5);
    ba.append(password);
    md.addData(ba);
    bb = md.result();
    md5.append(bb.toHex());
    struct register_data data;
    strcpy(data.ID,qPrintable(ID));
    strcpy(data.password,qPrintable(md5));
    QByteArray block;
    //使用数据流写入数据
    QDataStream out(&block,QIODevice::WriteOnly);
    //设置数据流的版本，客户端和服务器端使用的版本要相同
    out.setVersion(QDataStream::Qt_4_6);
    //我们获取已经建立的连接的子套接字
    out<<(quint64) 0;
    out<<(qint8)(2);//登陆类型号
    out.writeRawData(data.ID,20);
    out.writeRawData(data.password,33);

    out.device()->seek(0);
    out<<(quint64) (block.size() - sizeof(quint64));
    //sendStream(block);
    tcpSocket->write(block);
    //qDebug()<<(block.size() - sizeof(quint64))<<" "<<sizeof(qint64);
    //qDebug()<<data.username;
}

void newapptcpclient::example()
{
   IPCONFIG("123.207.182.40",10000);
   newConnect();
   register_new_id("V1.0", "123456", "437043924@qq.com");
   //login(QString("100011"),QString("123456"));

   /*struct register_data data;
   strcpy(data.username,"testname");
   strcpy(data.password,"testpass");
   strcpy(data.email,"testemaila");
   qDebug()<<sizeof(data)<<"vs"<<sizeof(struct register_data);
   QByteArray block;
   //使用数据流写入数据
   QDataStream out(&block,QIODevice::WriteOnly);
   //设置数据流的版本，客户端和服务器端使用的版本要相同
   out.setVersion(QDataStream::Qt_4_6);
   //我们获取已经建立的连接的子套接字
   out<<(quint64) 0;
   out<<(qint8)(1);
   out.writeRawData(data.username,50);
   out.writeRawData(data.password,33);
   out.writeRawData(data.email,50);


   out.device()->seek(0);
   out<<(quint64) (block.size() - sizeof(quint64));
   //sendStream(block);
   tcpSocket->write(block);
   qDebug()<<(block.size() - sizeof(quint64))<<" "<<sizeof(qint64);
   qDebug()<<data.username;*/
   //sendMessage("hello");

}
