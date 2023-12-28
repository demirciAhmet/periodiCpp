#ifndef LEVELDIALOG_H
#define LEVELDIALOG_H

#include <QObject>
#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>
#include <QWidget>
#include "level.h"
#include "question.h"
#include "questiondialog.h"

class LevelDialog : public QDialog
{
private:
    Q_OBJECT
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;

public:
    explicit LevelDialog(QDialog *parent = nullptr);

signals:

private slots:
    void onButtonClicked() {
        // Identify the sender button using qobject_cast
        QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());

        if (clickedButton) {
            // Check which button was clicked and perform corresponding actions
            if (clickedButton->text() == "Level-1") {
                Question *question1 = new Question("What is the name of the element with the symbol H?", {"Hydrogen", "Oxygen", "Hellium", "Lithium", "Carbon"}, 1);
                Question *question2 = new Question("What is the name of the element with the symbol Na?", {"Potasium", "Oxygen", "Sodium", "Lithium", "Xenon"}, 2);
                Question *question3 = new Question("What is the name of the element with the symbol Al?", {"Zinc", "Nitrogen", "Calcium", "Lithium", "Aluminium"}, 3);
                Question *question4 = new Question("What is the name of the element with the symbol F?", {"Potasium", "Fluorine", "Sodium", "Oxygen", "Boron"}, 4);
                Question *question5 = new Question("What is the name of the element with the symbol Ni?", {"Nickel", "Oxygen", "Francium", "Galium", "Bromine"}, 5);
                Level *level1 = new Level({question1, question2, question3, question4, question5});
                QuestionDialog* arr[] = {new QuestionDialog(*question1,  "Hydrogen", this),
                                       new QuestionDialog(*question2, "Sodium", this),
                                       new QuestionDialog(*question3, "Aluminium", this),
                                       new QuestionDialog(*question4, "Fluorine",  this),
                                       new QuestionDialog(*question5,  "Nickel",  this)};
                int count = 0;
                level1->executionOfQuestionDialogs(arr,  count);
                if(count == 5){
                    button2->setDisabled(true);
                }
                close();

            } else if (clickedButton->text() == "Level-2") {
                qDebug() << "Button Level-2 clicked!";
                // Perform actions for Level-2 button
            } // Add more else if blocks for additional buttons if needed
        }
    }
};
#endif // LEVELDIALOG_H
