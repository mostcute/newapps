#ifndef FRIENDLIST_H
#define FRIENDLIST_H

#include <QWidget>
#include <QWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QListWidget>
#include <QMouseEvent>
#include "MegaScrollBar.h"
#include "networkdebughelper.h"

class friendlist : public QListWidget
{
    Q_OBJECT
public:
    explicit friendlist(QWidget *parent = nullptr);


protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    int originPosY;
    int originPosX;
    bool isMoved;
    MegaScrollBar *bar;
    networkdebughelper *networkdebug;


signals:

public slots:
    void refresh_items();

};

#endif // FRIENDLIST_H
