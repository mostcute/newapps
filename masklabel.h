#ifndef MASKLABEL_H
#define MASKLABEL_H

#include <QLabel>
#include <QWidget>
#include <QPainter>
#include <QPainterPath>

class MaskLabel : public QLabel
{
public:
    MaskLabel(QWidget *parent=0);

protected:
    void paintEvent(QPaintEvent *);
};

#endif // MASKLABEL_H
