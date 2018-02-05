#include "testwidget.h"



testwidget::testwidget(QWidget *parent) : QWidget(parent)
{
     wlayout = new QVBoxLayout;
     this->setLayout(wlayout);
     testlabel = new QLabel("testlabel");
     wlayout->addWidget(testlabel);
}

testwidget::~testwidget                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ()
{
    delete wlayout;
    delete testlabel;


}
