#ifndef SCROLLBUTTON_H
#define SCROLLBUTTON_H

#include <QWidget>


//namespace GUI
//{

    class ScrollButton
        : public QWidget
    {
        Q_OBJECT

    public:
        ScrollButton( QWidget *parent );
        ~ScrollButton();

    private:
        void paintEvent( QPaintEvent * event );
    };

//}


#endif // SCROLLBUTTON_H
