#include "scoremanager.h"

ScoreManager::ScoreManager(QWidget *parent)
    : QWidget{parent} {}

QVector<int> ScoreManager::sortScores(QVector<int> vec)
{
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 1; j < vec.size(); j++) {
            if (vec.at(j - 1) > vec.at(j)) {
                int temp = vec.at(j - 1);
                vec[j - 1] = vec.at(j);
                vec[j] = temp;
            }
        }
    }
    return vec;
}

void ScoreManager::onButtonClicked()
{
    QVector<int> challengeScores;

    QFile file("scores.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

        QTextStream in(&file);

        while (!in.atEnd()) {
            QString line = in.readLine();
            int value = line.toInt();
            challengeScores.append(value);
        }
        file.close();

        int highestScore = 0;

        if (!challengeScores.isEmpty()) {
            // Sort the scores and get the highest score
            QVector<int> sortedScores = sortScores(challengeScores);
            highestScore = sortedScores.last();  // Use last() instead of at(size - 1) to handle empty lists
        }

        QDialog scoreDialog;
        QVBoxLayout *scoreLayout = new QVBoxLayout(&scoreDialog);

        QLabel *highestScoreLabel = new QLabel("Highest score is: " + QString::number(highestScore));
        scoreLayout->addWidget(highestScoreLabel);

        QPushButton *okButton = new QPushButton("OK", &scoreDialog);
        scoreLayout->addWidget(okButton);

        connect(okButton, &QPushButton::clicked, &scoreDialog, &QDialog::accept);
        scoreDialog.exec();

    }
}

