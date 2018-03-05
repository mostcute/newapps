#include "index.h"
#include <QPalette>
#include <QPixmap>
extern QSize screensize;
extern QSize screensize_2;
index::index(QWidget *parent) : QWidget(parent)
{

    wlayout = new QVBoxLayout(this);;
    topline = new flisttopline(this);
    bottomline = new flistbottomline(this);
    centerline = new QStackedWidget(this);
    myfriends = new friendlist();
    myself = new testwidget(this);
    myclub = new club(this);
    sta = new statusbar(this);

   // sta->setMinimumHeight(screensize_2.height()-screensize.height());

    centerline->addWidget(myfriends);
    centerline->addWidget(myself);
    centerline->addWidget(myclub);
    connect(bottomline->group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(groupClicked()));

    centerline->setCurrentWidget(myfriends);


   // this->setAutoFillBackground(true); // 这句要加上, 否则可能显示不出背景图.

    wlayout->addWidget(sta);
    wlayout->addWidget(topline);//
    wlayout->addWidget(centerline);//
    wlayout->addWidget(bottomline);//
    wlayout->setContentsMargins(0,0,0,0);
    //wlayout->setMargin(0);
    wlayout->setSpacing(0);
    this->setLayout(wlayout);

}
index:: ~index()
{


}
void index::groupClicked()
{
    QList<QAbstractButton*> list = bottomline->group->buttons();
        foreach (QAbstractButton *pButton, list)
        {
            if(pButton->isChecked())
            {
                if(pButton == bottomline->lbutton)
                {
                    centerline->setCurrentWidget(myself);
                }
                else if(pButton == bottomline->mbutton)
                {
                    centerline->setCurrentWidget(myfriends);
                }
                else if(pButton == bottomline->rbutton)
                {
                    centerline->setCurrentWidget(myclub);
                }

            }

        }

}
