#ifndef LEVEL_H
#define LEVEL_H

#include <QObject>
#include <QDialog>
#include <QVBoxLayout>
#include <QScrollArea>
#include "dialoghandler.h"
#include "question.h"
#include "questiondialog.h"

class Level : public QObject, public DialogHandler
{
private:
    QVector<Question*> questions;
    QVector<QString> answers;
    Q_OBJECT
public:
    explicit Level(QVector<Question*> questions,  QObject *parent = nullptr);

    QVector<Question *> getQuestions() const;

    void executionOfQuestionDialogs(QuestionDialog *arr[], int &count) override;

signals:

};

#endif // LEVEL_H
