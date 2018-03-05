#ifndef FITEM_H
#define FITEM_H

#include <QWidget>

class fitem : public QWidget
{
    Q_OBJECT
public:
    explicit fitem(qint16 num,QWidget *parent = nullptr);

signals:

public slots:
};

#endif // FITEM_H
