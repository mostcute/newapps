#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QAction>
//class QSystemTrayIcon;
#include <QSystemTrayIcon>
#include <QVBoxLayout>
class QIcon;
class QPixmap;
class QMenu;
#include <QEvent>
#include <QCloseEvent>

#include "mytitlebar.h"
#include "global_variable.h"
#include "hostinfo.h"


class mainwindow : public QWidget
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = 0);
    ~mainwindow();
    virtual void changeEvent(QEvent *e);
    virtual void closeEvent(QCloseEvent *e);
    QVBoxLayout * vlayout;
    mytitlebar* title;




    QAction *quitAction ;//后台图标退出动作
private slots:
    void iconIsActived(QSystemTrayIcon::ActivationReason reason);
    void move_pos_here(QPoint point);
};

#endif // MAINWINDOW_H
