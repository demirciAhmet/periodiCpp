#ifndef QUESTION_H
#define QUESTION_H

#include <QObject>

/*!
 * \brief The Question class represents the backend part of the questions.
 */

class Question : public QObject
{
private:
    QString questionText;
    QVector<QString> options;
    int orderOfQuestion;
    QString correctOption;
    Q_OBJECT
public:
    explicit Question(QString questionText, QVector<QString> options, int orderOfQuestion, QObject *parent = nullptr);

    //Getters
    QString getQuestionText() const;

    QVector<QString> getOptions() const;

    int getOrderOfQuestion() const;

    QString getCorrectOption() const;

signals:

};

#endif // QUESTION_H
