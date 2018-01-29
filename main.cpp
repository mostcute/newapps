#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include "global_variable.h"

#include "nbaseminiappwidget.h"
#include <QStackedWidget>

#include <QLabel>
#include <QDebug>
#include <QTimer>
#include <QVBoxLayout>
#include "QMap"
#include "nbasemoveablewidget.h"
#include "nbasefadewidget.h"
#include "nbaseminiappwidget.h"
#include "nbaseshadowwidget.h"
#include "nbasepopwidget.h"
#include "nbasesnowlabel.h"
#include "nbasecircleanimationwidget.h"
#include "nbaseledwidget.h"
#include "nbasemarqueelabel.h"
#include "nbaseqrencodewidget.h"
#include "nbaseroundprogressbar.h"
#include "nbasetoastr.h"
#include "nbaseshadowlabel.h"
#include "nbasewaitdialog.h"
#include "ntouchlistwidget.h"
#include "nbaserotatingstackedwidget.h"
#include "nbasecaptcha.h"
#include "nbaseimagecropper.h"
#include "nbaseswitchbutton.h"
#include "nbasereelwidget.h"
#include "nbaselogowidget.h"
#include "nbaseclickwave.h"
#include "nbasecountdown.h"

QStackedWidget * mainstack;
int main(int argc, char *argv[])
{ int b;
    QApplication a(argc, argv);

  /*  mainwindow w;
    w.setAutoFillBackground(true);
    w.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    w.setMouseTracking(true);
    a.connect(w.quitAction , SIGNAL(triggered(bool)), &a, SLOT(quit()));

    w.resize(500,500);
    w.show();*/
    NTouchListWidget *test_case_18 = new NTouchListWidget();
    test_case_18->setFixedSize(200,500);
    test_case_18->show();

    // 插入测试数据
    for(int index = 0;index != 200;index++) test_case_18->addItem(QString("测试项目:%1").arg(index));
    //



    return a.exec();
}


