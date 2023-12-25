#include "dialog.h"
#include "./ui_dialog.h"
#include "element.h"
#include "elementdialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnHydrogen_clicked()
{
    Element *h = new Element(1,	"H" ,	"Hydrogen",	1.00794,	"FFFFFF",	"1s1", 	2.2,	37	,"0", 120,	1312,	-73	,"-1, 1",	"gas",	"diatomic",	14,	20,	0.0000899,"nonmetal",	"1766");
    ElementDialog elementHydrogenDialog(*h, this);
    elementHydrogenDialog.exec();
    delete h;

}

