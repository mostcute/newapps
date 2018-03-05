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
#include "club.h"
#include <QStackedWidget>
#include "statusbar.h"

class index : public QWidget
{
    Q_OBJECT
public:
    explicit index(QWidget *parent = nullptr);
    ~index();
    flisttopline *topline;
private:
    QVBoxLayout *wlayout;

    flistbottomline *bottomline;
    QStackedWidget *centerline;
    friendlist * myfriends;
    testwidget * myself;
    club * myclub;
    statusbar *sta;


signals:
private slots:
   void groupClicked();
public slots:
};

#endif // INDEX_H
