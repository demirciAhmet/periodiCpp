#include "elementdialog.h"
#include "forms/ui_elementdialog.h"
ElementDialog::ElementDialog(QWidget *parent) : QDialog(parent), ui(new Ui::ElementDialog){
    ui->setupUi(this);
}
ElementDialog::ElementDialog(const Element &element, QWidget *parent) : QDialog(parent), ui(new Ui::ElementDialog)
{
    ui->setupUi(this);

    //QLabels:
    ui->lblAtomicNumber->setText(QString::number(element.getAtomicNumber()));
    ui->lblSymbol->setText(element.getSymbol());
    ui->lblName->setText(element.getName());
    ui->lblAtomicMass->setText(QString::number(element.getAtomicMass(), 'f', 2));
    ui->lblAtomicRadius->setText(QString::number(element.getAtomicRadius()));
    ui->lblPeriod->setText(QString::number(element.getPeriod()));
    ui->lblGroup->setText(QString::number(element.getGroup()));
    ui->lblCategory->setText(element.getCategory());
    ui->lblBlock->setText(element.getBlock() + " block");
    ui->lblPhase->setText(element.getPhase());
    ui->lblBoil->setText(QString::number(element.getBoilingPoint()) + " K  =  " + QString::number(element.getBoilingPoint() - 273.15) + " °C  =  " + QString::number(element.getBoilingPoint() * 9.0 / 5.0 - 459.67) + " °F");
    ui->lblMelt->setText(QString::number(element.getMeltingPoint()) + " K  =  " + QString::number(element.getMeltingPoint() - 273.15) + " °C  =  " + QString::number(element.getMeltingPoint() * 9.0 / 5.0 - 459.67) + " °F");
    ui->lblElectronConfiguration->setText(element.getElectronicConfiguration());
    ui->lblElectronegativity->setText(QString::number(element.getElectronegativity()));
    ui->lblOxidationStates->setText(element.getOxidationStates());
    ui->lblIonizationEnergy->setText(QString::number(element.getIonizationEnergy()));
    ui->lblElectronAffinity->setText(QString::number(element.getElectronAffinity()));
    ui->lblDensity->setText(QString::number(element.getDensity()));
    ui->lblDiscoveryYear->setText(QString::number(element.getDiscoveryYear()));
    ui->lblDiscoveredBy->setText(element.getDiscoveredBy());

    //Setup Dialog:
    this->setWindowTitle(element.getName());
}

ElementDialog::~ElementDialog()
{
    delete ui;

    //delete lblAtomicNumber;-

}
