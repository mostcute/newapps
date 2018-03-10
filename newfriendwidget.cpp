#include "newfriendwidget.h"
#include <QVBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QRadioButton>
#include <QHBoxLayout>
#include "statusbar.h"
newfriendwidget::newfriendwidget(QWidget *parent) : QWidget(parent)
{

    QPalette pal1;
    QPixmap pixmap1("assets:/pic/mainpic/bakground.png");
    pal1.setBrush(QPalette::Window,QBrush(pixmap1));
    this->setPalette(pal1);
    //this->setStyleSheet("background-color:rgb(250,250,250);");
    wlayout = new QVBoxLayout(this);
    wlayout->setContentsMargins(0,0,0,0);
    wlayout->setSpacing(0);
    this->setLayout(wlayout);

    topline = new QWidget(this);
    {
        QPalette pal1;
        QPixmap pixmap1("assets:/pic/mainpic/topline.png");
        pal1.setBrush(QPalette::Window,QBrush(pixmap1));
        topline->setPalette(pal1);
    }
    statusbar *sta = new statusbar(this);
    wlayout->addWidget(sta);
    wlayout->addWidget(topline);
    topline->setMaximumHeight(150);
    topline->setMinimumHeight(150);
    photo = new QLabel(this);
    photo->setPixmap(QPixmap("assets:/pic/mainpic/boy.PNG"));
    photo->setAttribute(Qt::WA_TranslucentBackground);//据说让背景透明
    photo->setFixedSize(QPixmap("assets:/pic/mainpic/boy.PNG").size());
    //wlayout->addWidget(headphotolabel,0,Qt::AlignHCenter);//居中显示
    QHBoxLayout *hlayout = new QHBoxLayout(this);
    wlayout->addSpacing(20);
    wlayout->addLayout(hlayout);
    hlayout->addSpacing(20);
    hlayout->addWidget(photo);
    hlayout->addStretch(1);
    name = new QLineEdit(this);
    name->setPlaceholderText("姓名");
    name->setStyleSheet("background:transparent");

    QVBoxLayout *vlayout1 = new QVBoxLayout(this);
    QHBoxLayout *hlayout1 = new QHBoxLayout(this);
    vlayout1->addWidget(name);
    vlayout1->addLayout(hlayout1);

    genderboy = new QRadioButton(this);
    gendergirl = new QRadioButton(this);
    genderboy->setText("男");
    gendergirl->setText("女");

    gendergirl->setStyleSheet("background-color:rgb(250,250,250);");
    genderboy->setStyleSheet("background-color:rgb(250,250,250);");
    hlayout1->addWidget(genderboy);
    hlayout1->addWidget(gendergirl);

    hlayout->addLayout(vlayout1);
    hlayout->addSpacing(20);

    phone = new QLineEdit(this);
    phone->setPlaceholderText("电话");
    wlayout->addWidget(phone);

    company = new QLineEdit(this);
    company->setPlaceholderText("公司");
    wlayout->addWidget(company);

    relation = new QLineEdit(this);
    relation->setPlaceholderText("住址");
    wlayout->addWidget(relation);

    birthday = new QLineEdit(this);
    birthday->setPlaceholderText("生日");
    wlayout->addWidget(birthday);

    account = new QLineEdit(this);
    account->setPlaceholderText("watchers 账号");
    wlayout->addWidget(account);

    email = new QLineEdit(this);
    email->setPlaceholderText("邮箱");
    wlayout->addWidget(email);

    job = new QLineEdit(this);
    job->setPlaceholderText("工作");
    wlayout->addWidget(job);

    firstimage = new QTextEdit(this);
    firstimage->setPlaceholderText("对他的第一印象");
    wlayout->addWidget(firstimage);
    save = new QPushButton(this);
    save->setStyleSheet("QPushButton{border-image: url(assets:/pic/mainpic/save2.png);}"
                          "QPushButton:hover{border-image: url(assets:/pic/mainpic/save2.png);}"
                          "QPushButton:pressed{border-image: url(assets:/pic/mainpic/save.png);}");
    save->setFocusPolicy(Qt::NoFocus);//去除焦点框
    save->setMinimumSize(QPixmap("assets:/pic/mainpic/save.png").width(),QPixmap("assets:/pic/mainpic/save.png").height());

    wlayout->addWidget(save,0,Qt::AlignHCenter);

    wlayout->addStretch(5);

}

void newfriendwidget::save_slot()
{
    //QFile jsfile("myjs");
    //jsfile.open(QIODevice::WriteOnly);

}
