#ifndef PERIODICTABLE_H
#define PERIODICTABLE_H

#include <QFile>
#include <QVector>
#include <QObject>
#include "element.h"

class PeriodicTable : public QObject
{
    Q_OBJECT
public:
    PeriodicTable(QObject *parent = nullptr);
    static QVector<Element*> elements;
    void CSVToElements();
};

#endif // PERIODICTABLE_H
