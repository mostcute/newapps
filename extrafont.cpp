#include "extrafont.h"

#include <QFontDatabase>
#include <QIODevice>
#include <QFile>

QString loadFontFamilyFromFiles(const QString &fontFile)
{
    QString font = "";

    QFile fF(fontFile);
    if(!fF.open(QIODevice::ReadOnly))
    {
      //  qDebug()<<"Open font file error";
        return font;
    }

    int loadedFontID = QFontDatabase::addApplicationFontFromData(fF.readAll());
    QStringList loadedFontFamilies = QFontDatabase::applicationFontFamilies(loadedFontID);
    if(!loadedFontFamilies.empty())
    {
        font = loadedFontFamilies.at(0);
    }
    fF.close();
    return font;
}
