#ifndef FLISTTOPLINE_H
#define FLISTTOPLINE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QAction>
class flisttopline : public QWidget
{
    Q_OBJECT
public:
    explicit flisttopline(QWidget *parent = nullptr);
    QPushButton *morebtn;
    QLabel * toplabel;
    QAction * MoreAction;

signals:

public slots:
};

#endif // FLISTTOPLINE_H
