#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

#include <QStackedWidget>
#include "loginwidget.h"
#include "testwidget.h"

#include "index.h"
#include "newfriendwidget.h"

#include <QVBoxLayout>
#include <QList>


class mainwindow : public QWidget
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = 0);
    ~mainwindow();
    QList<struct window_com> win_list;
    QList<QWidget *>last_widget;
    void show_stackwidget(QWidget  *widget);
    void show_lastwidget();
    QString username;

protected:
    bool eventFilter(QObject *watched, QEvent *event);
private:
    QStackedWidget *ViewStack;
    loginwidget *loginview;
    testwidget *testview;
    QVBoxLayout *mainlayout;
    index * indexview;
    newfriendwidget * newfriend;
    void create_framework();
    QWidget  * create_loginwidget();
    void delete_loginwidget();
    QWidget  * create_testwidget();
    QWidget  * create_indexview();
    void add_winlist(char* name,void* widget);

public slots:
    void login_success_slot(QString name);
    void add_friend_slot();
    void save_finished_slot();
};

#endif // MAINWINDOW_H
