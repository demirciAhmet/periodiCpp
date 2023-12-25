#include "heliumdialog.h"
#include "helium.h"
HeliumDialog::HeliumDialog(const Helium& helium, QWidget *parent)
    : QDialog(parent)
{
    lblName = new QLabel("Name: " + helium.name, this);
    lblAtomicMass = new QLabel("Atomic mass: " + QString::number(helium.atomicMass), this);
    lblElectronicConfiguration = new QLabel("Electronic configuration: " + helium.electronicConfiguration, this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(lblName);
    layout->addWidget(lblAtomicMass);
    layout->addWidget(lblElectronicConfiguration);
}

HeliumDialog::~HeliumDialog()
{
    delete lblName;
    delete lblAtomicMass;
    delete lblElectronicConfiguration;
}
