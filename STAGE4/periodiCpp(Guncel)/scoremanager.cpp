#include "scoremanager.h"

ScoreManager::ScoreManager(QWidget *parent)
    : QWidget{parent} {}

QVector<int> ScoreManager::sortScores(QVector<int> vec)
{
    //Use bubble sort for sorting scores.
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
    // Vector to store challenge scores
    QVector<int> challengeScores;

    // Open the "scores.txt" file for reading
    QFile file("scores.txt");

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

        // Use QTextStream to read the file
        QTextStream in(&file);

        // Read scores from each line and append to the vector
        while (!in.atEnd()) {
            QString line = in.readLine();
            int value = line.toInt();
            challengeScores.append(value);
        }
        file.close();

        int highestScore = 0;

        // Check if the vector is not empty before finding the highest score
        if (!challengeScores.isEmpty()) {
            // Sort the scores and get the highest score
            QVector<int> sortedScores = sortScores(challengeScores);
            highestScore = sortedScores.last();  // Use last() instead of at(size - 1) to handle empty lists
        }

        // Create a QDialog to display the highest score
        QDialog scoreDialog;
        QVBoxLayout *scoreLayout = new QVBoxLayout(&scoreDialog);

        // Create a QLabel to show the highest score
        QLabel *highestScoreLabel = new QLabel("Highest score is: " + QString::number(highestScore));
        scoreLayout->addWidget(highestScoreLabel);

        QPushButton *okButton = new QPushButton("OK", &scoreDialog);
        scoreLayout->addWidget(okButton);

        // Connect the "OK" button to close the dialog when clicked
        connect(okButton, &QPushButton::clicked, &scoreDialog, &QDialog::accept);
        scoreDialog.exec();

    }
}

