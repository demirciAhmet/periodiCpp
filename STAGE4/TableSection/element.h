#ifndef ELEMENT_H
#define ELEMENT_H

#include <QImage>
#include <QObject>
#include <QString>


class Element : public QObject
{
    Q_OBJECT
private:
//atomicNumber,symbol,name,atomicMass,atomicRadius,period,group,summary,category,metallicProperty,block,phase,boilingPoint,meltingPoint,electronicConfiguration,electronegativity,oxidationStates,ionizationEnergy,electronAffinity,density,discoveryYear,discoveredBy,bohr_model_image,bohr_model_3d
    int atomicNumber;
    QString symbol;
    QString name;
    double atomicMass;
    double atomicRadius;
    int period;
    int group;
    QString summary;
    QString category;
    QString metallicProperty;
    QString block;
    QString phase;
    double boilingPoint;
    double meltingPoint;
    QString electronicConfiguration;
    double electronegativity;
    QString oxidationStates;
    int ionizationEnergy;
    int electronAffinity;
    double density;
    int discoveryYear;
    QString discoveredBy;

public:
    Element(int atomicNumber,QString symbol,QString name,double atomicMass,double atomicRadius,
            int period,int group,QString summary,QString category,QString metallicProperty,
            QString block,QString phase,double boilingPoint,double meltingPoint,QString electronicConfiguration,
            double electronegativity,QString oxidationStates,int ionizationEnergy,int electronAffinity,
            double density,int discoveryYear,QString discoveredBy,QObject *parent = nullptr);
    //getters
    int getAtomicNumber() const;
    QString getSymbol() const ;
    QString getName() const ;
    double getAtomicMass() const ;
    double getAtomicRadius() const ;
    int getPeriod() const ;
    int getGroup() const ;
    QString getSummary() const ;
    QString getCategory() const ;
    QString getMetallicProperty() const ;
    QString getBlock() const ;
    QString getPhase() const ;
    double getBoilingPoint() const ;
    double getMeltingPoint() const ;
    QString getElectronicConfiguration() const ;
    double getElectronegativity() const ;
    QString getOxidationStates() const ;
    int getIonizationEnergy() const ;
    int getElectronAffinity() const ;
    double getDensity() const ;
    int getDiscoveryYear() const ;
    QString getDiscoveredBy() const ;

signals:
};

#endif // ELEMENT_H
