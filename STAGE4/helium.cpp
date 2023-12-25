#include "helium.h"

Helium::Helium( QString name,  double atomicMass,  QString electronicConfiguration, QObject *parent)
    : QObject{parent}
{
    this->name = name;
    this->atomicMass = atomicMass;
    this->electronicConfiguration = electronicConfiguration;
}
