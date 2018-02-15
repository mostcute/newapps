#include "flisttopline.h"
#include <QPalette>
#include <QPixmap>
#include <QMenu>
flisttopline::flisttopline(QWidget *parent) : QWidget(parent)
{
    QPalette pal;
    QPixmap pixmap("assets:/pic/mainpic/topline.png");
    toplabel = new QLabel(this);
    morebtn = new QPushButton(this);
    QString a;

    morebtn->move(900,10);
    {
        morebtn->setStyleSheet("QPushButton{border-image: url(assets:/pic/mainpic/more1.png);}"
                              "QPushButton:hover{border-image: url(assets:/pic/mainpic/more1.png);}"
                              "QPushButton:pressed{border-image: url(assets:/pic/mainpic/more.png);}");

        morebtn->setFocusPolicy(Qt::NoFocus);
        morebtn->resize(QPixmap("assets:/pic/mainpic/more.png").width(),QPixmap("assets:/pic/mainpic/more.png").height());
        //morebtn->setMinimumSize(QPixmap("assets:/pic/mainpic/more.png").width(),QPixmap("assets:/pic/mainpic/more.png").height());
    }
    a.append(QString::number(this->width()));
    a.append("and");
    a.append(QString::number(morebtn->width()));
    toplabel->setText(a);

    QMenu * moremenu=new QMenu;


    MoreAction=new QAction("添加朋友");
    QFont ft;
    //ft.setFamily(ft.defaultFamily());
    ft.setPointSize(30);
    moremenu->setFont(ft);
    //moremenu->setStyleSheet("QMenu::item{ padding:100px;}");
    //moremenu->setStyleSheet("{ font: 20px; }");
    moremenu->addAction(MoreAction);
    morebtn->setMenu(moremenu);


    //QPixmap pixmap("I:/qtandgit/newapp/android/android/assets/pic/background.jpg");
    pal.setBrush(QPalette::Window,QBrush(pixmap));
    this->setPalette(pal);
   //wlayout->addWidget(topline,0,Qt::AlignHCenter);//居中显示
    this->setMaximumHeight(150);
    this->setMinimumHeight(150);
}
