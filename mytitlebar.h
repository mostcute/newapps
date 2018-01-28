#ifndef MYTITLEBAR_H
#define MYTITLEBAR_H

#include <QWidget>
#include <QEvent>
#include <QDebug>
#include <QPoint>
#include <QMouseEvent>

class mytitlebar : public QWidget
{
    Q_OBJECT
public:
    explicit mytitlebar(QWidget *parent = nullptr);
    QPoint move_point; //移动的距离
    bool mouse_press; //鼠标按下
    //鼠标按下事件
    void mousePressEvent(QMouseEvent *event);
    //鼠标释放事件
    void mouseReleaseEvent(QMouseEvent *event);
    //鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);

signals:
   void move_pos_go(QPoint point);

public slots:
};

#endif // MYTITLEBAR_H

