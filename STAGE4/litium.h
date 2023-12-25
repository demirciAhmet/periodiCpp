#ifndef LITIUM_H
#define LITIUM_H

#include <QObject>

class Litium : public QObject
{
    Q_OBJECT
public:
    explicit Litium(QString name,double atomicMass, QString electronicConfiguration,  QObject *parent = nullptr);
    QString name;
    double atomicMass;
    QString electronicConfiguration;
signals:

};

#endif // LITIUM_H
