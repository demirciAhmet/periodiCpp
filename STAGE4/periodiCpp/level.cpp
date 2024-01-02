#include "level.h"

Level::Level(QVector<Question*> questions, QObject *parent )
    : QObject{parent}
{
    this->questions = questions;
}

QVector<Question *> Level::getQuestions() const
{
    return questions;
}

void Level::executionOfQuestionDialogs(QuestionDialog *arr[], int &count)
{
    QDialog parentDialog;

    // Create a layout for the parent dialog
    QVBoxLayout *parentLayout = new QVBoxLayout(&parentDialog);

    // Create a scroll area (if needed)
    QScrollArea *scrollArea = new QScrollArea;
    scrollArea->setWidgetResizable(true);

    // Create a widget to hold the layout
    QWidget *scrollWidget = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(scrollWidget);
    // Add QuestionDialogs to the layout
    for (int i = 0; i < 5; i++) {
        // Set the parent for each QuestionDialog to the scrollWidget
        arr[i]->setParent(scrollWidget);

        // Add the QuestionDialog to the layout
        layout->addWidget(arr[i]);
    }

    // Set the widget for the scroll area (if needed)
    if (scrollArea) {
        scrollArea->setWidget(scrollWidget);
        parentLayout->addWidget(scrollArea);
    } else {
        parentLayout->addWidget(scrollWidget);
    }
    // Create a single "Next" button
    QPushButton *nextButton = new QPushButton("Next", &parentDialog);
    parentLayout->addWidget(nextButton);

    // Connect the "Next" button to a slot (e.g., handleNextButtonClick)
    connect(nextButton, &QPushButton::clicked, &parentDialog, &QDialog::accept);

    // Show the parent dialog
    if (parentDialog.exec() == QDialog::Accepted) {

        for (int i = 0; i < 5; i++) {
            QVector<QString> markedOptions = arr[i]->getMarkedOptions();
            QString correctOption = arr[i]->getCorrectOption();

            // Ensure markedOptions has elements and contains correctOption
            if (!markedOptions.isEmpty() && markedOptions.contains(correctOption)) {
                count++;
            }
        }

    }
}
