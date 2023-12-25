#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_btnHydrogen_clicked();

    void on_btnLitium_clicked();

    void on_btnHelium_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
