#include "filescan.h"
#include <QFile>
#include <QDir>
filescan::filescan()
{

}


//递归遍历文件夹
QFileInfoList filescan::GetFileLists(QString path)
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
        QFileInfoList child_file_list = GetFileLists(name);
        file_list.append(child_file_list);
    }
    return file_list;
}

QFileInfoList filescan::GetFileList(QString path)
{
    QDir dir(path);

    //列出dir(path)目录文件下所有文件和目录信息，存储到file_list容器
    QFileInfoList file_list = dir.entryInfoList(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    return file_list;
}

QFileInfoList filescan::GetFileDir(QString path)
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
