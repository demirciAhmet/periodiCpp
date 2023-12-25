
#include "litiumdialog.h"

LitiumDialog::LitiumDialog(const Litium& litium, QWidget *parent)
    : QDialog(parent)
{
    lblName = new QLabel("Name: " + litium.name, this);
    lblAtomicMass = new QLabel("Atomic mass: " + QString::number(litium.atomicMass), this);
    lblElectronicConfiguration = new QLabel("Electronic configuration: " + litium.electronicConfiguration, this);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(lblName);
    layout->addWidget(lblAtomicMass);
    layout->addWidget(lblElectronicConfiguration);
}

LitiumDialog::~LitiumDialog()
{
    delete lblName;
    delete lblAtomicMass;
    delete lblElectronicConfiguration;
}
