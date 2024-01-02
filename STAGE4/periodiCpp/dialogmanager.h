#ifndef DIALOGMANAGER_H
#define DIALOGMANAGER_H

#include <QDialog>
#include <QVector>
#include "questiondialog.h"

class DialogManager {
public:
    DialogManager(QVector<QuestionDialog*> dialogs);

    void showAllDialogs();
    int evaluateAndCloseDialogs();

private:
    QVector<QuestionDialog*> dialogs;
};

#endif // DIALOGMANAGER_H
