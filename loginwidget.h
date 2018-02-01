#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include "masklabel.h"



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

signals:

public slots:
};

#endif // LOGINWIDGET_H
