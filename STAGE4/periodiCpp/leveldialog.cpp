#include "leveldialog.h"

QVector<bool> LevelDialog::flags = {true ,false, false, false ,false};

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
    connect(button3, &QPushButton::clicked, this, &LevelDialog::onButtonClicked);
    connect(button4, &QPushButton::clicked, this, &LevelDialog::onButtonClicked);
    connect(button5, &QPushButton::clicked, this, &LevelDialog::onButtonClicked);

    if(flags[1] == true) button2->setEnabled(true);
    else button2->setDisabled(true);

    if(flags[2] == true) button3->setEnabled(true);
    else button3->setDisabled(true);

    if(flags[3] == true) button4->setEnabled(true);
    else button4->setDisabled(true);

    if(flags[4] == true) button5->setEnabled(true);
    else button5->setDisabled(true);
}


void LevelDialog::showResultDialog(bool success, int remainingMistakes, int whichLevelIs)
{
    QDialog *resultDialog = new QDialog(this);
    QVBoxLayout *layout = new QVBoxLayout(resultDialog);

    QLabel *lblResultText;
    QPushButton *btnResult;

    if (success) {
        if(whichLevelIs != 5){
            lblResultText = new QLabel("Congratulations! You can pass to level " + QString::number(whichLevelIs + 1), this);
            btnResult = new QPushButton("Next");
            flags[whichLevelIs] = true;
        }
        else{
            lblResultText = new QLabel("Congratulations! You passed all the levels");
            btnResult = new QPushButton("Next");
        }

    } else {
        lblResultText = new QLabel("Unfortunately you couldn't pass. You have " + QString::number(remainingMistakes) + " mistakes");
        btnResult = new QPushButton("Next");
        flags[whichLevelIs] = false;
    }

    layout->addWidget(lblResultText);
    layout->addWidget(btnResult);
    resultDialog->setLayout(layout);

    // Connect a slot to handle the "Next" button click
    connect(btnResult, &QPushButton::clicked, resultDialog, &QDialog::accept);

    // Show the resultDialog as a modal dialog
    resultDialog->exec();

    // Close the resultDialog after it's accepted (Next button is clicked)
    resultDialog->close();
}

void LevelDialog::onButtonClicked() {
    // Identify the sender button using qobject_cast
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());

    if (clickedButton) {
        // Check which button was clicked and perform corresponding actions
        if (clickedButton->text() == "Level-1") {
            Question *question1 = new Question("Which element is not in group 1A?", {"Hydrogen", "Oxygen", "Sodium", "Potassium", "Lithium"}, 1);
            Question *question2 = new Question("Which element is not in group 2A?", {"Beryllium", "Magnesium", "Calcium", "Barium", "Helium"}, 2);
            Question *question3 = new Question("Which element is not noble gas?", {"Helium", "Neon", "Argon", "Xenon", "Magnesium"}, 3);
            Question *question4 = new Question("Which element is metalloid?", {"Potasium", "Boron", "Sodium", "Oxygen", "Zinc"}, 4);
            Question *question5 = new Question("Which element is transition metals?", {"Magnesium", "Potassium", "Gold", "Germanium", "Chlorine"}, 5);
            Level *level1 = new Level({question1, question2, question3, question4, question5});
            QuestionDialog* arr[] = {new QuestionDialog(*question1,  "Oxygen", this),
                                     new QuestionDialog(*question2, "Helium", this),
                                     new QuestionDialog(*question3, "Magnesium", this),
                                     new QuestionDialog(*question4, "Boron",  this),
                                     new QuestionDialog(*question5,  "Gold",  this)};
            int count = 0;
            level1->executionOfQuestionDialogs(arr,  count);
            if (count == 5) {
                showResultDialog(true, 0, 1);
                button2->setEnabled(true);
            }else{
               showResultDialog(false, 5 - count, 1);
            }

        } else if (clickedButton->text() == "Level-2") {
            Question *question1 = new Question("Which one has higher weight?", {"Hydrogen", "Lithium", "Sodium", "Potassium", "Rubidium"}, 1);
            Question *question2 = new Question("Which one has lower weight?", {"Boron", "Carbon", "Nitrogen", "Oxygen", "Fluorine"}, 2);
            Question *question3 = new Question("Which one has no electronegativity?", {"Neon", "Nitrogen", "Aluminium", "Gallium", "Zinc"}, 3);
            Question *question4 = new Question("Which one has higher electronegativity?", {"Iodine", "Bromine", "Chlorine", "Fluorine", "Nitrogen"}, 4);
            Question *question5 = new Question("Which one has lower electronegativity?", {"Hydrogen", "Lithium", "Sodium", "Potassium", "Rubidium"}, 5);
            Level *level1 = new Level({question1, question2, question3, question4, question5});
            QuestionDialog* arr[] = {new QuestionDialog(*question1,  "Rubidium", this),
                                     new QuestionDialog(*question2, "Fluorine", this),
                                     new QuestionDialog(*question3, "Nitrogen", this),
                                     new QuestionDialog(*question4, "Fluorine",  this),
                                     new QuestionDialog(*question5,  "Rubidium",  this)};
            int count = 0;
            level1->executionOfQuestionDialogs(arr,  count);
            if (count == 5) {
               showResultDialog(true, 0, 2);
               button3->setEnabled(true);
            }else{
               showResultDialog(false, 5 - count, 2);
            }

        } else if (clickedButton->text() == "Level-3") {
            Question *question1 = new Question("Which one has higher ionization energy?", {"Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon"}, 1);
            Question *question2 = new Question("Which one has lower ionization energy?", {"Helium", "Neon", "Argon", "Krypton", "Xenon"}, 2);
            Question *question3 = new Question("Which one has higher electron affinity?", {"Fluorine", "Chlorine", "Bromine", "Iodine", "Astatine"}, 3);
            Question *question4 = new Question("Which one has lower electron affinity?", {"Lanthanum", "Cerium", "Praseodymium", "Neodymium", "Promethium"}, 4);
            Question *question5 = new Question("Which one has higher density?", {"Chromium", "Manganese", "Iron", "Cobalt", "Nickel"}, 5);
            Level *level1 = new Level({question1, question2, question3, question4, question5});
            QuestionDialog* arr[] = {new QuestionDialog(*question1,  "Neon", this),
                                     new QuestionDialog(*question2, "Sodium", this),
                                     new QuestionDialog(*question3, "Chlorine", this),
                                     new QuestionDialog(*question4, "Lanthanum",  this),
                                     new QuestionDialog(*question5,  "Nickel",  this)};
            int count = 0;
            level1->executionOfQuestionDialogs(arr,  count);
            if (count == 5) {
               showResultDialog(true, 0, 3);
               button4->setEnabled(true);
            }else{
               showResultDialog(false, 5 - count, 3);
            }

        }
        else if (clickedButton->text() == "Level-4") {
            Question *question1 = new Question("Which one has higher melting point?", {"Carbon", "Silicon", "Germanium", "Tin", "Lead"}, 1);
            Question *question2 = new Question("Which one has higher boiling point?", {"Helium", "Neon", "Argon", "Krypton", "Xenon"}, 2);
            Question *question3 = new Question("Which one has the higher Van der Waals radius?", {"Hydrogen", "Lithium", "Sodium", "Potassium", "Caesium"}, 3);
            Question *question4 = new Question("Which one has the higher empirical radius?", {"Actinium", "Thorium", "Protactinium", "Neptunium", "Uranium"}, 4);
            Question *question5 = new Question("Which one has the higher covalent radius?", {"Nitrogen", "Phosphorus", "Arsenic", "Antimony", "Bismuth"}, 5);
            Level *level1 = new Level({question1, question2, question3, question4, question5});
            QuestionDialog* arr[] = {new QuestionDialog(*question1,  "Carbon", this),
                                     new QuestionDialog(*question2, "Xenon", this),
                                     new QuestionDialog(*question3, "Potassium", this),
                                     new QuestionDialog(*question4, "Actinium",  this),
                                     new QuestionDialog(*question5,  "Bismuth",  this)};
            int count = 0;
            level1->executionOfQuestionDialogs(arr,  count);
            if (count == 5) {
               showResultDialog(true, 0, 4);
               button5->setEnabled(true);
            }else{
               showResultDialog(false, 5 - count, 4);
            }

        }
        else if (clickedButton->text() == "Level-5") {
            try {
               Question *question1 = new Question("At 1000 celcius, which one is solid?", {"Beryllium", "Magnesium", "Calcium", "Strontium", "Barium"}, 1);
               Question *question2 = new Question("At 1000 celcius, which one is not gas?", {"Silicon", "Phosphorus", "Sulfur", "Chlorine", "Argon"}, 2);
               Question *question3 = new Question("Which one was discovered earlier?", {"Hydrogen", "Carbon", "Silicon", "Neon", "Nickel"}, 3);
               Question *question4 = new Question("Which element was last discovered?", {"Roentgenium", "Copernicium", "Tennessine", "Nobelium", "Einsteinium"}, 4);
               Question *question5 = new Question("Which one has higher Young modulus coefficient?", {"Mercury", "Thallium", "Tennessine", "Iridium", "Lawrencium"}, 5);
               Level *level1 = new Level({question1, question2, question3, question4, question5});
               QuestionDialog* arr[] = {new QuestionDialog(*question1,  "Beryllium", this),
                                        new QuestionDialog(*question2, "Sodium", this),
                                        new QuestionDialog(*question3, "Carbon", this),
                                        new QuestionDialog(*question4, "Tennessine",  this),
                                        new QuestionDialog(*question5,  "Iridium",  this)};
               int count = 0;
               level1->executionOfQuestionDialogs(arr,  count);
               if (count == 5) {
                   showResultDialog(true, 0, 5);
               }else{
                   showResultDialog(false, 5 - count, 5);
               }
            }
            catch (...) {
               qDebug() << "";
            }

        }
    }
}


