#include "networkdebughelper.h"
#include <QCryptographicHash>
networkdebughelper::networkdebughelper(QObject *parent) : QObject(parent)
{
    IPPORT = 0;
    type = 0;
    tcpSocket = new QTcpSocket(this);
   // connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readMessage()));
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readMessage()));
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(displayError(QAbstractSocket::SocketError)));
    connect(tcpSocket,SIGNAL(disconnected()),this,
           SLOT(print_hello()));
}
networkdebughelper::~networkdebughelper()
{
   tcpSocket->deleteLater();
}
void networkdebughelper::print_hello()
{
   tcpSocket->deleteLater();
}
void networkdebughelper::newConnect()
{
    blockSize = 0; //初始化其为0
    tcpSocket->abort(); //取消已有的连接

//连接到主机，这里从界面获取主机地址和端口号
    tcpSocket->connectToHost(IPADDRESS,IPPORT);
}

void networkdebughelper::readMessage()
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

void networkdebughelper::sendMessage(QString word)
{

    //用于暂存我们要发送的数据
    QByteArray block;

    //使用数据流写入数据
    QDataStream out(&block,QIODevice::WriteOnly);

    //设置数据流的版本，客户端和服务器端使用的版本要相同
    out.setVersion(QDataStream::Qt_4_6);
    //我们获取已经建立的连接的子套接字


    out<<(quint64) 0;
    out<<word;
    out.device()->seek(0);
    out<<(quint64) (block.size() - sizeof(quint64));
    //qDebug()<<(quint64) (block.size() - sizeof(quint64));

    tcpSocket->write(block);
    //tcpSocket->disconnectFromHost();
    //this->deleteLater();

    //发送数据成功后，显示提示
    //printf("send message successful!!!");
}
void networkdebughelper::sendStream(QByteArray stream)
{
   tcpSocket->write(stream);
}

void networkdebughelper::displayError(QAbstractSocket::SocketError)
{
    qDebug() << tcpSocket->errorString(); //输出错误信息
}
void networkdebughelper::IPCONFIG(QString IP, qint16 port)
{
    IPADDRESS = IP;
    IPPORT = port;
}


void networkdebughelper::example()
{
   IPCONFIG("123.207.182.40",10010);
   newConnect();
   sendMessage("hello");
   //register_new_id("V1.0", "123456", "437043924@qq.com");


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
