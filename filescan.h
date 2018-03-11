#ifndef FILESCAN_H
#define FILESCAN_H
#include <QFileInfo>

class filescan
{
public:
    filescan();
    QFileInfoList GetFileList(QString path);
    QFileInfoList GetFileLists(QString path);
    QFileInfoList GetFileDir(QString path);
};

#endif // FILESCAN_H
