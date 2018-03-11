#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include "masklabel.h"
#include <QObject>
#include "newapptcpclient.h"
#include "networkdebughelper.h"


class loginwidget : public QWidget
{
    Q_OBJECT
public:
    explicit loginwidget(QWidget *parent = nullptr);
    ~loginwidget();
private:
    QVBoxLayout *wlayout;
    QLabel *testlabel;
   // MaskLabel *headphotolabel;
    QLabel *headphotolabel;
    QLineEdit *usrname;
    QLineEdit *psd;
    QPushButton * loginbtn;
    QPushButton * regstbtn;
    QLabel *flashphoto;
    newapptcpclient *loginclient;
    networkdebughelper *networkdebug;

signals:
    void login_success(QString name);

public slots:
    void login_slot();
    void login_result(int result);
    QFileInfoList GetFileList(QString path);
    QFileInfoList GetFileDir(QString path);
    void register_slot();

};

#endif // LOGINWIDGET_H
