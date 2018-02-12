#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

#include <QStackedWidget>
#include "loginwidget.h"
#include "testwidget.h"
<<<<<<< HEAD
#include "index.h"
=======
>>>>>>> 190fa6dc33e7bdef75de5a6499fda4b3d0b66027
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
<<<<<<< HEAD
    index * indexview;

=======
>>>>>>> 190fa6dc33e7bdef75de5a6499fda4b3d0b66027

    void create_framework();
    QWidget  * create_loginwidget();
    QWidget  * create_testwidget();
<<<<<<< HEAD
    QWidget  * create_indexview();
=======
>>>>>>> 190fa6dc33e7bdef75de5a6499fda4b3d0b66027
    void add_winlist(char* name,void* widget);

public slots:
    void login_success_slot();
};

#endif // MAINWINDOW_H
