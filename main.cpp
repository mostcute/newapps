/*#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include "global_variable.h"

#include <QStackedWidget>

#include <QLabel>
#include <QDebug>
#include <QTimer>
#include <QVBoxLayout>
#include "QMap"
#include <NBlib>
<<<<<<< HEAD
#include <QStandardPaths>
#include <QFile>
#include <QFileInfo>
#include <JQNetwork>
=======
>>>>>>> cb8b2f89fc3a1f9161579aaf88835f1b19e91f36

QStackedWidget * mainstack;
int main(int argc, char *argv[])
{ int b;
    QApplication a(argc, argv);

  /*  mainwindow w;
    w.setAutoFillBackground(true);
    w.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    w.setMouseTracking(true);
    a.connect(w.quitAction , SIGNAL(triggered(bool)), &a, SLOT(quit()));

    w.resize(500,500);
    w.show();*/
   /* NTouchListWidget *test_case_18 = new NTouchListWidget();
    test_case_18->setFixedSize(200,500);
    test_case_18->show();

    // 插入测试数据
    for(int index = 0;index != 200;index++) test_case_18->addItem(QString("测试项目:%1").arg(index));
    //

    auto client = JQNetworkClient::createClient( true );

    // 初始化客户端
    if ( !client->begin() )
    {
        qDebug() << "Client: begin fail";
        return -1;
    }
    qDebug() << "Client: begin succeed";
    qDebug() << "Client: waitForCreateConnect:" << client->waitForCreateConnect( "123.207.182.40", 26432 );
    qDebug() << "Client: sendFileData reply:" << client->sendFileData(
                "123.207.182.40",                                            // 服务端的IP地址
                26432,                                                  // 服务端的端口
                "fileTransfer",                                         // 需要调用的服务端方法名称
                QFileInfo( "C:/Users/43704/Desktop/AD/MKS(1).docx" ),                            // 需要发送的文件
                [ ](const auto &, const auto &)
                {
                    qDebug() << "Client: send file succeed";
                },
                [ ](const auto &)
                {
                    qDebug() << "Client: send file fail";
                }
    );


    return a.exec();
}*/



// Qt lib import
#include <QCoreApplication>
#include <QStandardPaths>
#include <QFile>
#include <QFileInfo>

// JQNetwork lib improt
#include <JQNetwork>
#include "global_variable.h"

#include <QStackedWidget>
QStackedWidget * mainstack;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    JQNetwork::printVersionInformation();

    // 创建客户端
    auto client = JQNetworkClient::createClient( true );

    // 初始化客户端
    if ( !client->begin() )
    {
        qDebug() << "Client: begin fail";
        return -1;
    }
    qDebug() << "Client: begin succeed";

    // 以阻塞方式创建连接
    qDebug() << "Client: waitForCreateConnect:" << client->waitForCreateConnect( "127.0.0.1", 26432 );

    // 创建一个测试文件
    const auto &&sourceFilePath = QString( "%1/%2" ).arg(
                QStandardPaths::writableLocation( QStandardPaths::TempLocation ),
                "jqnetwork_filetransferdemo"
            );
    {
        QFile file( sourceFilePath );
        file.open( QIODevice::WriteOnly );
        file.write( QByteArray( "FileTransferDemo" ) );
        file.waitForBytesWritten( 30 * 1000 );
    }

    // 发送文件
    qDebug() << "Client: sendFileData reply:" << client->sendFileData(
                "127.0.0.1",                                            // 服务端的IP地址
                26432,                                                  // 服务端的端口
                "fileTransfer",                                         // 需要调用的服务端方法名称
                QFileInfo( sourceFilePath ),                            // 需要发送的文件
                [ ](const auto &, const auto &)
                {
                    qDebug() << "Client: send file succeed";
                },
                [ ](const auto &)
                {
                    qDebug() << "Client: send file fail";
                }
    );

    return a.exec();
}

/*

// Qt lib import
#include <QCoreApplication>
#include <QStandardPaths>
#include <QFile>
#include <QFileInfo>

// JQNetwork lib improt
#include <JQNetwork>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    JQNetwork::printVersionInformation();

    // 创建客户端
    auto client = JQNetworkClient::createClient( true );

    // 初始化客户端
    if ( !client->begin() )
    {
        qDebug() << "Client: begin fail";
        return -1;
    }
    qDebug() << "Client: begin succeed";

    // 以阻塞方式创建连接
    qDebug() << "Client: waitForCreateConnect:" << client->waitForCreateConnect( "127.0.0.1", 26432 );

    // 创建一个测试文件
    const auto &&sourceFilePath = QString( "%1/%2" ).arg(
                QStandardPaths::writableLocation( QStandardPaths::TempLocation ),
                "jqnetwork_filetransferdemo"
            );
    {
        QFile file( sourceFilePath );
        file.open( QIODevice::WriteOnly );
        file.write( QByteArray( "FileTransferDemo" ) );
        file.waitForBytesWritten( 30 * 1000 );
    }

    // 发送文件
    qDebug() << "Client: sendFileData reply:" << client->sendFileData(
                "127.0.0.1",                                            // 服务端的IP地址
                26432,                                                  // 服务端的端口
                "fileTransfer",                                         // 需要调用的服务端方法名称
                QFileInfo( sourceFilePath ),                            // 需要发送的文件
                [ ](const auto &, const auto &)
                {
                    qDebug() << "Client: send file succeed";
                },
                [ ](const auto &)
                {
                    qDebug() << "Client: send file fail";
                }
    );

    return a.exec();
}



*/






