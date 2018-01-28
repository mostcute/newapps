#include "hostinfo.h"
#include <windows.h>
#include <winbase.h>
#define MB (1024*1024)

hostinfo::hostinfo(QLabel *parent) : QLabel(parent)
{
    this->setText("这里什么都没有");
    setStyleSheet("background-color:white"); // 设置QLabel背景的颜色
    /*@宝宝最帅
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    QString sysinfo;
    sysinfo.append("处理器掩码:");sysinfo.append(QString::number(systemInfo.dwActiveProcessorMask));
    sysinfo.append("\n");
    sysinfo.append("处理器个数:");sysinfo.append(QString::number(systemInfo.dwNumberOfProcessors));
    sysinfo.append("\n");
    sysinfo.append("处理器分页大小:");sysinfo.append(QString::number(systemInfo.dwPageSize));
    sysinfo.append("\n");
    sysinfo.append("处理器类型:");sysinfo.append(QString::number(systemInfo.dwProcessorType));
    sysinfo.append("\n");
   // sysinfo.append("最大寻址单元:");sysinfo.append(QString::number(systemInfo.lpMaximumApplicationAddress));
   // sysinfo.append("\n");
  //  sysinfo.append("最小寻址单元:");sysinfo.append(QString::number(systemInfo.lpMinimumApplicationAddress));
   // sysinfo.append("\n");
    sysinfo.append("处理器等级:");sysinfo.append(QString::number(systemInfo.wProcessorLevel));
    sysinfo.append("\n");
    sysinfo.append("处理器版本:");sysinfo.append(QString::number(systemInfo.wProcessorRevision));
    this->setText(sysinfo);


    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof (statex);
    GlobalMemoryStatusEx (&statex);
    qDebug() << QStringLiteral("物理内存使用率:") << statex.dwMemoryLoad;
    qDebug() << QStringLiteral("物理内存总量:") << statex.ullTotalPhys/MB;
    qDebug() << QStringLiteral("可用的物理内存:") << statex.ullAvailPhys/MB;
    qDebug() << QStringLiteral("系统页面文件大小:") << statex.ullTotalPageFile/MB;
    qDebug() << QStringLiteral("系统可用页面文件大小:") << statex.ullAvailPageFile/MB;
    qDebug() << QStringLiteral("虚拟内存总量:") << statex.ullTotalVirtual/MB;
    qDebug() << QStringLiteral("可用的虚拟内存:") << statex.ullAvailVirtual/MB;
    qDebug() << QStringLiteral("保留（值为0）:") << statex.ullAvailExtendedVirtual/MB;
*/

}
