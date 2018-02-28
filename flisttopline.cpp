#include "flisttopline.h"
#include <QPalette>
#include <QPixmap>
#include <QMenu>
flisttopline::flisttopline(QWidget *parent) : QWidget(parent)
{
    QPalette pal;
    QPixmap pixmap("assets:/pic/mainpic/topline.png");
    toplabel = new QLabel(this);
    morebtn = new QPushButton(this);
    QString a;

    morebtn->move(960,10);
    {
        morebtn->setStyleSheet("QPushButton{border-image: url(assets:/pic/mainpic/more1.png);}"
                              "QPushButton:hover{border-image: url(assets:/pic/mainpic/more1.png);}"
                              "QPushButton:pressed{border-image: url(assets:/pic/mainpic/more.png);}");

        morebtn->setFocusPolicy(Qt::NoFocus);
        morebtn->resize(QPixmap("assets:/pic/mainpic/more.png").width(),QPixmap("assets:/pic/mainpic/more.png").height());
        //morebtn->setMinimumSize(QPixmap("assets:/pic/mainpic/more.png").width(),QPixmap("assets:/pic/mainpic/more.png").height());
    }
    //a.append(QString::number(this->width()));
    //a.append("and");
    //a.append(QString::number(morebtn->width()));
    //toplabel->setText(a);

    QMenu * moremenu=new QMenu;

    moremenu->setStyleSheet("\
                     QMenu {\
                     background-color:rgb(62,29,79); /*整个背景*/\
                      border: 3px solid rgb(235,110,36);/*整个菜单边缘*/\
                     }\
                 QMenu::item {\
                     font-size: 30pt; \
                     color: rgb(225,225,225);  /*字体颜色*/\
                     border: 3px solid rgb(60,60,60);    /*item选框*/\
                     background-color:rgb(62,29,79);\
                     padding:16px 16px; /*设置菜单项文字上下和左右的内边距，效果就是菜单中的条目左右上下有了间隔*/\
                     margin:2px 2px;/*设置菜单项的外边距*/\
                      }\
                 QMenu::item:selected { \
                     background-color:rgb(235,110,36);/*选中的样式*/\
                     }\
                 QMenu::item:pressed {/*菜单项按下效果*/\
                                           border: 1px solid rgb(60,60,61); \
                                            background-color: rgb(220,80,6); \
                                        }");



    MoreAction=new QAction("添加朋友");
    QFont ft;
    //ft.setFamily(ft.defaultFamily());
    ft.setPointSize(30);
    moremenu->setFont(ft);
    //moremenu->setStyleSheet("QMenu::item{ padding:100px;}");
    //moremenu->setStyleSheet("{ font: 20px; }");
   // MoreAction->setStyleSheet("{background-image: url(assets:/pic/mainpic/moremenu.png);}");

    moremenu->addAction(MoreAction);
    morebtn->setMenu(moremenu);


    //QPixmap pixmap("I:/qtandgit/newapp/android/android/assets/pic/background.jpg");
    pal.setBrush(QPalette::Window,QBrush(pixmap));
    this->setPalette(pal);
   //wlayout->addWidget(topline,0,Qt::AlignHCenter);//居中显示
    this->setMaximumHeight(150);
    this->setMinimumHeight(150);
}
