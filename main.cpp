#include "mainwindow.h"
#include <QApplication>

#include <QScreen>
#include <QSize>
QScreen *screen ;
QSize screensize;
QSize screensize_2;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    screen = a.primaryScreen();
    screensize = screen->availableSize();
    screensize_2 = screen->size();

    mainwindow w;
    w.show();


    return a.exec();
}
