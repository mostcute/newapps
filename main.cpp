#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include "global_variable.h"


#include <QStackedWidget>

QStackedWidget * mainstack;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow w;
    w.setAutoFillBackground(true);
    w.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    w.setMouseTracking(true);
    a.connect(w.quitAction , SIGNAL(triggered(bool)), &a, SLOT(quit()));

    w.resize(500,500);
    w.show();

    return a.exec();
}


