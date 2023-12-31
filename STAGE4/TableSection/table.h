#ifndef TABLE_H
#define TABLE_H

#include <QFile>
#include <QVector>
#include "element.h"
#include <QObject>

class Table : public QObject
{
    Q_OBJECT
public:
    explicit Table(QObject *parent = nullptr);
    static QVector<Element*> elements;
    void CSVToElements();
};

#endif // TABLE_H
