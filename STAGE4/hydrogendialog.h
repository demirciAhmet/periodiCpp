#ifndef HYDROGENDIALOG_H
#define HYDROGENDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include "hydrogen.h"

namespace Ui {
class HydrogenDialog;
}

class HydrogenDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HydrogenDialog(const Hydrogen& hydrogen, QWidget *parent = nullptr);
    ~HydrogenDialog();

private:
    QLabel* lblName;
    QLabel* lblAtomicMass;
    QLabel* lblElectronicConfiguration;
};

#endif
