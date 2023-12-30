#ifndef TABLE_H
#define TABLE_H

#include <QFile>
#include <QVector>
#include "element.h"


class Table
{
private:
    QFile CSVFile;
public:
    static QVector<Element*> elements;
    void SetFileName(const QString &fileName);
    void CSVToElements(QFile &CSVFile);
    QFile& GetFile();
};

#endif // TABLE_H
