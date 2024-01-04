#ifndef PERIODICTABLE_H
#define PERIODICTABLE_H

#include <QFile>
#include <QVector>
#include <QObject>
#include "element.h"


/*!
*
* @file periodictable.h
* @author Ahmet Kaan Demirci
* @date 04 Jan, 2024
*
*/
/*!
 * \brief The PeriodicTable class contains the methods about the periodic table for using in TableSection.
 */
class PeriodicTable : public QObject
{
    Q_OBJECT
public:
    PeriodicTable(QObject *parent = nullptr);
    /*!
     * \brief elements holds vector of elements that contain their datas
     */
    static QVector<Element*> elements;
    /*!
     * \brief CSVToElements reads from the resource file to generate elements.
     */
    void CSVToElements();
};

#endif // PERIODICTABLE_H
