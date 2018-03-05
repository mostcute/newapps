#include "statusbar.h"

statusbar::statusbar(QWidget *parent) : QWidget(parent)
{

    this->setStyleSheet("background-color:rgb(62,29,79) ;");
    this->setMaximumHeight(72);
    this->setMinimumHeight(72);
}
