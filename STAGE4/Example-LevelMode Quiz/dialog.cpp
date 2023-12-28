#include "dialog.h"
#include "question.h"
#include "questiondialog.h"
#include "level.h"
#include "leveldialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Dialog::openLevelDialog);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::openLevelDialog()
{
        LevelDialog levelDialog(this);
        levelDialog.exec();
}


