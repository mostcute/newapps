#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // mainwindow w;
   // w.show();
       QGraphicsScene *scene = new QGraphicsScene;  //场景
       QGraphicsRectItem *item = new QGraphicsRectItem(100,100,50,50);  //矩形项
       scene->addItem(item);  //项添加到场景
       QGraphicsView *view = new QGraphicsView; //视图
       view->setScene(scene);  //视图关联场景
       view->show();  //显示视图


    return a.exec();
}
