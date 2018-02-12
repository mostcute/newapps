#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

#include <QStackedWidget>
#include "loginwidget.h"
#include "testwidget.h"

#include "index.h"

#include <QVBoxLayout>
#include <QList>


class mainwindow : public QWidget
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = 0);
    ~mainwindow();
    QList<struct window_com> win_list;
    void show_stackwidget(QWidget  *widget);

private:
    QStackedWidget *ViewStack;
    loginwidget *loginview;
    testwidget *testview;
    QVBoxLayout *mainlayout;
    index * indexview;
    void create_framework();
    QWidget  * create_loginwidget();
    QWidget  * create_testwidget();
    QWidget  * create_indexview();
    void add_winlist(char* name,void* widget);

public slots:
    void login_success_slot();
};

#endif // MAINWINDOW_H
