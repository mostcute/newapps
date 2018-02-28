#include "flistbottomline.h"
#include <QGraphicsDropShadowEffect>
flistbottomline::flistbottomline(QWidget *parent) : QWidget(parent)
{   group = new QButtonGroup(this);
    group->setExclusive(true);

    QPalette pal1;
    QPixmap pixmap1("assets:/pic/mainpic/bottomkey.PNG");
    //QPixmap pixmap("I:/qtandgit/newapp/android/android/assets/pic/background.jpg");
    pal1.setBrush(QPalette::Window,QBrush(pixmap1));
    this->setPalette(pal1);
    this->setMaximumHeight(160);

    lbutton = new QRadioButton;
    mbutton = new QRadioButton;
    rbutton = new QRadioButton;
    hlayout = new QHBoxLayout;
    this->setLayout(hlayout);
    hlayout->addWidget(lbutton);
    hlayout->addWidget(mbutton);
    hlayout->addWidget(rbutton);
    hlayout->setContentsMargins(0,0,0,0);
    hlayout->setSpacing(0);
    group->addButton(lbutton);
    group->addButton(mbutton);
    group->addButton(rbutton);
    lbutton->setStyleSheet("QRadioButton::indicator:unchecked {image: url(assets:/pic/mainpic/buttomkey_L_W.PNG); }"
                           "QRadioButton::indicator:unchecked:hover {image: url(assets:/pic/mainpic/buttomkey_L_W.PNG);}"
                           "QRadioButton::indicator:unchecked:pressed {image: url(assets:/pic/mainpic/buttomkey_L_W.PNG);}"
                           "QRadioButton::indicator:checked {image: url(assets:/pic/mainpic/buttomkey_L_B.PNG);}"
                           "QRadioButton::indicator:checked:hover {image: url(assets:/pic/mainpic/buttomkey_L_B.PNG);}"
                           "QRadioButton::indicator:checked:pressed {image: url(assets:/pic/mainpic/buttomkey_L_B.PNG);}"
                           );
    mbutton->setStyleSheet("QRadioButton::indicator:unchecked {image: url(assets:/pic/mainpic/buttomkey_M_W.PNG); }"
                           "QRadioButton::indicator:unchecked:hover {image: url(assets:/pic/mainpic/buttomkey_M_W.PNG);}"
                           "QRadioButton::indicator:unchecked:pressed {image: url(assets:/pic/mainpic/buttomkey_M_W.PNG);}"
                           "QRadioButton::indicator:checked {image: url(assets:/pic/mainpic/buttomkey_M_B.PNG);}"
                           "QRadioButton::indicator:checked:hover {image: url(assets:/pic/mainpic/buttomkey_M_B.PNG);}"
                           "QRadioButton::indicator:checked:pressed {image: url(assets:/pic/mainpic/buttomkey_M_B.PNG);}"
                           );
    rbutton->setStyleSheet("QRadioButton::indicator:unchecked {image: url(assets:/pic/mainpic/buttomkey_R_W.PNG); }"
                           "QRadioButton::indicator:unchecked:hover {image: url(assets:/pic/mainpic/buttomkey_R_W.PNG);}"
                           "QRadioButton::indicator:unchecked:pressed {image: url(assets:/pic/mainpic/buttomkey_R_W.PNG);}"
                           "QRadioButton::indicator:checked {image: url(assets:/pic/mainpic/buttomkey_R_B.PNG);}"
                           "QRadioButton::indicator:checked:hover {image: url(assets:/pic/mainpic/buttomkey_R_B.PNG);}"
                           "QRadioButton::indicator:checked:pressed {image: url(assets:/pic/mainpic/buttomkey_R_B.PNG);}"
                           );
 lbutton->setMaximumSize(QPixmap("assets:/pic/mainpic/buttomkey_L_W.PNG").width(),QPixmap("assets:/pic/mainpic/buttomkey_L_W.PNG").height());
 mbutton->setMaximumSize(QPixmap("assets:/pic/mainpic/buttomkey_L_W.PNG").width(),QPixmap("assets:/pic/mainpic/buttomkey_L_W.PNG").height());
 rbutton->setMaximumSize(QPixmap("assets:/pic/mainpic/buttomkey_L_W.PNG").width(),QPixmap("assets:/pic/mainpic/buttomkey_L_W.PNG").height());
    lbutton->setFocusPolicy(Qt::NoFocus);//去除焦点框
    mbutton->setFocusPolicy(Qt::NoFocus);//去除焦点框
    rbutton->setFocusPolicy(Qt::NoFocus);//去除焦点框
    lbutton->setAttribute(Qt::WA_TranslucentBackground);//据说让背景透明
    mbutton->setAttribute(Qt::WA_TranslucentBackground);//据说让背景透明
    rbutton->setAttribute(Qt::WA_TranslucentBackground);//据说让背景透明
    mbutton->setChecked(true);

    this->setMaximumHeight(150);
    this->setMinimumHeight(150);
}
