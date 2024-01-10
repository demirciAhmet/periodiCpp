// dialoghandler.h
#ifndef DIALOGHANDLER_H
#define DIALOGHANDLER_H

#include "questiondialog.h"

/*!
 * \brief DialogHandler interface has a method that name is executionOfQuestionDialogs.
 * Thanks to this method the visual presentation of questions in challenge mode and level mode is different.
 */

class DialogHandler {
public:
    virtual void executionOfQuestionDialogs(QuestionDialog *arr[], int &count) = 0;
};

#endif // DIALOGHANDLER_H
