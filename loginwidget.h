#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

class loginwidget : public QWidget
{
    Q_OBJECT
public:
    explicit loginwidget(QWidget *parent = nullptr);
    ~loginwidget();
private:
    QVBoxLayout *wlayout;
    QLabel *testlabel;

signals:

public slots:
};

#endif // LOGINWIDGET_H
