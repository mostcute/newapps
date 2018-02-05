#include "loginwidget.h"
#include <QPalette>
#include <QString>
#include <QPixmap>
#include <QFile>


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
     wlayout->addSpacing(250);
    // headphotolabel = new MaskLabel;
     headphotolabel = new QLabel;
     headphotolabel->setFixedSize(254,254);
     headphotolabel->setPixmap(QPixmap("assets:/pic/headphoto2.png"));
     headphotolabel->setAttribute(Qt::WA_TranslucentBackground);//据说让背景透明
     wlayout->addWidget(headphotolabel,0,Qt::AlignHCenter);//居中显示
     //headphotolabel->setPixmap(QPixmap("I:/qtandgit/newapp/android/android/assets/pic/headphoto.png"));

     //headphotolabel->setStyleSheet("{background-color: transparent;}");
     //headphotolabel->resize(300,300);
     wlayout->setContentsMargins(100,0,100,0);


    // wlayout->setStretchFactor(headphotolabel,2);



     //wlayout->setAlignment(headphotolabel,Qt::AlignVCenter);

     usrname = new QLineEdit;
     usrname->setMaximumWidth(screensize.width()*3/4);
     usrname->setMinimumWidth(screensize.width()*2/3);
     usrname->setPlaceholderText(tr("username"));
    // usrname->setStyleSheet("background : (0x00,0xff,0x00,0x00)");
     //usrname->setStyleSheet("border :1px ;background : (0x00,0xff,0x00,0x00)");
     usrname->setStyleSheet("background:transparent");

     wlayout->addWidget(usrname,0,Qt::AlignHCenter);
     wlayout->setSpacing(0);
   //  wlayout->setStretchFactor(usrname,2);




     psd = new QLineEdit;
     psd->setMaximumWidth(screensize.width()*3/4);
     psd->setMinimumWidth(screensize.width()*2/3);
     psd->setPlaceholderText(tr("password"));
     psd->setEchoMode(QLineEdit::Password);
     psd->setAttribute(Qt::WA_TranslucentBackground);
     wlayout->addWidget(psd,0,Qt::AlignHCenter);


    // wlayout->addSpacing(100);
    //  wlayout->setStretchFactor(psd,1);
     loginbtn = new QPushButton;
     wlayout->addWidget(loginbtn,0,Qt::AlignHCenter);
     loginbtn->setStyleSheet("QPushButton{border-image: url(assets:/pic/login1.png);}"
                           "QPushButton:hover{border-image: url(assets:/pic/login1.png);}"
                           "QPushButton:pressed{border-image: url(assets:/pic/login2.png);}");
     loginbtn->setFocusPolicy(Qt::NoFocus);//去除焦点框
     loginbtn->setMinimumSize(QPixmap("assets:/pic/login1.png").width(),QPixmap("assets:/pic/login1.png").height());

   //  wlayout->setStretchFactor(loginbtn,2);

     regstbtn = new QPushButton;
     wlayout->addWidget(regstbtn,0,Qt::AlignHCenter);
     regstbtn->setStyleSheet("QPushButton{border-image: url(assets:/pic/reg1.png);}"
                           "QPushButton:hover{border-image: url(assets:/pic/reg1.png);}"
                           "QPushButton:pressed{border-image: url(assets:/pic/reg2.png);}");

     regstbtn->setFocusPolicy(Qt::NoFocus);
     regstbtn->setMinimumSize(QPixmap("assets:/pic/reg1.png").width(),QPixmap("assets:/pic/reg1.png").height());
    // wlayout->setStretchFactor(regstbtn,4);
     wlayout->addSpacing(50);

     flashphoto = new QLabel;
     flashphoto->setPixmap(QPixmap("assets:/pic/elec.png"));
     flashphoto->setFixedSize(QPixmap("assets:/pic/elec.png").width(),QPixmap("assets:/pic/elec.png").height());
   //  flashphoto
     flashphoto->setAttribute(Qt::WA_TranslucentBackground);//据说让背景透明
     wlayout->addWidget(flashphoto,0,Qt::AlignHCenter);//居中显示
     wlayout->addSpacing(200);


     connect(loginbtn, SIGNAL(clicked(bool)), this, SLOT(login_slot()));
     this->setLayout(wlayout);


}

loginwidget::~loginwidget()
{
    delete wlayout;
    delete testlabel;
}

void loginwidget::login_slot()
{
    emit login_success();
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
