#ifndef MEGASCROLLBAR_H
#define MEGASCROLLBAR_H

#include <QWidget>
#include <QPointer>


class QAbstractItemView;
class QResizeEvent;

//namespace GUI
//{

    class MegaScrollBar
        : public QWidget
    {
        Q_OBJECT

    public:
        MegaScrollBar( QAbstractItemView *parentView );
        ~MegaScrollBar();

    private slots:
        void updatePos();

    private:
        bool eventFilter( QObject *obj, QEvent *event );
        void onResize( QResizeEvent *e );
        void paintEvent( QPaintEvent * event );
        void resizeEvent( QResizeEvent * event );

        QPointer< QAbstractItemView > m_view;
        QPointer< QWidget > m_scrollBtn;
    };

//}


#endif // MEGASCROLLBAR_H
