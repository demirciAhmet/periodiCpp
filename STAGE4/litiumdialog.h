#ifndef LITIUMDIALOG_H
#define LITIMDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include "litium.h"

namespace Ui {
class LitiumDialog;
}

class LitiumDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LitiumDialog(const Litium& litium, QWidget *parent = nullptr);
    ~LitiumDialog();

private:
    QLabel* lblName;
    QLabel* lblAtomicMass;
    QLabel* lblElectronicConfiguration;
};

#endif
