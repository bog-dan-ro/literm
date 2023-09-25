#ifndef SERIALIFACE_H
#define SERIALIFACE_H

#include <QObject>
#include <QQmlEngine>

class SerialIface : public QObject
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit SerialIface(QObject *parent = nullptr);

signals:

};

#endif // SERIALIFACE_H
