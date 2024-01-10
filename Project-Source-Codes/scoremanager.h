#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include <QObject>
#include <QDialog>
#include <QWidget>
#include "challenge.h"

/*!
 * \brief The ScoreManager class used to edit the scores in the Challenge class.
 */
class ScoreManager : public QWidget
{
private:
    Q_OBJECT
    int highestScore;
public:
    explicit ScoreManager(QWidget *parent = nullptr);

    QVector<int> sortScores(QVector<int> vec);  //Method for sorting scores.

signals:

public slots:
    void onButtonClicked();
};

#endif // SCOREMANAGER_H
