#include "mainwindow.h"
#include <QApplication>

#include <QScreen>
#include <QSize>
#include "extrafont.h"
#include <QFont>
#include<QFontDatabase>
QScreen *screen ;
QSize screensize;
QSize screensize_2;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    screen = a.primaryScreen();
    screensize = screen->availableSize();
    screensize_2 = screen->size();
    //DroidSansFallback.ttf//旧字体
   /* int fontId = QFontDatabase::addApplicationFont("/system/fonts/DroidSansFallback.ttf");
    QString msyh = QFontDatabase::applicationFontFamilies ( fontId ).at(0);
    QFont font(msyh,20);
    a.setFont(font);*/
    QString strFont =  loadFontFamilyFromFiles("assets:/font/msyhl.ttc");//assets:/font/msyhl.ttc
    if(!strFont.isEmpty())
    {
       // qDebug() <<"Error";
    }
    else
    {
        QFont font(strFont);
        a.setFont(font);
    }

    mainwindow w;
    a.installEventFilter(&w);
    w.show();


    return a.exec();
}
