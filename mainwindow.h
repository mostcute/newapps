#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "global_variable.h"
#include <QStackedWidget>
#include "loginwidget.h"


class mainwindow : public QWidget
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = 0);
    ~mainwindow();

private:
    QStackedWidget *ViewStack;
    loginwidget *loginview;
};

#endif // MAINWINDOW_H
