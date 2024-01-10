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

class Challenge : public QObject, public DialogHandler
{
    Q_OBJECT
    friend class ScoreManager;
private:
    QVector<Question*> questions;
    QVector<QString> answers;
    QTimer *timer;
    QLabel *timeLabel;
    int remainingTime;
    int lastScore;
    int highestScore;

public:
    explicit Challenge(QVector<Question*> questions, QObject *parent = nullptr);

    QVector<Question *> getQuestions() const;

    void executionOfQuestionDialogs(QuestionDialog *arr[], int &count) override;

    int calculateTheScore(int time, int usedTime, int correctOptions, int wrongAnswer);

    void saveToFile(const QString& fileName) const;


signals:
};

#endif // CHALLENGE_H
