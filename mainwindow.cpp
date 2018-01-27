#include "mainwindow.h"
#include <QIcon>
#include <QPixmap>
#include <QMenu>



mainwindow::mainwindow(QWidget *parent)
    : QWidget(parent)
{


    QSystemTrayIcon *system_tray;
    system_tray = new QSystemTrayIcon();
           //放在托盘提示信息、托盘图标
    QString tooltip;
    tooltip.append("会话消息： 任务栏头像不闪动");
    QMenu *tray_menu = new QMenu;
    quitAction = new QAction;
    quitAction->setText("退出");
    tray_menu->addAction(quitAction);

    system_tray->setContextMenu(tray_menu);
    system_tray ->setToolTip(tooltip);

    QPixmap*pixmap = NULL;
    pixmap = new QPixmap(200, 150);
    pixmap->load(":/sys.png");
    system_tray->setIcon(QIcon(*pixmap));
    connect(system_tray , SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(iconIsActived(QSystemTrayIcon::ActivationReason)));
    system_tray->show();
}

mainwindow::~mainwindow()
{

}

void mainwindow::iconIsActived(QSystemTrayIcon::ActivationReason reason)
  {
     switch(reason)
     {
     //点击托盘显示窗口

     case QSystemTrayIcon::Trigger:
      {
        this->showNormal();
         this->raise();
        break;
      }
     //双击托盘显示窗口
     case QSystemTrayIcon::DoubleClick:
     {
      this->showNormal();
      this->raise();


       break;
     }
     default:
      break;
     }
  }
void mainwindow::changeEvent(QEvent *e)
{
    if ((e->type() == QEvent::WindowStateChange) && isMinimized())
    {
        hide();
        e->ignore();
    }
}

void mainwindow::closeEvent(QCloseEvent *e)
{
    hide();
    e->ignore();

}
