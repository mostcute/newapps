#ifndef CLUB_H
#define CLUB_H

#include <QWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QListWidget>
class club : public QWidget
{
    Q_OBJECT
public:
    explicit club(QWidget *parent = nullptr);

private:
    QVBoxLayout *wlayout;
    QLabel *testlabel;

signals:

public slots:
    void time_en();
};

#endif // CLUB_H
