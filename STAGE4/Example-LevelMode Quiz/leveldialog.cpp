#include "leveldialog.h"

LevelDialog::LevelDialog(QDialog *parent)
    : QDialog{parent}
{
    QWidget *window = new QWidget;
    button1 = new QPushButton("Level-1");
    button2 = new QPushButton("Level-2");
    button3 = new QPushButton("Level-3");
    button4 = new QPushButton("Level-4");
    button5 = new QPushButton("Level-5");

    QVBoxLayout *layout = new QVBoxLayout(window);
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);
    layout->addWidget(button5);
    setLayout(layout);

    connect(button1, &QPushButton::clicked, this, &LevelDialog::onButtonClicked);
    connect(button2, &QPushButton::clicked, this, &LevelDialog::onButtonClicked);
    button2->setEnabled(false);
    button3->setEnabled(false);
    button4->setEnabled(false);
    button5->setEnabled(false);
}
