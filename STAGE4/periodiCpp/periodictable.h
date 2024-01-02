#ifndef PERIODICTABLE_H
#define PERIODICTABLE_H

#include <QFile>
#include <QVector>
#include "element.h"
#include <QObject>

class PeriodicTable : public QObject
{
    Q_OBJECT
public:
    explicit PeriodicTable(QObject *parent = nullptr);
    static QVector<Element*> elements;
    void CSVToElements();
};

#endif // PERIODICTABLE_H
