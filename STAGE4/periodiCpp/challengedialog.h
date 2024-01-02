#ifndef CHALLENGEDIALOG_H
#define CHALLENGEDIALOG_H

#include <QObject>
#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QWidget>
#include "challenge.h"
#include "question.h"
#include "questiondialog.h"
#include "scoremanager.h"

class ScoreManager;
class Challenge;
class ChallengeDialog : public QDialog
{
    Q_OBJECT
    QPushButton *startButton;
    QPushButton *scoreButton;
    Challenge *challenge;
    ScoreManager *scoreManager;

public:
    explicit ChallengeDialog(QDialog *parent = nullptr);

signals:

private slots:
    void onButtonClicked();
};

#endif // CHALLENGEDIALOG_H
