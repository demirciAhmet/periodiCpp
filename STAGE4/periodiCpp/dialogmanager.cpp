#include "DialogManager.h"

DialogManager::DialogManager(QVector<QuestionDialog*> dialogs) : dialogs(dialogs) {}

void DialogManager::showAllDialogs() {
    for (QuestionDialog* dialog : dialogs) {
        dialog->exec();
    }
}

int DialogManager::evaluateAndCloseDialogs() {
    int count = 0;
    for (QuestionDialog* dialog : dialogs) {
        QVector<QString> markedOptions = dialog->getMarkedOptions();
        QString correctOption = dialog->getCorrectOption();

        // Ensure markedOptions has elements and contains correctOption
        if (!markedOptions.isEmpty() && markedOptions.contains(correctOption)) {
            count++;
        }

        delete dialog;
    }

    return count;
}
