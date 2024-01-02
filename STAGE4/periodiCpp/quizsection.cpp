#include "quizsection.h"
#include "question.h"
#include "questiondialog.h"
#include "level.h"
#include "leveldialog.h"
#include "challenge.h"
#include "challengedialog.h"
#include "forms/ui_quizsection.h"

QuizSection::QuizSection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QuizSection)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &QuizSection::openQuizType);
}

void QuizSection::openQuizType()
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
    connect(btnLevel, &QPushButton::clicked, this, &QuizSection::openLevelDialog);
    connect(btnChallenge, &QPushButton::clicked, this, &QuizSection::openChallengeDialog);
    connect(btnQuit, &QPushButton::clicked, this, &QuizSection::close);

    selectionDialog->exec();
}

void QuizSection::openLevelDialog()
{
    LevelDialog levelDialog(nullptr);
    levelDialog.exec();
}

void QuizSection::openChallengeDialog()
{
    ChallengeDialog challengeDialog(nullptr);
    challengeDialog.exec();
}
