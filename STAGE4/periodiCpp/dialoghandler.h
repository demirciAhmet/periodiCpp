// dialoghandler.h
#ifndef DIALOGHANDLER_H
#define DIALOGHANDLER_H

#include "questiondialog.h"

class DialogHandler {
public:
    virtual void executionOfQuestionDialogs(QuestionDialog *arr[], int &count) = 0;
};

#endif // DIALOGHANDLER_H
