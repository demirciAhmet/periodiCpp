#ifndef EXECUTIONDIALOG_H
#define EXECUTIONDIALOG_H

#include <QObject>
#include "questiondialog.h"
class ExecutionDialog : public QObject
{
    Q_OBJECT
public:
    explicit ExecutionDialog(QObject *parent = nullptr);
    virtual void executionOfQuestionDialogs(QuestionDialog *arr[], int &count) = 0;
signals:

};

#endif // EXECUTIONDIALOG_H
