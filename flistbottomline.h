#ifndef FLISTBOTTOMLINE_H
#define FLISTBOTTOMLINE_H

#include <QWidget>
#include <QHBoxLayout>
#include <QRadioButton>
#include <QButtonGroup>
class flistbottomline : public QWidget
{
    Q_OBJECT
public:
    explicit flistbottomline(QWidget *parent = nullptr);
    QButtonGroup *group;
    QRadioButton *lbutton;
    QRadioButton *mbutton;
    QRadioButton *rbutton;
signals:

private:
    QHBoxLayout *hlayout;

public slots:
};

#endif // FLISTBOTTOMLINE_H
