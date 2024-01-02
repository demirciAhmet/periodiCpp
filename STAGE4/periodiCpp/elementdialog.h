#ifndef ELEMENTDIALOG_H
#define ELEMENTDIALOG_H

#include <QDialog>
#include <QLabel>
#include "element.h"
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui {
class ElementDialog;
}
QT_END_NAMESPACE

class ElementDialog : public QDialog
{
    Q_OBJECT

public:
    ElementDialog(QWidget *parent = nullptr);
    ElementDialog(const Element &element, QWidget *parent = nullptr);
    ~ElementDialog();

private:
    QLabel *lblAtomicNumber;
    QLabel *lblSymbol;
    QLabel *lblName;


    Ui::ElementDialog *ui;
};

#endif // ELEMENTDIALOG_H
