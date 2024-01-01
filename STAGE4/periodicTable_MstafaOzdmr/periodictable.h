#ifndef PERIODICTABLE_H
#define PERIODICTABLE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class PeriodicTable;
}
QT_END_NAMESPACE

class PeriodicTable : public QWidget
{
    Q_OBJECT

public:
    PeriodicTable(QWidget *parent = nullptr);
    ~PeriodicTable();

private:
    Ui::PeriodicTable *ui;
};
#endif // PERIODICTABLE_H
