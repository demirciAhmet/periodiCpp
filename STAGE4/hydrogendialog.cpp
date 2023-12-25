#include "hydrogendialog.h"

HydrogenDialog::HydrogenDialog(const Hydrogen& hydrogen, QWidget *parent)
    : QDialog(parent)
{
    lblName = new QLabel("Name: " + hydrogen.name, this);
    lblAtomicMass = new QLabel("Atomic mass: " + QString::number(hydrogen.atomicMass), this);
    lblElectronicConfiguration = new QLabel("Electronic configuration: " + hydrogen.electronicConfiguration, this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(lblName);
    layout->addWidget(lblAtomicMass);
    layout->addWidget(lblElectronicConfiguration);
}

HydrogenDialog::~HydrogenDialog()
{
    delete lblName;
    delete lblAtomicMass;
    delete lblElectronicConfiguration;
}
