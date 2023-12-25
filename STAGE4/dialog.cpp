#include "dialog.h"
#include "./ui_dialog.h"
#include "hydrogen.h"
#include "hydrogendialog.h"
#include "litium.h"
#include "litiumdialog.h"
#include "helium.h"
#include "heliumdialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    btnHydrogen = new QPushButton("Hydrogen", this);
    btnHydrogen->setStyleSheet("background-color: blue; color: white;");

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnHydrogen_clicked()
{
    Hydrogen *h = new Hydrogen("Hydrogen", 1.00974, "1s1");

    HydrogenDialog hydrogenDialog(*h, this);
    hydrogenDialog.exec();


    delete h;

    //accept();
}


void Dialog::on_btnLitium_clicked()
{
    Litium *li = new Litium("Lithium", 6.941, "2s1");

    LitiumDialog litiumDialog(*li, this);
    litiumDialog.exec();
    delete li;

}


void Dialog::on_btnHelium_clicked()
{
    Helium *he = new Helium("Helium", 4.002, "1s2");
    HeliumDialog heliumDialog(*he, this);
    heliumDialog.exec();
    delete he;

}

