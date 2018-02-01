#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

#include <QStackedWidget>
#include "loginwidget.h"
#include <QVBoxLayout>


class mainwindow : public QWidget
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = 0);
    ~mainwindow();

private:
    QStackedWidget *ViewStack;
    loginwidget *loginview;
    QVBoxLayout *mainlayout;
};

#endif // MAINWINDOW_H
