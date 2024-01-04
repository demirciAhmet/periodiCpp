#ifndef LEVELDIALOG_H
#define LEVELDIALOG_H

#include <QObject>
#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QWidget>

class LevelDialog : public QDialog
{
private:
    Q_OBJECT
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    static QVector<bool> flags;

public:
    explicit LevelDialog(QDialog *parent = nullptr);

    void showResultDialog(bool success, int remainingMistakes, int whichLevelIs);

signals:

private slots:
    void onButtonClicked();
};
#endif // LEVELDIALOG_H
