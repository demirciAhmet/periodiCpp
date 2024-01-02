#ifndef QUIZSECTION_H
#define QUIZSECTION_H

#include <QWidget>
#include <QDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class QuizSection; }
QT_END_NAMESPACE

class QuizSection : public QWidget
{
    Q_OBJECT
public:
    QuizSection(QWidget *parent = nullptr);

private slots:
    void openQuizType();
    void openLevelDialog();
    void openChallengeDialog();

private:
    Ui::QuizSection *ui;
};
#endif // QUIZSECTION_H

