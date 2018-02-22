#include "mainwindow.h"
struct window_com
{
      char wind_name[20];
      void *win_num;
      //int index;
};
mainwindow::mainwindow(QWidget *parent)
    : QWidget(parent)
{

    create_framework();//构建框架
    show_stackwidget(create_loginwidget());
    connect(loginview, SIGNAL(login_success()), this, SLOT(login_success_slot()));


}

mainwindow::~mainwindow()
{

}
void mainwindow::login_success_slot()
{

   //show_stackwidget(create_testwidget());
     show_stackwidget(create_indexview());
     delete_loginwidget();


}
void mainwindow::create_framework()
{
    mainlayout = new QVBoxLayout;
    mainlayout->setContentsMargins(0,0,0,0);
    setLayout(mainlayout);
    ViewStack = new QStackedWidget();
    mainlayout->addWidget(ViewStack);
}
QWidget  * mainwindow::create_loginwidget()
{
    loginview = new loginwidget;
    ViewStack->addWidget(loginview);
    return loginview;
}
void mainwindow::delete_loginwidget()
{
     delete loginview;
}
QWidget  * mainwindow::create_testwidget()
{
    testview = new testwidget;
    ViewStack->addWidget(testview);
    return testview;

}
QWidget  * mainwindow::create_indexview()
{
    indexview = new index;
    ViewStack->addWidget(indexview);
    return indexview;

}

void mainwindow::show_stackwidget(QWidget  *widget)
{
   ViewStack->setCurrentWidget(widget);

}
void mainwindow::add_winlist(char* name,void* widget)
{
       struct window_com new_widget;
       strcpy(new_widget.wind_name,name);
       new_widget.win_num = widget;
       win_list.append(new_widget);
}

