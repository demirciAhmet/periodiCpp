#include "question.h"

Question::Question(QString questionText, QVector<QString> options, int orderOfQuestion, QObject *parent)
    : QObject{parent}
{
    this->questionText = questionText;
    this->options = options;
    this->orderOfQuestion = orderOfQuestion;
}

QString Question::getQuestionText() const
{
    return questionText;
}


QVector<QString> Question::getOptions() const
{
    return options;
}

 int Question::getOrderOfQuestion() const
{
    return orderOfQuestion;
}

