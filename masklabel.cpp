#include "masklabel.h"

MaskLabel::MaskLabel(QWidget *parent) : QLabel(parent)
{
}

void MaskLabel::paintEvent(QPaintEvent *e)
{
    if(pixmap()){
        QPainter painter(this);
        painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
        QPainterPath path;
        int round = qMin(width(), height());
        path.addEllipse(0, 0, round, round);
        painter.setClipPath(path);
        painter.drawPixmap(-1, -1, width(), height(), *pixmap());
    }else{
        QLabel::paintEvent(e);
    }
}


/*

m_pCRoundLable = new CRoundLabel(this);

 QPixmap pixMap(":/user.png");

 m_pCRoundLable->setPixmap(pixMap);//初始化一个默认图片,可按需要调用这个接口改变label的图片
 m_pCRoundLable->setGeometry(10, 10, 80, 80);
*/
