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
    for (int i = 0; i < 5; i++) {
        arr[i]->exec();
    }

    for (int i = 0; i < 5; i++) {
        QVector<QString> markedOptions = arr[i]->getMarkedOptions();
        QString correctOption = arr[i]->getCorrectOption();

        // Ensure markedOptions has elements and contains correctOption
        if (!markedOptions.isEmpty() && markedOptions.contains(correctOption)) {
            count++;
        }
    }

    for (int i = 0; i < 5; i++) {
        delete arr[i];
    }
}
