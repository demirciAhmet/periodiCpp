#ifndef QUESTIONDIALOG_H
#define QUESTIONDIALOG_H

#include <QLabel>
#include <QVBoxLayout>
#include <QDialog>
#include <QButtonGroup>
#include <QRadioButton>
#include <QPushButton>
#include <QObject>
#include "question.h"

class QuestionDialog : public QDialog
{
private:
    QLabel *lblQuestionText;
    QPushButton *pushButton;
    QVector<QString> options;
    QVector<QRadioButton*> optionRadioButtons;
    QVector<QString> markedOptions;
    QString correctOption;

    Q_OBJECT
public:
    explicit QuestionDialog(const Question& question, QString correctOption, QWidget *parent = nullptr);

    QVector<QString> getMarkedOptions() const;

    QString getCorrectOption() const;

private slots:
    void onButtonClick();
    void radioButtonClicked();
signals:

};

#endif // QUESTIONDIALOG_H
