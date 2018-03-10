#ifndef NEWFRIENDWIDGET_H
#define NEWFRIENDWIDGET_H

#include <QWidget>
class QVBoxLayout;
class QLabel;
class QPushButton;
class QLineEdit;
class QTextEdit;
class QRadioButton;

class newfriendwidget : public QWidget
{
    Q_OBJECT
public:
    explicit newfriendwidget(QWidget *parent = nullptr);

private:
    QWidget *topline;
    QVBoxLayout *wlayout;
    QLabel *photo;
    QPushButton *save;
    QTextEdit *firstimage;
    QLineEdit *name;
    QLineEdit *phone;
    QLineEdit *company;
    QLineEdit *relation;
    QLineEdit *birthday;
    QLineEdit *account;
    QLineEdit *email;
    QLineEdit *job;
    QRadioButton *genderboy;
    QRadioButton *gendergirl;



signals:

public slots:
    void save_slot();
};

#endif // NEWFRIENDWIDGET_H
