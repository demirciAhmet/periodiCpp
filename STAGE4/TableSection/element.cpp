#include "element.h"

Element::Element(int atomicNumber,
                 QString symbol,
                 QString name,
                 double atomicMass,
                 double atomicRadius,
                 int period,
                 int group,
                 QString summary,
                 QString category,
                 QString metallicProperty,
                 char block,
                 QString phase,
                 double boilingPoint,
                 double meltingPoint,
                 QString electronicConfiguration,
                 double electronegativity,
                 QString oxidationStates,
                 int ionizationEnergy,
                 int electronAffinity,
                 double density,
                 int discoveryYear,
                 QString discoveredBy,
                 QImage bohrModelmage,
                 QImage bohrModel3d,
                 QObject *parent
                 ) : QObject{parent}
{
    this->atomicNumber = atomicNumber;
    this->symbol = symbol;
    this->name = name;
    this->atomicMass = atomicMass;
    this->atomicRadius = atomicRadius;
    this->period = period;
    this->group = group;
    this->summary = summary;
    this->category = category;
    this->metallicProperty = metallicProperty;
    this->block = block;
    this->phase = phase;
    this->boilingPoint = boilingPoint;
    this->meltingPoint = meltingPoint;
    this->electronicConfiguration = electronicConfiguration;
    this->electronegativity = electronegativity;
    this->oxidationStates = oxidationStates;
    this->ionizationEnergy = ionizationEnergy;
    this->electronAffinity = electronAffinity;
    this->density = density;
    this->discoveryYear = discoveryYear;
    this->discoveredBy = discoveredBy;
    this->bohrModelmage = bohrModelmage;
    this->bohrModel3d = bohrModel3d;
}

//getters
int Element::getAtomicNumber() { return atomicNumber; }
QString Element::getSymbol() { return symbol; }
QString Element::getName() { return name; }
double Element::getAtomicMass() { return atomicMass; }
double Element::getAtomicRadius() { return atomicRadius; }
int Element::getPeriod() { return period; }
int Element::getGroup() { return group; }
QString Element::getSummary() { return summary; }
QString Element::getCategory() { return category; }
QString Element::getMetallicProperty() { return metallicProperty; }
char Element::getBlock() { return block; }
QString Element::getPhase() { return phase; }
double Element::getBoilingPoint() { return boilingPoint; }
double Element::getMeltingPoint() { return meltingPoint; }
QString Element::getElectronicConfiguration() { return electronicConfiguration; }
double Element::getElectronegativity() { return electronegativity; }
QString Element::getOxidationStates() { return oxidationStates; }
int Element::getIonizationEnergy() { return ionizationEnergy; }
int Element::getElectronAffinity() { return electronAffinity; }
double Element::getDensity() { return density; }
int Element::getDiscoveryYear() { return discoveryYear; }
QString Element::getDiscoveredBy() { return discoveredBy; }
QImage Element::getBohrModelmage() { return bohrModelmage; }
QImage Element::getBohrModel3d() { return bohrModel3d; }
