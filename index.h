#ifndef INDEX_H
#define INDEX_H

#include <QWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QListWidget>
#include "friendlist.h"
#include "flisttopline.h"
#include "flistbottomline.h"
#include "testwidget.h"
#include <QStackedWidget>

class index : public QWidget
{
    Q_OBJECT
public:
    explicit index(QWidget *parent = nullptr);
    ~index();

private:
    QVBoxLayout *wlayout;
    flisttopline *topline;
    flistbottomline *bottomline;
    QStackedWidget *centerline;
    friendlist * myfriends;
    testwidget * myself;
    testwidget * myclub;


signals:
private slots:
   void groupClicked();
public slots:
};

#endif // INDEX_H
