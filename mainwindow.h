#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QAction>
//class QSystemTrayIcon;
#include <QSystemTrayIcon>
class QIcon;
class QPixmap;
class QMenu;
#include <QEvent>
#include <QCloseEvent>

class mainwindow : public QWidget
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = 0);
    ~mainwindow();
    virtual void changeEvent(QEvent *e);
    virtual void closeEvent(QCloseEvent *e);


    QAction *quitAction ;//后台图标退出动作
private slots:
    void iconIsActived(QSystemTrayIcon::ActivationReason reason);
};

#endif // MAINWINDOW_H
