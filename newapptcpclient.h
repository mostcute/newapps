#ifndef NEWAPPTCPCLIENT_H
#define NEWAPPTCPCLIENT_H

#include <QObject>
#include <QtNetwork>

class newapptcpclient : public QObject
{
    Q_OBJECT
public:
    explicit newapptcpclient(QObject *parent = nullptr);
    ~newapptcpclient();
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
    void reg_ID(char name[20]);
    void login_result(int result);

private slots:

    void readMessage();  //接收数据
    void displayError(QAbstractSocket::SocketError);  //显示错误
    void readStream();


public slots:
    void newConnect(); //连接服务器
    void print_hello();
    void sendMessage(QString word);
    void sendStream(QByteArray stream);
    void register_new_id(QString name,QString password,QString email);
    void login(QString ID,QString password);

};

#endif // NEWAPPTAPCLIENT_H
