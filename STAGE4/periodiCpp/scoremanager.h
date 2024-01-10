#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include <QObject>
#include <QDialog>
#include <QWidget>
#include "challenge.h"

class ScoreManager : public QWidget
{
private:
    Q_OBJECT
    int highestScore;
public:
    explicit ScoreManager(QWidget *parent = nullptr);

    QVector<int> sortScores(QVector<int> vec);

signals:

public slots:
    void onButtonClicked();
};

#endif // SCOREMANAGER_H
