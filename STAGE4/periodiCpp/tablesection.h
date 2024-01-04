#ifndef TABLESECTION_H
#define TABLESECTION_H

#include "forms/ui_tablesection.h"
#include <QButtonGroup>
#include <QPushButton>
#include <QWidget>
#include <element.h>

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

private:
    Ui::TableSection *ui;

    // Color maps
    QMap<QString, QString> categoryColorMap;
    QMap<QString, QString> metallicPropertyColorMap;
    QMap<QString, QString> blockColorMap;
    QMap<QString, QString> phaseColorMap;

    // Other helper methods
    void setColorForButton(QPushButton* button, const QString& color);
    void updateButtonProperties();
    void updateLegend();
    void connectButtons();


private slots:
    //element buttons
    void on_colorButton_clicked();
    void onElementButtonClicked(const Element& element);

};
#endif // TABLESECTION_H
