#include "elementdialog.h"
#include "forms/ui_elementdialog.h"
ElementDialog::ElementDialog(QWidget *parent) : QDialog(parent), ui(new Ui::ElementDialog){
    ui->setupUi(this);
}
ElementDialog::ElementDialog(const Element &element, QWidget *parent) : QDialog(parent), ui(new Ui::ElementDialog)
{
    ui->setupUi(this);

    //QLabels:
    ui->lblAtomicNumber->setText(QString::number(element.getAtomicMass()));
    ui->lblSymbol->setText(element.getSymbol());
    ui->lblName->setText(element.getName());
    ui->lblAtomicMass->setText(QString::number(element.getAtomicMass()));
    ui->lblAtomicRadius->setText(QString::number(element.getAtomicRadius()));
    ui->lblPeriod->setText(QString::number(element.getPeriod()));
    ui->lblGroup->setText(QString::number(element.getGroup()));
    ui->lblSummary->setText(element.getSummary());
    ui->lblCategory->setText(element.getCategory());
    ui->lblMetallicProperty->setText(element.getMetallicProperty());
    ui->lblBlock->setText(element.getBlock());
    ui->lblPhase->setText(element.getPhase());
    ui->lblBoil->setText(QString::number(element.getBoilingPoint()));
    ui->lblMelt->setText(QString::number(element.getMeltingPoint()));
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
    /*
    delete lblAtomicNumber;
    delete SymbolLabel;
    delete NameLabel;
    delete AtomicMassLabel;
    delete AtomicRadiusLabel;
    delete PeriodLabel;
    delete GroupLabel;
    delete SummaryLabel;
    delete CategoryLabel;
    delete MetallicPropertyLabel;
    delete BlockLabel;
    delete PhaseLabel;
    delete BoilingPointLabel;
    delete MeltingPointLabel;
    delete ElectronicConfigurationLabel;
    delete ElectronegativityLabel;
    delete OxidationStatesLabel;
    delete IonizationEnergyLabel;
    delete ElectronAffinityLabel;
    delete DensityLabel;
    delete DiscoveryYearLabel;
    delete DiscoveredByLabel;
    delete MainWidget;
    */
}
