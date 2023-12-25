#ifndef HYDROGEN_H
#define HYDROGEN_H

#include <QObject>

class Hydrogen : public QObject
{
    Q_OBJECT
public:
    explicit Hydrogen(QString name, double atomicMass, QString electronicConfiguration, QObject *parent = nullptr);
    QString name;
    double atomicMass;
    QString electronicConfiguration;

signals:

};

#endif // HYDROGEN_H
