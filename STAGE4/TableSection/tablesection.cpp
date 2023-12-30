#include "tablesection.h"
#include "./ui_tablesection.h"
#include "table.h"

TableSection::TableSection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TableSection)
{
    ui->setupUi(this);
}
void initTable(){
    Table t;
    t.CSVToElements();
    t.elements[0]->getAtomicMass();
}
TableSection::~TableSection()
{
    delete ui;
}
