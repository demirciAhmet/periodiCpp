#ifndef LEVEL_H
#define LEVEL_H

#include <QObject>
#include <QDialog>
#include <QVBoxLayout>
#include <QScrollArea>
#include "dialoghandler.h"
#include "question.h"
#include "questiondialog.h"

/*!
 * \brief The Level class contains questions and answer.
 * This class implements DialogHandler, so it must use executionOfQuestionDialogs method.
 */

class Level : public QObject, public DialogHandler
{
private:
    QVector<Question*> questions;
    QVector<QString> answers;
    Q_OBJECT
public:
    explicit Level(QVector<Question*> questions,  QObject *parent = nullptr);

    QVector<Question *> getQuestions() const;   //Getter for questions

    void executionOfQuestionDialogs(QuestionDialog *arr[], int &count) override;  //Method that execute the question dialogs.

signals:

};

#endif // LEVEL_H
