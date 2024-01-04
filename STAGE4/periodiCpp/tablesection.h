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
    QMap<QString, QString> categoryColorMap = {
        {"Alkali Metal", "#ff0303"},
        {"Alkaline Earth Metal", "#ff7503"},
        {"Transition Metal", "#ffbf03"},
        {"Post-Transition Metal", "#008a0e"},
        {"Lanthanide", "#700b57"},
        {"Actinide", "#d916a8"},
        {"Metalloid", "#008573"},
        {"Halogen", "#3935ad"},
        {"Non Metal", "#1071e5"},
        {"Noble Gas", "#ba23f6"},
        {"(undefined)", "#979ea8"}
    };
    QMap<QString, QString> metallicPropertyColorMap = {
        {"metal", "#ff7503"},
        {"metalloid", "#008a0e"},
        {"nonmetal", "#3935ad"},
        {"(unknown)", "#979ea8"}
    };
    QMap<QString, QString> blockColorMap = {
        {"s", "#ff7503"},
        {"p", "#008a0e"},
        {"d", "#3935ad"},
        {"f", "#700b57"}
    };
    QMap<QString, QString> phaseColorMap = {
        {"Solid", "#ff7503"},
        {"Liquid", "#008a0e"},
        {"Gas", "#700b57"}
    };
    QSet<QString> categoryKeys;
    QSet<QString> metallicPropertyKeys;
    QSet<QString> blockPropertyKeys;
    QSet<QString> phaseKeys;

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
