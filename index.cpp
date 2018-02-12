#include "index.h"
#include <QPalette>
#include <QPixmap>

index::index(QWidget *parent) : QWidget(parent)
{

    wlayout = new QVBoxLayout;;
    topline = new QWidget;
    bottomline = new QWidget;
    centerline = new QWidget;
    myfriends = new friendlist;



   // this->setAutoFillBackground(true); // 这句要加上, 否则可能显示不出背景图.
    QPalette pal1;
    QPixmap pixmap1("assets:/pic/mainpic/buttomlinetest.png");
    //QPixmap pixmap("I:/qtandgit/newapp/android/android/assets/pic/background.jpg");
    pal1.setBrush(QPalette::Window,QBrush(pixmap1));
    bottomline->setPalette(pal1);

    QPalette pal2;
    QPixmap pixmap2("assets:/pic/mainpic/toplinetest.png");
    //QPixmap pixmap("I:/qtandgit/newapp/android/android/assets/pic/background.jpg");
    pal2.setBrush(QPalette::Window,QBrush(pixmap2));
    topline->setPalette(pal2);

   //wlayout->addWidget(topline,0,Qt::AlignHCenter);//居中显示
    topline->setMaximumHeight(150);
    topline->setMinimumHeight(150);
    bottomline->setMaximumHeight(200);
    bottomline->setMinimumHeight(200);

    wlayout->addWidget(topline);//
    wlayout->addWidget(myfriends);//
    wlayout->addWidget(bottomline);//
    wlayout->setContentsMargins(0,0,0,0);
    //wlayout->setMargin(0);
    wlayout->setSpacing(0);
    this->setLayout(wlayout);

}
index:: ~index()
{


}
