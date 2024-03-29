#include "challenge.h"

Challenge::Challenge(QVector<Question*> questions, QObject *parent )
    : QObject{parent}
{
    this->questions = questions;
}

QVector<Question *> Challenge::getQuestions() const
{
    return questions;
}

int Challenge::calculateTheScore(int usedTime, int correctOptions, int wrongAnswer)
{
    //Compute a score based on the time used, the number of correct and incorrect answers
    return -usedTime + (12 * correctOptions) -(wrongAnswer * 3);
}


// Save score to a file
void Challenge::saveToFile(const QString& fileName) const {

    QFile file(fileName);

    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << lastScore << "\n";
        file.close();
    } else {
        qDebug() << "Could not open the file for writing: " << file.errorString();
    }
}

void Challenge::executionOfQuestionDialogs(QuestionDialog *arr[], int &count)
{
    QDialog parentDialog;

    // Create a layout for the parent dialog
    QVBoxLayout *parentLayout = new QVBoxLayout(&parentDialog);

    // Create a scroll area
    QScrollArea *scrollArea = new QScrollArea;
    scrollArea->setWidgetResizable(true);

    // Create a widget to hold the layout
    QWidget *scrollWidget = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(scrollWidget);

    QLabel timeLabel("5:00", 0);
    timeLabel.setAlignment(Qt::AlignCenter);
    layout->addWidget(&timeLabel);

    // Add QuestionDialogs to the layout
    for (int i = 0; i < 50; i++) {
        // Set the parent for each QuestionDialog to the scrollWidget
        arr[i]->setParent(scrollWidget);

        // Add the QuestionDialog to the layout
        layout->addWidget(arr[i]);
    }

    // Set the widget for the scroll area
    if (scrollArea) {
        scrollArea->setWidget(scrollWidget);
        parentLayout->addWidget(scrollArea);
    } else {
        parentLayout->addWidget(scrollWidget);
    }

    // Create QTimer for countdown
    QTimer timer;

    // Set up the timer to update every second
    timer.setInterval(1000);

    remainingTime = 300;
    // Connect the timer's timeout signal to a custom slot
    QObject::connect(&timer, &QTimer::timeout, [&]() {
        // Update the remaining time and display it in the label
        if (remainingTime > 0) {
            remainingTime--;

            // Convert remaining seconds to minutes and seconds
            int minutes = remainingTime / 60;
            int seconds = remainingTime % 60;

            // Display the time in the format "mm:ss"
            timeLabel.setText(QString("%1:%2").arg(minutes, 2, 10, QChar('0')).arg(seconds, 2, 10, QChar('0')));
        } else {
            // Stop the timer when the countdown reaches 0
            timer.stop();
            timeLabel.setText("Time's up!");
        }
    });

    // Set initial label text
    int initialMinutes = remainingTime / 60;
    int initialSeconds = remainingTime % 60;
    timeLabel.setText(QString("%1:%2").arg(initialMinutes, 2, 10, QChar('0')).arg(initialSeconds, 2, 10, QChar('0')));

    // Start the timer after setting the initial label text
    timer.start();

    // Create a single "Next" button
    QPushButton *nextButton = new QPushButton("Next", &parentDialog);
    parentLayout->addWidget(nextButton);

    connect(nextButton, &QPushButton::clicked, &parentDialog, &QDialog::accept);

    // Create a single "Give Up" button
    QPushButton *giveUpButton = new QPushButton("Give Up", &parentDialog);
    parentLayout->addWidget(giveUpButton);
    connect(giveUpButton, &QPushButton::clicked, &parentDialog, &QDialog::accept);

    // Process events to ensure the timer updates are displayed
    QCoreApplication::processEvents();

    // Wait for the parent dialog to finish execution and check if it was accepted
    if (parentDialog.exec() == QDialog::Accepted) {
        //If it is accepted stop the timer
        timer.stop();
        for (int i = 0; i < 50; i++) {
            //Keep these for comparison of markedOption and correctOption
            QVector<QString> markedOptions = arr[i]->getMarkedOptions();
            QString correctOption = arr[i]->getCorrectOption();

            // Ensure markedOptions has elements and contains correctOption
            if (!markedOptions.isEmpty() && markedOptions.contains(correctOption)) {
                count++;
            }
        }

        lastScore = calculateTheScore(300 - remainingTime, count, 50 - count);
        //Save the last score on scores.txt
        saveToFile("scores.txt");

        //Create Dialog for show the last score.
        QDialog scoreDialog;
        QVBoxLayout *scoreLayout = new QVBoxLayout(&scoreDialog);

        QLabel *scoreLabel = new QLabel("Your score is: " + QString::number(lastScore));
        scoreLayout->addWidget(scoreLabel);

        QPushButton *okButton = new QPushButton("OK", &scoreDialog);
        scoreLayout->addWidget(okButton);

        QObject::connect(okButton, &QPushButton::clicked, &scoreDialog, &QDialog::accept);

        // Show the scoreDialog
        scoreDialog.exec();

    }
}
