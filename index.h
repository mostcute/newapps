#ifndef INDEX_H
#define INDEX_H

#include <QWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QListWidget>
#include "friendlist.h"

class index : public QWidget
{
    Q_OBJECT
public:
    explicit index(QWidget *parent = nullptr);
    ~index();

private:
    QVBoxLayout *wlayout;
    QWidget *topline;
    QWidget *bottomline;
    QWidget *centerline;
    friendlist * myfriends;

signals:

public slots:
};

#endif // INDEX_H
