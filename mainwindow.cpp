#include "mainwindow.h"

mainwindow::mainwindow(QWidget *parent)
    : QWidget(parent)
{
    ViewStack = new QStackedWidget(this);
    loginview = new loginwidget;
    ViewStack->addWidget(loginview);
    ViewStack->setCurrentWidget(loginview);
}

mainwindow::~mainwindow()
{

}
