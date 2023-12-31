#include "tablesection.h"
#include "forms/ui_tablesection.h"
#include "table.h"
#include "elementdialog.h"

TableSection::TableSection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TableSection)
{
    ui->setupUi(this);
    QFont font;
    font.setPointSize(16);

    ui->btnHydrogen->setFont(font);
    ui->btnHydrogen->setStyleSheet("background-color: blue; color: white;");
    ui->btnHelium->setFont(font);
    ui->btnHelium->setStyleSheet("background-color: blue; color: white;");
    ui->btnLithium->setFont(font);
    ui->btnLithium->setStyleSheet("background-color: blue; color: white;");
}
TableSection::~TableSection()
{
    delete ui;
}

void TableSection::on_btnHydrogen_clicked()
{
    Element *hydrogen = new Element(1,"H","Hydrogen",1.008,37,1,1,"Hydrogen is a chemical element with chemical symbol H and atomic number 1. With an atomic weight of 1.00794 u, hydrogen is the lightest element on the periodic table. Its monatomic form (H) is the most abundant chemical substance in the Universe, constituting roughly 75% of all baryonic mass.","nonmetal","nonmetal","s","Gas",20.271,13.99,"1s1" ,2.2,"-1, 1",1312,-73,0.08988,1766,"Cavendish","https://storage.googleapis.com/search-ar-edu/periodic-table/element_001_hydrogen/element_001_hydrogen_srp_th.png","https://storage.googleapis.com/search-ar-edu/periodic-table/element_001_hydrogen/element_001_hydrogen.glb");
    ElementDialog hydrogenDialog(*hydrogen,this);
    hydrogenDialog.setModal(true);
    hydrogenDialog.exec();
    delete hydrogen;
}


void TableSection::on_btnHelium_clicked()
{
    ElementDialog heliumDialog(*Table::elements[2],this);
    heliumDialog.setModal(true);
    heliumDialog.exec();
}


void TableSection::on_btnLithium_clicked()
{
    ElementDialog lithiumDialog(this);
    lithiumDialog.setModal(true);
    lithiumDialog.exec();
}

