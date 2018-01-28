#include "mytitlebar.h"

mytitlebar::mytitlebar(QWidget *parent) : QWidget(parent)
{
    QPalette palette = this->palette();
    this->setAutoFillBackground(true); // 这句要加上, 否则可能显示不出背景图.

    palette.setBrush(QPalette::Window,
                     QBrush(QPixmap(":/title.jpg").scaled( // 缩放背景图.
                     this->size(),
                     Qt::IgnoreAspectRatio,
                     Qt::SmoothTransformation))); // 使用平滑的缩放方式
    this->setPalette(palette); // 至此, 已给widget加上了背景图*/
    setFixedHeight(40);
}

void mytitlebar::mousePressEvent(QMouseEvent *event)
{
if(event->button() == Qt::LeftButton)
{
  mouse_press = true;
  //鼠标相对于窗体的位置（或者使用event->globalPos() - this->pos()）
  move_point = event->pos();
  //qDebug()<<"mousepress";
}
}
void mytitlebar::mouseMoveEvent(QMouseEvent *event)
{
//若鼠标左键被按下
if(mouse_press)
{
    //鼠标相对于屏幕的位置
    QPoint move_pos = event->globalPos();
    move_pos_go(move_pos - move_point);
//移动主窗体位置

   //this->move(move_pos - move_point);
   // qDebug()<<"mousemove";
}
}
void mytitlebar::mouseReleaseEvent(QMouseEvent *event)
{
//设置鼠标为未被按下
    if(event->button() == Qt::LeftButton)
    {
      mouse_press = false;
     // qDebug()<<"mouserelease";
    }
}
/* //设置背景图
  QPalette palette = w.palette();
  palette.setBrush(QPalette::Window,
                   QBrush(QPixmap(":/baseback.jpg").scaled( // 缩放背景图.
                   w.size(),
                   Qt::IgnoreAspectRatio,
                   Qt::SmoothTransformation))); // 使用平滑的缩放方式
  w.setPalette(palette); // 至此, 已给widget加上了背景图*/

/*QPoint move_point; //移动的距离
bool mouse_press; //鼠标按下
//鼠标按下事件
void mousePressEvent(QMouseEvent *event);
//鼠标释放事件
void mouseReleaseEvent(QMouseEvent *event);
//鼠标移动事件
void mouseMoveEvent(QMouseEvent *event);

//3、定义鼠标事件
void LoginDialog::mousePressEvent(QMouseEvent *event)
{
if(event->button() == Qt::LeftButton)
{
  mouse_press = true;
  //鼠标相对于窗体的位置（或者使用event->globalPos() - this->pos()）
  move_point = event->pos();;
}
}
void LoginDialog::mouseMoveEvent(QMouseEvent *event)
{
//若鼠标左键被按下
if(mouse_press)
{
    //鼠标相对于屏幕的位置
    QPoint move_pos = event->globalPos();

   //移动主窗体位置
   this->move(move_pos - move_point);
}
}
void LoginDialog::mouseReleaseEvent(QMouseEvent *event)
{
//设置鼠标为未被按下
mouse_press = false;
}*/
