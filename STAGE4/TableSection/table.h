#ifndef TABLE_H
#define TABLE_H

#include <QFile>
#include <QVector>
#include "element.h"


class Table
{
public:
    static QVector<Element*> elements;
    void CSVToElements();
};

#endif // TABLE_H
