#include "tablesection.h"
#include "ui_tablesection.h"

TableSection::TableSection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TableSection)
{
    ui->setupUi(this);
}

TableSection::~TableSection()
{
    delete ui;
}
