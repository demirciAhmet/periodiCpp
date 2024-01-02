#include "dialog.h"
#include "question.h"
#include "questiondialog.h"
#include "level.h"
#include "leveldialog.h"
#include "challenge.h"
#include "challengedialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Dialog::openQuizType);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::openQuizType()
{
    QDialog *selectionDialog = new QDialog(this);
    QVBoxLayout *layout = new QVBoxLayout(selectionDialog);
    QLabel *lblSelectionText = new QLabel("Please make a choice");
    QPushButton *btnChallenge = new QPushButton("Challenge Mode");
    QPushButton *btnLevel = new QPushButton("Level Mode");
    QPushButton *btnQuit = new QPushButton("Quit");
    layout->addWidget(lblSelectionText);
    layout->addWidget(btnLevel);
    layout->addWidget(btnChallenge);
    layout->addWidget(btnQuit);
    selectionDialog->setLayout(layout);
    connect(btnLevel, &QPushButton::clicked, this, &Dialog::openLevelDialog);
    connect(btnChallenge, &QPushButton::clicked, this, &Dialog::openChallengeDialog);
    connect(btnQuit, &QPushButton::clicked, this, &Dialog::close);

    selectionDialog->exec();
}

void Dialog::openLevelDialog()
{
        LevelDialog levelDialog(this);
        levelDialog.exec();
}

void Dialog::openChallengeDialog()
{
        ChallengeDialog challengeDialog(this);
        challengeDialog.exec();
}
