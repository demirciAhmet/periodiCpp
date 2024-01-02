#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include <QObject>
#include <QDialog>
#include "challenge.h"

class ScoreManager : public QDialog
{
private:
    Q_OBJECT
    int highestScore;
public:
    explicit ScoreManager(QDialog *parent = nullptr);

    QVector<int> sortScores(QVector<int> vec);


signals:

public slots:
    void onButtonClicked();
};

#endif // SCOREMANAGER_H
