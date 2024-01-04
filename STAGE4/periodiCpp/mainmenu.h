#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


/*!
 * \brief The MainMenu class connects all sections together.
 * The idea is basicly generating sections as QWidgets then
 * promoting the QWidgets in the form file to the custom section class that inherits QWidget.
 */
class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_btnTable_clicked();

    void on_btnQuiz_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINMENU_H
