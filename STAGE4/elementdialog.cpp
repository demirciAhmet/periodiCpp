#include "elementdialog.h"

ElementDialog::ElementDialog(const Element& element, QWidget *parent)
    : QDialog(parent)
{
    lblAtomicNumber = new QLabel("Atomic Number: " + QString::number(element.getAtomicNumber()), this);
    lblSymbol = new QLabel("Symbol: " + element.getSymbol(), this);
    lblName = new QLabel("Name: " + element.getName(), this);
    lblAtomicMass = new QLabel("Atomic Mass: " + QString::number(element.getAtomicMass()), this);
    lblCpkHexColor = new QLabel("CPK Hex Color: " + element.getCpkHexColor(), this);
    lblElectronicConfiguration = new QLabel("Electroic Configuration: " + element.getElectronicConfiguration(), this);
    lblElectronegativity = new QLabel("Electronegativity: " + QString::number(element.getElectronegativity()), this);
    lblAtomicRadius = new QLabel("Atomic Radius: " + QString::number(element.getAtomicRadius()), this);
    lblIonRadius = new QLabel("Ion Radius: " + element.getIonRadius(), this);
    lblVanDelWaalsRadius = new QLabel("Van Del Waals Radius: " + QString::number(element.getVanDelWaalsRadius()), this);
    lblIonizationEnergy = new QLabel("Ionization Energy: " + element.getName(), this);
    lblElectronAffinity = new QLabel("Electron Affinity: " + QString::number(element.getElectronAffinity()), this);
    lblOxidationStates = new QLabel("Oxidation States: " + element.getOxidationStates(), this);
    lblStandardState = new QLabel("Standart state: " + element.getStandardState(), this);
    lblBondingType = new QLabel("Bonding Type: " + element.getBondingType(), this);
    lblMeltingPoint = new QLabel("Melting Point: " + QString::number(element.getMeltingPoint()), this);
    lblBoilingPoint = new QLabel("Boiling Point: " + QString::number(element.getBoilingPoint()), this);
    lblDensity = new QLabel("Density: " + QString::number(element.getDensity()), this);
    lblGroupBlock = new QLabel("Group Block: " + element.getGroupBlock(), this);
    lblYearDiscovered = new QLabel("Year Discovered: " + element.getYearDiscovered(), this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(lblAtomicNumber);
    layout->addWidget(lblSymbol);
    layout->addWidget(lblName);
    layout->addWidget(lblAtomicMass);
    layout->addWidget(lblCpkHexColor);
    layout->addWidget(lblElectronicConfiguration);
    layout->addWidget(lblElectronegativity);
    layout->addWidget(lblAtomicRadius);
    layout->addWidget(lblIonRadius);
    layout->addWidget(lblVanDelWaalsRadius);
    layout->addWidget(lblIonizationEnergy);
    layout->addWidget(lblElectronAffinity);
    layout->addWidget(lblOxidationStates);
    layout->addWidget(lblStandardState);
    layout->addWidget(lblBondingType);
    layout->addWidget(lblMeltingPoint);
    layout->addWidget(lblBoilingPoint);
    layout->addWidget(lblDensity);
    layout->addWidget(lblGroupBlock);
    layout->addWidget(lblYearDiscovered);
}

ElementDialog::~ElementDialog()
{
    delete lblAtomicNumber;
    delete lblSymbol;
    delete lblName;
    delete lblAtomicMass;
    delete lblCpkHexColor;
    delete lblElectronicConfiguration;
    delete lblElectronegativity;
    delete lblAtomicRadius;
    delete lblIonRadius;
    delete lblVanDelWaalsRadius;
    delete lblIonizationEnergy;
    delete lblElectronAffinity;
    delete lblOxidationStates;
    delete lblStandardState;
    delete lblBondingType;
    delete lblMeltingPoint;
    delete lblBoilingPoint;
    delete lblDensity;
    delete lblGroupBlock;
    delete lblYearDiscovered;

}

