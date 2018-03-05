#include "friendlist.h"
#include <QPalette>
#include <QPixmap>
#include <QScrollBar>
#include "nbasetoastr.h"
#include "fitem.h"
extern QSize screensize;
extern QSize screensize_2;
friendlist::friendlist(QListWidget *parent) : QListWidget(parent)
{    isMoved = false;
    /* frienditem = new QWidget;
     frienditem1 = new QWidget;
     frienditem2 = new QWidget;
     frienditem3 = new QWidget;
     frienditem4 = new QWidget;*/
     fitem *itemnew = new fitem(0,this);
     fitem *itemnew1 = new fitem(0,this);
     fitem *itemnew2 = new fitem(0,this);
     fitem *itemnew3 = new fitem(0,this);
     fitem *itemnew4 = new fitem(0,this);
      QString a ;
      a.append(QString::number(screensize_2.height()));
      a.append("x");
      a.append(QString::number(screensize.height()));
     this->addItem(a);
     /*{
     QPalette pal1;
     QPixmap pixmap1("assets:/pic/mainpic/person.png");
     pal1.setBrush(QPalette::Window,QBrush(pixmap1));
     frienditem->setPalette(pal1);
     frienditem1->setPalette(pal1);
     frienditem2->setPalette(pal1);
     frienditem3->setPalette(pal1);
     frienditem4->setPalette(pal1);
     }*/

     QListWidgetItem *item = new QListWidgetItem;
     QListWidgetItem *item1 = new QListWidgetItem;
     QListWidgetItem *item2 = new QListWidgetItem;
     QListWidgetItem *item3 = new QListWidgetItem;
     QListWidgetItem *item4 = new QListWidgetItem;
     item->setText("111");

     item4->setText("222");
     QSize itemsize = item->sizeHint();
     itemsize.setHeight(450);

     item->setSizeHint(itemsize);
     item1->setSizeHint(itemsize);
     item2->setSizeHint(itemsize);
     item3->setSizeHint(itemsize);
     item4->setSizeHint(itemsize);
     //item->setText("zhangsan");


     //this->addItem("zhangsan");

     this->addItem(item);
     this->addItem(item1);
     this->addItem(item2);
     this->addItem(item3);
     this->addItem(item4);
     this->setItemWidget(item,itemnew);
     this->setItemWidget(item1,itemnew1);
     this->setItemWidget(item2,itemnew2);
     this->setItemWidget(item3,itemnew3);
     this->setItemWidget(item4,itemnew4);


     {
     QPalette pal1;
     QPixmap pixmap1("assets:/pic/mainpic/background.png");
     pal1.setBrush(QPalette::Window,QBrush(pixmap1));
     this->setPalette(pal1);
     }
     this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // this->setViewportMargins(0,0,0,0);
     this->setSpacing(10);


     this->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    // this->setStyleSheet({"border: none"});



    // this->setContentsMargins(0,0,0,0);
     bar = new MegaScrollBar(this);
     //this->setVerticalScrollBar(bar);
     bar->resize( 40, 30 ); // First arg - width of scroller


}

void friendlist::mousePressEvent(QMouseEvent *event)
{
    originPosY = event->globalY();
    originPosX = event->globalX();
    QListWidget::mousePressEvent(event);
}

void friendlist::mouseMoveEvent(QMouseEvent *event)
{
    int varDiff;
    if(flow() == QListWidget::TopToBottom){
        varDiff = verticalScrollBar()->sliderPosition() - (event->globalY() - originPosY);
        verticalScrollBar()->setSliderPosition(varDiff);
    } else {
        varDiff = horizontalScrollBar()->sliderPosition() - (event->globalX() - originPosX);
        horizontalScrollBar()->setSliderPosition(varDiff);
    }
    originPosY = event->globalY();
    originPosX = event->globalX();
    isMoved = true;
    bar->show();
    bar->m_scrollBtn->show();
    QListWidget::mouseMoveEvent(event);
}

void friendlist::mouseReleaseEvent(QMouseEvent *event)
{
    int varDiff;
    if(flow() == QListWidget::TopToBottom){
        varDiff = verticalScrollBar()->sliderPosition() - (event->globalY() - originPosY);
        verticalScrollBar()->setSliderPosition(varDiff);
    } else {
        varDiff = horizontalScrollBar()->sliderPosition() - (event->globalX() - originPosX);
        horizontalScrollBar()->setSliderPosition(varDiff);
    }
    if(isMoved){
        if(varDiff<=0){
            NBaseToastr * tempToa = new NBaseToastr(this, "已经到达顶部",400,100);
            tempToa->toastr();
        } else if(varDiff >= verticalScrollBar()->maximum()){
            NBaseToastr * tempToa = new NBaseToastr(this, "已经到达底部",400,100);
            tempToa->toastr();
        }
    }
    isMoved = false;
    bar->hide();//隐藏滑动条
    bar->m_scrollBtn->hide();
    originPosY = event->globalY();
    originPosX = event->globalX();
    QListWidget::mouseReleaseEvent(event);
}

