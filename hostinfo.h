#ifndef HOSTINFO_H
#define HOSTINFO_H

#include <QLabel>
#include <QDebug>

class hostinfo : public QLabel
{
    Q_OBJECT
public:
    explicit hostinfo(QLabel *parent = nullptr);

signals:

public slots:
};

#endif // HOSTINFO_H
