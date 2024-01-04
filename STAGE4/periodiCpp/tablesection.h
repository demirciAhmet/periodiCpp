#ifndef TABLESECTION_H
#define TABLESECTION_H

#include "forms/ui_tablesection.h"
#include <QButtonGroup>
#include <QPushButton>
#include <QWidget>
#include <element.h>



/*!
* @file tablesection.h
* @author Ahmet Kaan Demirci
* @date 04 Jan, 2024
*
*/


QT_BEGIN_NAMESPACE
namespace Ui {
class TableSection;
}
QT_END_NAMESPACE

/*!
 * \brief The TableSection class is the main class for the "Table" section. It extends QWidget to be able to use in main menu.
 */
class TableSection : public QWidget
{
    Q_OBJECT

public:
    TableSection(QWidget *parent = nullptr);
    ~TableSection();

private:
    Ui::TableSection *ui;

    /*!
     * \brief categoryColorMap holds the button colors corresponding the selected property.
     */
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

    /*!
     * \brief metallicPropertyColorMap holds the button colors corresponding the selected property.
     */
    QMap<QString, QString> metallicPropertyColorMap = {
        {"metal", "#ff7503"},
        {"metalloid", "#008a0e"},
        {"nonmetal", "#3935ad"},
        {"(unknown)", "#979ea8"}
    };

    /*!
     * \brief blockColorMap holds the button colors corresponding the selected property.
     */
    QMap<QString, QString> blockColorMap = {
        {"s", "#ff7503"},
        {"p", "#008a0e"},
        {"d", "#3935ad"},
        {"f", "#700b57"}
    };

    /*!
     * \brief phaseColorMap holds the button colors corresponding the selected property.
     */
    QMap<QString, QString> phaseColorMap = {
        {"Solid", "#ff7503"},
        {"Liquid", "#008a0e"},
        {"Gas", "#700b57"}
    };

    /*!
     * \brief setColorForButton is a helper method for updating
     * \param button
     * \param color
     */
    void setColorForButton(QPushButton* button, const QString& color);

    /*!
     * \brief updateButtonColors is the method that updates the colors of buttons when  a property selected
     */
    void updateButtonColors();

    /*!
     * \brief updateLegend is the method that updates the colors of buttons when a property selected
     */
    void updateLegend();

    /*!
     * \brief connectButtons connects the buttons in the form file (tablesection.ui) with click method.
     */
    void connectButtons();


private slots:

    /*!
     * \brief on_colorButton_clicked is the method to handle the color button click event
     */
    void on_colorButton_clicked();

    /*!
     * \brief onElementButtonClicked is the method to handle the element button click event
     * \param element
     */
    void onElementButtonClicked(const Element& element);

};
#endif // TABLESECTION_H
