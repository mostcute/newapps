#include "club.h"
#include <QTimer>
club::club(QWidget *parent) : QWidget(parent)
{
   // wlayout = new QVBoxLayout;
    //this->resize(1080,1560);
    //this->setLayout(wlayout);
    QPalette pal1;
    QPixmap pixmap1("assets:/pic/mainpic/club.png");
    pal1.setBrush(QPalette::Window,QBrush(pixmap1));
    this->setPalette(pal1);

    //testlabel = new QLabel("asdsa");
    //testlabel->setPixmap(QPixmap("assets:/pic/mainpic/club.png"));
    //testlabel->setFixedSize(1080,1080);
    //testlabel->setMinimumSize(1000,600);
    //wlayout->setContentsMargins(0,0,0,0);
   // wlayout->addWidget(testlabel);

   // QTimer::singleShot(5000,this,SLOT(time_en()));

    //this->resize(1080,1080);
}
void club::time_en()
{
    testlabel->setText("hhhh");
    QString a ;
    a.append(QString::number(this->height()));
    a.append("x");
    a.append(QString::number(this->width()));
    testlabel->setText(a);

}
