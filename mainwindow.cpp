#include "mainwindow.h"

mainwindow::mainwindow(QWidget *parent)
    : QWidget(parent)
{

    mainlayout = new QVBoxLayout;
    mainlayout->setContentsMargins(0,0,0,0);
    setLayout(mainlayout);
    ViewStack = new QStackedWidget();
    mainlayout->addWidget(ViewStack);


    loginview = new loginwidget;
    ViewStack->addWidget(loginview);
    ViewStack->setCurrentWidget(loginview);
    this->resize(1000,1900);

}

mainwindow::~mainwindow()
{

}
