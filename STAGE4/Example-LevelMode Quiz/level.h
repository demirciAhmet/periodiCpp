#ifndef LEVEL_H
#define LEVEL_H

#include <QObject>
#include "question.h"
#include "questiondialog.h"

class Level : public QObject
{
private:
    QVector<Question*> questions;
    QVector<QString> answers;
    Q_OBJECT
public:
    explicit Level(QVector<Question*> questions,  QObject *parent = nullptr);

    QVector<Question *> getQuestions() const;

    void executionOfQuestionDialogs(QuestionDialog *arr[], int &count);

signals:

};

#endif // LEVEL_H
