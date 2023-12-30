#ifndef TABLE_H
#define TABLE_H

#include <QFile>
#include <QVector>
#include "element.h"


class Table
{
private:
    static QVector<Element*> elements;
    QFile CSVFile;
public:
    Table();
    void CSVToElements(QFile &CSVFile);
    QFile GetCSVFile();
    void SetCSVFile(QFile &CSVFile);
};

#endif // TABLE_H
