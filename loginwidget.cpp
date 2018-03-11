#include "loginwidget.h"
#include <QPalette>
#include <QString>
#include <QPixmap>
#include <QFile>

#include <QMessageBox>




extern QSize screensize;
extern QSize screensize_2;
loginwidget::loginwidget(QWidget *parent) : QWidget(parent)
{

     wlayout = new QVBoxLayout;


     this->setAutoFillBackground(true); // 这句要加上, 否则可能显示不出背景图.
     QPalette pal;

     QPixmap pixmap("assets:/pic/background.jpg");
     //QPixmap pixmap("I:/qtandgit/newapp/android/android/assets/pic/background.jpg");
     pal.setBrush(QPalette::Window,QBrush(pixmap));

     setPalette(pal);
     wlayout->addSpacing(250);
    // headphotolabel = new MaskLabel;
     headphotolabel = new QLabel(this);
     headphotolabel->setFixedSize(254,254);
     headphotolabel->setPixmap(QPixmap("assets:/pic/headphoto2.png"));
     headphotolabel->setAttribute(Qt::WA_TranslucentBackground);//据说让背景透明
    // headphotolabel->setFrameShape(0);
     //headphotolabel->setFrameShadow(QFrame::Raised);
     wlayout->addWidget(headphotolabel,0,Qt::AlignHCenter);//居中显示
     //headphotolabel->setPixmap(QPixmap("I:/qtandgit/newapp/android/android/assets/pic/headphoto.png"));

     //headphotolabel->setStyleSheet("{background-color: transparent;}");
     //headphotolabel->resize(300,300);
     wlayout->setContentsMargins(100,0,100,0);


    // wlayout->setStretchFactor(headphotolabel,2);



     //wlayout->setAlignment(headphotolabel,Qt::AlignVCenter);

     usrname = new QLineEdit(this);
     usrname->setMaximumWidth(screensize.width()*3/4);
     usrname->setMinimumWidth(screensize.width()*2/3);
     usrname->setPlaceholderText(tr("username"));
    // usrname->setStyleSheet("background : (0x00,0xff,0x00,0x00)");
     //usrname->setStyleSheet("border :1px ;background : (0x00,0xff,0x00,0x00)");
     usrname->setStyleSheet("background:transparent");

     wlayout->addWidget(usrname,0,Qt::AlignHCenter);
     wlayout->setSpacing(0);
   //  wlayout->setStretchFactor(usrname,2);




     psd = new QLineEdit(this);
     psd->setMaximumWidth(screensize.width()*3/4);
     psd->setMinimumWidth(screensize.width()*2/3);
     psd->setPlaceholderText(tr("password"));
     psd->setEchoMode(QLineEdit::Password);
     psd->setAttribute(Qt::WA_TranslucentBackground);
     wlayout->addWidget(psd,0,Qt::AlignHCenter);


    // wlayout->addSpacing(100);
    //  wlayout->setStretchFactor(psd,1);
     loginbtn = new QPushButton(this);
     wlayout->addWidget(loginbtn,0,Qt::AlignHCenter);
     loginbtn->setStyleSheet("QPushButton{border-image: url(assets:/pic/login1.png);}"
                           "QPushButton:hover{border-image: url(assets:/pic/login1.png);}"
                           "QPushButton:pressed{border-image: url(assets:/pic/login2.png);}");
     loginbtn->setFocusPolicy(Qt::NoFocus);//去除焦点框
     loginbtn->setMinimumSize(QPixmap("assets:/pic/login1.png").width(),QPixmap("assets:/pic/login1.png").height());

   //  wlayout->setStretchFactor(loginbtn,2);

     regstbtn = new QPushButton(this);
     wlayout->addWidget(regstbtn,0,Qt::AlignHCenter);
     regstbtn->setStyleSheet("QPushButton{border-image: url(assets:/pic/reg1.png);}"
                           "QPushButton:hover{border-image: url(assets:/pic/reg1.png);}"
                           "QPushButton:pressed{border-image: url(assets:/pic/reg2.png);}");

     regstbtn->setFocusPolicy(Qt::NoFocus);
     regstbtn->setMinimumSize(QPixmap("assets:/pic/reg1.png").width(),QPixmap("assets:/pic/reg1.png").height());
    // wlayout->setStretchFactor(regstbtn,4);
     wlayout->addSpacing(50);

     flashphoto = new QLabel(this);
     flashphoto->setPixmap(QPixmap("assets:/pic/elec.png"));
     flashphoto->setFixedSize(QPixmap("assets:/pic/elec.png").width(),QPixmap("assets:/pic/elec.png").height());
   //  flashphoto
     flashphoto->setAttribute(Qt::WA_TranslucentBackground);//据说让背景透明
     wlayout->addWidget(flashphoto,0,Qt::AlignHCenter);//居中显示
     wlayout->addSpacing(200);


     connect(loginbtn, SIGNAL(clicked(bool)), this, SLOT(login_slot()));

     connect(regstbtn, SIGNAL(clicked(bool)), this, SLOT(register_slot()));

     this->setLayout(wlayout);
     loginclient = new newapptcpclient;
     loginclient->IPCONFIG("123.207.182.40",10000);
     loginclient->newConnect();
     connect(loginclient, SIGNAL(login_result(int)), this, SLOT(login_result(int)));
     networkdebug = new networkdebughelper();
     networkdebug->IPCONFIG("123.207.182.40",10010);
     networkdebug->newConnect();

}

loginwidget::~loginwidget()
{
    delete wlayout;
    delete testlabel;
    delete networkdebug;
    loginclient->deleteLater();
}
//data/data/apkname/username/friendlist/num.
//递归遍历文件夹
QFileInfoList loginwidget::GetFileList(QString path)
{
    QDir dir(path);

    //列出dir(path)目录文件下所有文件和目录信息，存储到file_list容器
    QFileInfoList file_list = dir.entryInfoList(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    //列出dir(path)目录下所有子文件夹
    QFileInfoList folder_list = dir.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot);
    //进行子文件夹folder_list递归遍历，将内容存入file_list容器
    for(int i= 0; i != folder_list.size(); i++)
    {
        QString name = folder_list.at(i).absoluteFilePath();
        QFileInfoList child_file_list = GetFileList(name);
        file_list.append(child_file_list);
    }
    return file_list;
}
QFileInfoList loginwidget::GetFileDir(QString path)
{
    QDir dir(path);
    //列出dir(path)目录下所有子文件夹
    QFileInfoList folder_list = dir.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot);
    //进行子文件夹folder_list递归遍历，将内容存入file_list容器
    for(int i= 0; i != folder_list.size(); i++)
    {
        QString name = folder_list.at(i).absoluteFilePath();
        QFileInfoList child_file_list = GetFileDir(name);
        folder_list.append(child_file_list);
    }
    return folder_list;
}
void loginwidget::login_slot()//处理登录事件
{

    loginclient->login(usrname->text(),psd->text());

    QString debg("start");
    QFileInfoList file_info_list = GetFileDir("/data/data/com.myapp.test");
    foreach(QFileInfo fileinfo, file_info_list)
    {
         debg.append(fileinfo.absoluteFilePath());
         debg.append("\n");
    }
     debg.append("finish");
     networkdebug->sendMessage(debg);


}

void loginwidget::login_result(int result)
{
     if(result == 1)
     {
         QString path("/data/data/com.myapp.test/");
         path.append(usrname->text());
         path.append("/");
         path.append("friendlist");

         QDir tempdir;
         if(!tempdir.exists(path))
          {
          //qDebug()<<"系统路径不存在，自动创建"<<endl;
             QString debg("auto create");
             networkdebug->sendMessage(debg);
          tempdir.mkpath(path);
          }
         emit login_success(usrname->text());
     }
     else if(result == 2)
     {
        QMessageBox::warning(this, tr("警告！"),tr("用户名错误！"),QMessageBox::Yes);

     }
     else
     {
        QMessageBox::warning(this, tr("警告！"),tr("密码错误！"),QMessageBox::Yes);

     }

}

void loginwidget::register_slot()
{



}


/*
     QString  a;
     a.append(QString::number(screensize_2.height()));
     a.append("*");
     a.append(QString::number(screensize_2.width()));
     a.append("\n");
     a.append(QString::number(screensize.height()));
     a.append("*");
     a.append(QString::number(screensize.width()));
     testlabel = new QLabel(a);
     wlayout->addWidget(testlabel);

*/
