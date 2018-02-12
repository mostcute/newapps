#include "MegaScrollBar.h"

#include <QAbstractItemView>
#include <QEvent>
#include <QResizeEvent>
#include <QScrollBar>
#include <QDebug>
#include <QPainter>

#include "ScrollButton.h"


//namespace GUI
//{

    MegaScrollBar::MegaScrollBar( QAbstractItemView *parentView )
        : QWidget( parentView, Qt::FramelessWindowHint )
        , m_view( parentView )
    {
        Q_ASSERT( parentView );

        setAttribute( Qt::WA_TranslucentBackground );
        setAttribute( Qt::WA_TransparentForMouseEvents );

        m_scrollBtn = new ScrollButton( parentView );
        m_scrollBtn->setFixedSize( 20, 40 );

        m_view->installEventFilter( this );

        QScrollBar *sb = m_view->verticalScrollBar();
        connect( sb, SIGNAL( valueChanged( int ) ), this, SLOT( updatePos() ) );
    }

    MegaScrollBar::~MegaScrollBar()
    {
        removeEventFilter( m_view );
    }

    bool MegaScrollBar::eventFilter( QObject *obj, QEvent *event )
    {
        switch ( event->type() )
        {
        case QEvent::Enter:
            m_scrollBtn->show();
            break;

        case QEvent::Leave:
            m_scrollBtn->hide();
            break;

        case QEvent::Resize:
            onResize( static_cast< QResizeEvent * >( event ) );
            break;
        }

        return QWidget::eventFilter( obj, event );
    }

    void MegaScrollBar::onResize( QResizeEvent *e )
    {
        const int x = e->size().width() - width();
        const int y = 0;
        const int w = width();
        const int h = e->size().height();

        move( x, y );
        resize( w, h );

        updatePos();
    }

    void MegaScrollBar::updatePos()
    {
        QScrollBar *sb = m_view->verticalScrollBar();
        const int min = sb->minimum();
        const int val = sb->value();
        const int max = sb->maximum();
        const int x = pos().x() + ( width() - m_scrollBtn->width() ) / 2;

        if ( max == 0 )
        {
            m_scrollBtn->move( x, pos().y() );
            return ;
        }

        const int maxY = height() - m_scrollBtn->height();
        const int y = ( maxY * val ) / max;

        m_scrollBtn->move( x, y );
    }

    void MegaScrollBar::paintEvent( QPaintEvent * event )
    {
        Q_UNUSED( event );
        QPainter p( this );
        QRect rc( 0, 0, rect().width() - 1, rect().height() - 1 );

        // Draw any scroll background
        p.fillRect( rc, QColor( 255, 255, 200, 100 ) );
    }

    void MegaScrollBar::resizeEvent( QResizeEvent * event )
    {
        Q_UNUSED( event );
        updatePos();
    }

//}
