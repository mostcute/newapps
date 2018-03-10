#ifndef DATAPROCESS_H
#define DATAPROCESS_H

#include <QObject>

#define REGISTER   1
#define NORMAL   2
/*
 *   qint64 size
 *   qint8  type REGISTER
 *   struct register_data
 *   QBytearray password
 *
*/

struct register_data
{
     char ID[20];
     char username[50];
     char password[33];
     char email[50];
};
struct stand_data
{

     qint64 ID;
};

class dataprocess : public QObject
{
    Q_OBJECT
public:
    explicit dataprocess(QObject *parent = nullptr);

signals:

public slots:
};

#endif // DATAPROCESS_H
