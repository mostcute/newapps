#include "loginwidget.h"
#include <QPalette>
#include <QString>
#include <QPixmap>

extern QSize screensize;
extern QSize screensize_2;
loginwidget::loginwidget(QWidget *parent) : QWidget(parent)
{

     wlayout = new QVBoxLayout;


     this->setAutoFillBackground(true); // 这句要加上, 否则可能显示不出背景图.
     QPalette pal;

     QPixmap pixmap("assets:/pic/background.jpg");
     //QPixmap pixmap("I:/qtandgit/newapp/android/android/assets/pic/background.jpg");
     pal.setBrush(QPalette::Window,QBrush(pixmap));

     setPalette(pal);

     headphotolabel = new MaskLabel;
     headphotolabel->setFixedSize(254,254);
     headphotolabel->setPixmap(QPixmap("assets:/pic/headphoto.png"));
     //headphotolabel->setPixmap(QPixmap("I:/qtandgit/newapp/android/android/assets/pic/headphoto.png"));

     //headphotolabel->setStyleSheet("{background-color: transparent;}");
     //headphotolabel->resize(300,300);
     wlayout->setContentsMargins(100,0,100,0);

     wlayout->addWidget(headphotolabel,0,Qt::AlignHCenter);
    // wlayout->setStretchFactor(headphotolabel,2);



     //wlayout->setAlignment(headphotolabel,Qt::AlignVCenter);

     usrname = new QLineEdit;
     wlayout->addWidget(usrname);
     wlayout->setSpacing(10);
   //  wlayout->setStretchFactor(usrname,2);

     psd = new QLineEdit;
     wlayout->addWidget(psd);
    //  wlayout->setStretchFactor(psd,1);
     loginbtn = new QPushButton;
     wlayout->addWidget(loginbtn);
   //  wlayout->setStretchFactor(loginbtn,2);

     regstbtn = new QPushButton;
     wlayout->addWidget(regstbtn);
    // wlayout->setStretchFactor(regstbtn,4);


      this->setLayout(wlayout);

}

loginwidget::~loginwidget()
{
    delete wlayout;
    delete testlabel;


}

/*
     QString  a;
     a.append(QString::number(screensize_2.height()));
     a.append("*");
     a.append(QString::number(screensize_2.width()));
     a.append("\n");
     a.append(QString::number(screensize.height()));
     a.append("*");
     a.append(QString::number(screensize.width()));
     testlabel = new QLabel(a);
     wlayout->addWidget(testlabel);

*/
