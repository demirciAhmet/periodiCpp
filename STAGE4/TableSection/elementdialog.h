#ifndef ELEMENTDIALOG_H
#define ELEMENTDIALOG_H

#include <QDialog>
#include <QLabel>
#include "element.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class ElementDialog;
}
QT_END_NAMESPACE

class ElementDialog : public QDialog
{
    Q_OBJECT

public:
    ElementDialog(const Element &element, QWidget *parent = nullptr);
    ~ElementDialog();

private:
    QLabel *lblAtomicNumber;
    QLabel *lblSymbol;
    QLabel *lblName;
    QLabel *lblAtomicMass;
    QLabel *lblCpkHexColor;
    QLabel *lblElectronicConfiguration;
    QLabel *lblElectronegativity;
    QLabel *lblAtomicRadius;
    QLabel *lblIonRadius;
    QLabel *lblVanDelWaalsRadius;
    QLabel *lblIonizationEnergy;
    QLabel *lblElectronAffinity;
    QLabel *lblOxidationStates;
    QLabel *lblStandardState;
    QLabel *lblBondingType;
    QLabel *lblMeltingPoint;
    QLabel *lblBoilingPoint;
    QLabel *lblDensity;
    QLabel *lblGroupBlock;
    QLabel *lblYearDiscovered;

    Ui::ElementDialog *ui;
};

#endif // ELEMENTDIALOG_H
