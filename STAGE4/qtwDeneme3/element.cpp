#include "element.h"


Element::Element(int atomicNumber,QString symbol,QString name, double atomicMass, QString cpkHexColor,    QString electronicConfiguration,double electronegativity,
                 double atomicRadius,QString ionRadius,double vanDelWaalsRadius,double ionizationEnergy, double electronAffinity, QString oxidationStates,
                 QString standardState,QString bondingType,double meltingPoint, double boilingPoint, double density,QString groupBlock,  QString yearDiscovered, QObject *parent)
    : QObject{parent}
{
    this->atomicNumber = atomicNumber;
    this->symbol = symbol;
    this->name = name;
    this->atomicMass = atomicMass;
    this->cpkHexColor = cpkHexColor;
    this->electronicConfiguration = electronicConfiguration;
    this->electronegativity = electronegativity;
    this->atomicRadius = atomicRadius;
    this->ionRadius = ionRadius;
    this->vanDelWaalsRadius = vanDelWaalsRadius;
    this->ionizationEnergy = ionizationEnergy;
    this->electronAffinity = electronAffinity;
    this->oxidationStates = oxidationStates;
    this->standardState = standardState;
    this->bondingType = bondingType;
    this->meltingPoint = meltingPoint;
    this->boilingPoint = boilingPoint;
    this->density = density;
    this->groupBlock = groupBlock;
    this->yearDiscovered = yearDiscovered;
}


int Element::getAtomicNumber() const
{
    return atomicNumber;
}

QString Element::getSymbol() const
{
    return symbol;
}

QString Element::getName() const
{
    return name;
}

double Element::getAtomicMass() const
{
    return atomicMass;
}

QString Element::getCpkHexColor() const
{
    return cpkHexColor;
}

QString Element::getElectronicConfiguration() const
{
    return electronicConfiguration;
}

double Element::getElectronegativity() const
{
    return electronegativity;
}

double Element::getAtomicRadius() const
{
    return atomicRadius;
}

QString Element::getIonRadius() const
{
    return ionRadius;
}

double Element::getVanDelWaalsRadius() const
{
    return vanDelWaalsRadius;
}

double Element::getIonizationEnergy() const
{
    return ionizationEnergy;
}

double Element::getElectronAffinity() const
{
    return electronAffinity;
}

QString Element::getOxidationStates() const
{
    return oxidationStates;
}


QString Element::getStandardState() const
{
    return standardState;
}

QString Element::getBondingType() const
{
    return bondingType;
}

double Element::getMeltingPoint() const
{
    return meltingPoint;
}

double Element::getBoilingPoint() const
{
    return boilingPoint;
}

double Element::getDensity() const
{
    return density;
}

QString Element::getGroupBlock() const
{
    return groupBlock;
}

QString Element::getYearDiscovered() const
{
    return yearDiscovered;
}
