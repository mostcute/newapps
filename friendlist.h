#ifndef FRIENDLIST_H
#define FRIENDLIST_H

#include <QWidget>
#include <QWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QListWidget>
#include <QMouseEvent>

class friendlist : public QListWidget
{
    Q_OBJECT
public:
    explicit friendlist(QListWidget *parent = nullptr);
    QWidget *frienditem;
    QWidget *frienditem1;
    QWidget *frienditem2;
    QWidget *frienditem3;
    QWidget *frienditem4;
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    int originPosY;
    int originPosX;
    bool isMoved;

signals:

public slots:
};

#endif // FRIENDLIST_H
