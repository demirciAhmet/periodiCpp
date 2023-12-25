#ifndef HELIUM_H
#define HELIUM_H

#include <QObject>

class Helium : public QObject
{
    Q_OBJECT
public:
    explicit Helium(QString name, double atomicMass, QString electronicConfiguration, QObject *parent = nullptr);
    QString name;
    double atomicMass;
    QString electronicConfiguration;

signals:

};

#endif // HYDROGEN_H
