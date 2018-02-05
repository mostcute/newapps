#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QObject>
#include <QWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QListWidget>

class testwidget : public QWidget
{
    Q_OBJECT
public:
    explicit testwidget(QWidget *parent = nullptr);
    ~testwidget();
private:
    QVBoxLayout *wlayout;
    QLabel *testlabel;

signals:

public slots:
};

#endif // TESTWIDGET_H
