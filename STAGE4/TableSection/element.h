#ifndef ELEMENT_H
#define ELEMENT_H

#include <QImage>
#include <QObject>
#include <QString>

using namespace std;

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
    char block;
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
    QImage bohrModelmage;
    QImage bohrModel3d;

public:
    Element(QObject *parent = nullptr);
    Element(int atomicNumber,QString symbol,QString name,double atomicMass,double atomicRadius,
            int period,int group,QString summary,QString category,QString metallicProperty,
            char block,QString phase,double boilingPoint,double meltingPoint,String electronicConfiguration,
            double electronegativity,QString oxidationStates,int ionizationEnergy,int electronAffinity,
            double density,int discoveryYear,QString discoveredBy,QImage bohrModelmage,
            QImage bohrModel3d,QObject *parent = nullptr);


signals:
};

#endif // ELEMENT_H
