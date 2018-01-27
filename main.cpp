#include "mainwindow.h"
#include <QApplication>
#include <QObject>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow w;
    a.connect(w.quitAction , SIGNAL(triggered(bool)), &a, SLOT(quit()));
    w.show();

    return a.exec();
}
