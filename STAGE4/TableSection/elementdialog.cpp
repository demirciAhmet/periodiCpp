#include "elementdialog.h"
#include <QVBoxLayout>

ElementDialog::ElementDialog(const Element& element, QWidget *parent)
    : QDialog(parent)
{
    /*setupUi();
    setupLabels(element);*/
    //QLabels:
    AtomicNumberLabel = new QLabel("Atomic Number: " + QString::number(element.getAtomicNumber()), this);
    SymbolLabel = new QLabel("Symbol: " + element.getSymbol(), this);
    NameLabel = new QLabel("Name: " + element.getName(), this);
    AtomicMassLabel = new QLabel("Atomic Mass: " + QString::number(element.getAtomicMass()), this);
    AtomicRadiusLabel = new QLabel("Atomic Radius: " + QString::number(element.getAtomicRadius()), this);
    PeriodLabel = new QLabel("Period: " + QString::number(element.getPeriod()), this);
    GroupLabel = new QLabel("Group: " + QString::number(element.getGroup()), this);
    SummaryLabel = new QLabel("Summary: " + element.getSummary(), this);
    CategoryLabel = new QLabel("Category: " + element.getCategory(), this);
    MetallicPropertyLabel = new QLabel("Metallic Property: " + element.getMetallicProperty(), this);
    BlockLabel = new QLabel("Block: " + QString(element.getBlock()), this);
    PhaseLabel = new QLabel("Phase: " + element.getPhase(), this);
    BoilingPointLabel = new QLabel("Boiling Point: " + QString::number(element.getBoilingPoint()), this);
    MeltingPointLabel = new QLabel("Melting Point: " + QString::number(element.getMeltingPoint()), this);
    ElectronicConfigurationLabel = new QLabel("Electronic Configuration: " + element.getElectronicConfiguration(), this);
    ElectronegativityLabel = new QLabel("Electronegativity: " + QString::number(element.getElectronegativity()), this);
    OxidationStatesLabel = new QLabel("Oxidation States: " + element.getOxidationStates(), this);
    IonizationEnergyLabel = new QLabel("Ionization Energy: " + QString::number(element.getIonizationEnergy()), this);
    ElectronAffinityLabel = new QLabel("Electron Affinity: " + QString::number(element.getElectronAffinity()), this);
    DensityLabel = new QLabel("Density: " + QString::number(element.getDensity()), this);
    DiscoveryYearLabel = new QLabel("Discovery Year: " + QString::number(element.getDiscoveryYear()), this);
    DiscoveredByLabel = new QLabel("Discovered By: " + element.getDiscoveredBy(), this);

    //QLayouts:
    QVBoxLayout* MainLayout = new QVBoxLayout(this);
    //QWidgets:
    MainWidget = new QWidget;

    //Setup Layouts:
    MainLayout->addWidget(AtomicNumberLabel);
    MainLayout->addWidget(SymbolLabel);
    MainLayout->addWidget(NameLabel);
    MainLayout->addWidget(AtomicMassLabel);
    MainLayout->addWidget(AtomicRadiusLabel);
    MainLayout->addWidget(PeriodLabel);
    MainLayout->addWidget(GroupLabel);
    MainLayout->addWidget(SummaryLabel);
    MainLayout->addWidget(CategoryLabel);
    MainLayout->addWidget(MetallicPropertyLabel);
    MainLayout->addWidget(BlockLabel);
    MainLayout->addWidget(PhaseLabel);
    MainLayout->addWidget(BoilingPointLabel);
    MainLayout->addWidget(MeltingPointLabel);
    MainLayout->addWidget(ElectronicConfigurationLabel);
    MainLayout->addWidget(ElectronegativityLabel);
    MainLayout->addWidget(OxidationStatesLabel);
    MainLayout->addWidget(IonizationEnergyLabel);
    MainLayout->addWidget(ElectronAffinityLabel);
    MainLayout->addWidget(DensityLabel);
    MainLayout->addWidget(DiscoveryYearLabel);
    MainLayout->addWidget(DiscoveredByLabel);
    MainWidget->setLayout(MainLayout);

    //Setup Dialog:
    this->setWindowTitle("Element: " + element.getName());
    this->setWindowFlag(Qt::WindowContextHelpButtonHint, false);
    this->setModal(true);
    this->setFixedSize(300, 500);
    //this->setWindowIcon(QIcon(":/icons/Icon.png"));
    this->setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);
    //Show Dialog:
    this->show();

}

ElementDialog::~ElementDialog()
{
    delete AtomicNumberLabel;
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
}
