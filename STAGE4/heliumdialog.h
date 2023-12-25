#ifndef HELIUMDIALOG_H
#define HELIUMDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include "helium.h"

namespace Ui {
class HeliumDialog;
}

class HeliumDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HeliumDialog(const Helium& helium, QWidget *parent = nullptr);
    ~HeliumDialog();

private:
    QLabel* lblName;
    QLabel* lblAtomicMass;
    QLabel* lblElectronicConfiguration;
};

#endif
