#include "loginwidget.h"

loginwidget::loginwidget(QWidget *parent) : QWidget(parent)
{
     wlayout = new QVBoxLayout;
     this->setLayout(wlayout);
     testlabel = new QLabel("testlabel");
     wlayout->addWidget(testlabel);
}

loginwidget::~loginwidget()
{
    delete wlayout;
    delete testlabel;


}
