#ifndef CHALLENGE_H
#define CHALLENGE_H

#include <QObject>
#include <QScrollArea>
#include <QTimer>
#include <QDebug>
#include <QLabel>
#include <QCoreApplication>
#include <QVBoxLayout>
#include <QWidget>
#include <QDialog>
#include <QFile>
#include "dialoghandler.h"
#include "question.h"
#include "questiondialog.h"

/*!
 * \brief The Challenge class contains questions, answers and timer.
 * This class implements DialogHandler, so it must use executionOfQuestionDialogs method.
 * It is separate from the Level class because this class use QTimer to create questions against time and determines a score at the end of the test.
 */

class Challenge : public QObject, public DialogHandler //Challenge implements DialogHandler interface
{
    Q_OBJECT
    friend class ScoreManager; //ScoreManager is friend class because it should reach the scores.
private:

    QVector<Question*> questions;
    QVector<QString> answers;

    //Unlike level mode, ChallengeMode has a time counter. Therefore use QTime.
    QTimer *timer;
    QLabel *timeLabel;
    int remainingTime;
    int lastScore;
    int highestScore;

public:
    explicit Challenge(QVector<Question*> questions, QObject *parent = nullptr);

    QVector<Question *> getQuestions() const;       //Getter for questions

    void executionOfQuestionDialogs(QuestionDialog *arr[], int &count) override;    //Method that execute the question dialogs.

    int calculateTheScore(int usedTime, int correctOptions, int wrongAnswer);  //Method that calculate the score

    void saveToFile(const QString& fileName) const; //Method that save the scores on file.


signals:
};

#endif // CHALLENGE_H
