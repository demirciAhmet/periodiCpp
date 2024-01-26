#ifndef QUIZSECTION_H
#define QUIZSECTION_H

#include <QWidget>
#include <QDialog>
#include "level.h"
#include "challenge.h"
#include "scoremanager.h"


/*!
 * \brief The QuizSection class has various slots. The QuizSection runs a sequence of events according to the events in these slots.
 * Therefore QuizSection class is inclusive of all classes.
 */

QT_BEGIN_NAMESPACE
namespace Ui { class quizSection; }
QT_END_NAMESPACE

class QuizSection : public QWidget
{
    Q_OBJECT
    Challenge *challenge;
    static QVector<bool> levelFlags;    //It is used for disable or enable the levels.
public:
    QuizSection(QWidget *parent = nullptr);

private slots:
    void on_pushButton_clicked();

    void on_btnBack_clicked();

    void on_btnChallangeMode_clicked();

    void on_btnChoice_clicked();

    void on_btnBack_2_clicked();

    void on_btnLevelMode_clicked();

    void on_pushButton_2_clicked();

    void showResultDialog(bool success, int remainingMistakes, int whichLevelIs);


private:
    Ui::quizSection *ui;
};
#endif // QUIZSECTION_H

