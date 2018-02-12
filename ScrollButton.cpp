#include "ScrollButton.h"

#include <QPainter>
#include <QGraphicsOpacityEffect>
#include <QColor>


//namespace GUI
//{

    ScrollButton::ScrollButton( QWidget *parent )
        : QWidget( parent )
    {
        QGraphicsOpacityEffect *op = new QGraphicsOpacityEffect( this );
        op->setOpacity( 0.5 );
        setGraphicsEffect( op );
    }

    ScrollButton::~ScrollButton()
    {
    }

    void ScrollButton::paintEvent( QPaintEvent * event )
    {
        Q_UNUSED( event );

        // Draw any scroll button
        QPainter p( this );
        QRect rc( 5, 5, rect().width() - 6, rect().height() - 6 );

        p.fillRect( rc, QColor( 0, 0, 0, 255 ) );
    }

//}
