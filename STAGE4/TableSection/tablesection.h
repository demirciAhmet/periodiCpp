#ifndef TABLESECTION_H
#define TABLESECTION_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class TableSection;
}
QT_END_NAMESPACE

class TableSection : public QWidget
{
    Q_OBJECT

public:
    TableSection(QWidget *parent = nullptr);
    ~TableSection();

private slots:
    void on_btnHydrogen_clicked();

    void on_btnHelium_clicked();

    void on_btnLithium_clicked();

private:
    Ui::TableSection *ui;
};
#endif // TABLESECTION_H
