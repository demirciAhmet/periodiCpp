#ifndef TABLESECTION_H
#define TABLESECTION_H

#include <QWidget>

namespace Ui {
class TableSection;
}

class TableSection : public QWidget
{
    Q_OBJECT

public:
    explicit TableSection(QWidget *parent = nullptr);
    ~TableSection();

private:
    Ui::TableSection *ui;
};

#endif // TABLESECTION_H
