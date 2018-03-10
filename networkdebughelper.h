#ifndef NETWORKDEBUGHELPER_H
#define NETWORKDEBUGHELPER_H

#include <QObject>
#include <QtNetwork>

class networkdebughelper : public QObject
{
    Q_OBJECT
public:
    explicit networkdebughelper(QObject *parent = nullptr);
    ~networkdebughelper();
    QTcpSocket *tcpSocket;
    QString message;  //存放从服务器接收到的字符串
    qint64 blockSize; //存放文件的大小信息
    void IPCONFIG(QString IP,qint16 port);
    void example();

private:
    QString IPADDRESS;
    qint16  IPPORT;
    qint8 type;
signals:
    void yourStream(QByteArray stream);

private slots:

    void readMessage();  //接收数据
    void displayError(QAbstractSocket::SocketError);  //显示错误



public slots:
    void newConnect(); //连接服务器
    void print_hello();
    void sendMessage(QString word);
    void sendStream(QByteArray stream);


};

#endif // NEWAPPTAPCLIENT_H
