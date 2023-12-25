#ifndef ELEMENT_H
#define ELEMENT_H

#include <QObject>
#include <QVector>
class Element : public QObject
{
private:
    Q_OBJECT
    int atomicNumber;
    QString symbol;
    QString name;
    double atomicMass;
    QString cpkHexColor;
    QString electronicConfiguration;
    double electronegativity;
    double atomicRadius;
    QString ionRadius;
    double vanDelWaalsRadius;
    double ionizationEnergy;
    double electronAffinity;
    QString oxidationStates;
    QString standardState;
    QString bondingType;
    double meltingPoint;
    double boilingPoint;
    double density;
    QString groupBlock;
    QString yearDiscovered;

public:
    explicit Element(int atomicNumber,QString symbol,QString name, double atomicMass, QString cpkHexColor,    QString electronicConfiguration,double electronegativity,
double atomicRadius,QString ionRadius,double vanDelWaalsRadius,double ionizationEnergy, double electronAffinity, QString oxidationStates,
 QString standardState,QString bondingType,double meltingPoint, double boilingPoint, double density,QString groupBlock,  QString yearDiscovered, QObject *parent = nullptr);

    int getAtomicNumber() const;

    QString getSymbol() const;

    QString getName() const;

    double getAtomicMass() const;

    QString getCpkHexColor() const;

    QString getElectronicConfiguration() const;

    double getElectronegativity() const;

    double getAtomicRadius() const;

    QString getIonRadius() const;

    double getVanDelWaalsRadius() const;

    double getIonizationEnergy() const;

    double getElectronAffinity() const;

    QString getOxidationStates() const;

    QString getStandardState() const;

    QString getBondingType() const;

    double getMeltingPoint() const;

    double getBoilingPoint() const;

    double getDensity() const;

    QString getGroupBlock() const;

    QString getYearDiscovered() const;

signals:

};

#endif // ELEMENT_H
