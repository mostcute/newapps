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
     //show_stackwidget(create_indexview());
    ViewStack->setCurrentWidget(create_indexview());
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
     ViewStack->removeWidget(loginview);
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
    connect(indexview->topline,SIGNAL(addfriend()),this, SLOT(add_friend_slot()));
    return indexview;

}

void mainwindow::show_stackwidget(QWidget  *widget)
{
   last_widget.append(ViewStack->currentWidget());
   ViewStack->setCurrentWidget(widget);

}
void mainwindow::show_lastwidget()
{
   if(!last_widget.isEmpty())
   {
       ViewStack->setCurrentWidget(last_widget.last());
       last_widget.removeLast();
   }


}
void mainwindow::add_winlist(char* name,void* widget)
{
       struct window_com new_widget;
       strcpy(new_widget.wind_name,name);
       new_widget.win_num = widget;
       win_list.append(new_widget);
}

void mainwindow::add_friend_slot()
{
    if(newfriend==NULL)
    {
        newfriend = new newfriendwidget;
        ViewStack->addWidget(newfriend);
    }

    show_stackwidget(newfriend);


}
bool mainwindow::eventFilter(QObject *watched, QEvent *event)
{
    QEvent::Type t = event->type();
    switch(t)
    {
       case QEvent::KeyPress:
        if((static_cast<QKeyEvent *>(event))->key() == Qt::Key_Back)
        {
         event->accept();
         return true;
        }
        break;

       case QEvent::KeyRelease:
        if((static_cast<QKeyEvent *>(event))->key() == Qt::Key_Back)
        {
         event->accept();
         show_lastwidget();
         return true;


        }
          break;
    default:
        break;
    }
   return QWidget::eventFilter(watched,event);
}

