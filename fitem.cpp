#include "fitem.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

//"data/data/apkname/username/friendlist/num"
fitem::fitem(QString name,QWidget *parent) : QWidget(parent)
{
    /*QPalette pal1;
    QPixmap pixmap1("assets:/pic/mainpic/itemback.png");
    pal1.setBrush(QPalette::Window,QBrush(pixmap1));
    this->setPalette(pal1);*/
    this->setStyleSheet("background-color:rgb(255,255,255) ;");
    QLabel *itemphoto = new QLabel(this);
    QLabel *itemname = new QLabel(this);
    QLabel *itemimage = new QLabel(this);
    QLabel *itemstar1 = new QLabel(this);
    QLabel *itemstar2 = new QLabel(this);
    QLabel *itemstar3 = new QLabel(this);
    QLabel *itemstar4 = new QLabel(this);
    QLabel *itemstar5 = new QLabel(this);
    QLabel *itemhobby = new QLabel("爱好：",this);
    itemstar1->setPixmap(QPixmap("assets:/pic/mainpic/1.png"));
    itemstar1->setFixedSize(QPixmap("assets:/pic/mainpic/1.png").size());
    itemstar2->setPixmap(QPixmap("assets:/pic/mainpic/1.png"));
    itemstar2->setFixedSize(QPixmap("assets:/pic/mainpic/1.png").size());
    itemstar3->setPixmap(QPixmap("assets:/pic/mainpic/1.png"));
    itemstar3->setFixedSize(QPixmap("assets:/pic/mainpic/1.png").size());
    itemstar4->setPixmap(QPixmap("assets:/pic/mainpic/1.png"));
    itemstar4->setFixedSize(QPixmap("assets:/pic/mainpic/1.png").size());
    itemstar5->setPixmap(QPixmap("assets:/pic/mainpic/1.png"));
    itemstar5->setFixedSize(QPixmap("assets:/pic/mainpic/1.png").size());

    //itemphoto->setPixmap(QPixmap("assets:/pic/mainpic/boy.PNG"));
    itemphoto->setAttribute(Qt::WA_TranslucentBackground);//据说让背景透明
    itemphoto->setFixedSize(QPixmap("assets:/pic/mainpic/boy.png").size());
    QHBoxLayout *layout1 = new QHBoxLayout(this);
    QVBoxLayout *layoutl = new QVBoxLayout(this);
    QVBoxLayout *layoutr = new QVBoxLayout(this);
    QHBoxLayout *starlayout = new QHBoxLayout(this);

    QFile jsfile(name);
    jsfile.open(QIODevice::ReadOnly);
    QByteArray test = jsfile.readAll();
    QJsonParseError json_error;
    QJsonDocument parse_doucment = QJsonDocument::fromJson(test, &json_error);
    if(json_error.error == QJsonParseError::NoError)
    {
        if(parse_doucment.isObject())
        {
            QJsonObject obj = parse_doucment.object();
            if(obj.contains("name"))
            {
            QJsonValue name_value = obj.take("name");
                if(name_value.isString())
                {
                    QString objname = name_value.toString();
                    itemname->setText(objname);
                }
            }
            if(obj.contains("firstimage"))
            {
            QJsonValue name_value = obj.take("firstimage");
                if(name_value.isString())
                {
                    QString objname = name_value.toString();
                    itemimage->setText(objname);
                }
            }
            if(obj.contains("gender"))
            {
            QJsonValue name_value = obj.take("gender");
                if(name_value.isString())
                {
                    QString objname = name_value.toString();
                    if(objname == QString("boy"))
                        itemphoto->setPixmap(QPixmap("assets:/pic/mainpic/boy.png"));
                    else
                        itemphoto->setPixmap(QPixmap("assets:/pic/mainpic/girl.png"));
                }
            }

        }
    }


    //itemname->setText("罗天翔");
    itemname->setMaximumHeight(100);
    //让QLabel自适应text的大小，直接用下面的代码：
    itemimage->adjustSize();
    //让QLabel能够自动判断并换行显示：
    itemimage->setWordWrap(true);
    itemimage->setAlignment(Qt::AlignTop);
   // itemimage->setText("skajhfjkashfkjhu撒看见发贺卡和防空机枪安徽人反馈我回去撒谎的嘎斯柯达斯柯达贺卡设计和打卡时间");
    itemimage->setMaximumHeight(250);

    layout1->addLayout(layoutl);
    layout1->addSpacing(50);
    layout1->addLayout(layoutr);
    layoutl->addSpacing(20);
    layoutl->addWidget(itemphoto,0,Qt::AlignTop);
    layoutl->addLayout(starlayout);
    starlayout->addWidget(itemstar1);
    starlayout->addWidget(itemstar2);
    starlayout->addWidget(itemstar3);
    starlayout->addWidget(itemstar4);
    starlayout->addWidget(itemstar5);
    starlayout->setSpacing(0);
    starlayout->setContentsMargins(0,0,0,0);
    layoutr->addWidget(itemname);
    layoutr->addWidget(itemimage);
    layoutr->addWidget(itemhobby);

    this->setLayout(layout1);
    //this->resize(1000,500);

}
