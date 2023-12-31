#include "table.h"
#include <QTextStream>

QVector<Element*> Table::elements;

Table::Table(QObject *parent)
    : QObject{parent}
{
    CSVToElements();
}

void Table::CSVToElements() {

    QFile CSVFile("/home/ahmet/Obsidian-Notes/Lectures/Lecture-Files/CENG201-Files/OO-Project/Git/periodiCpp-Storage/STAGE4/TableSection/forms/Element-Data.csv");

    if (CSVFile.open(QIODevice::ReadOnly)) {
        QTextStream *stream = new QTextStream(&CSVFile);
        QString line;
        while(!stream->atEnd()) {
            line = stream->readLine();
            QStringList list = line.split(",");
            int atomicNumber = list[0].toInt();
            QString symbol = list[1];
            QString name = list[2];
            double atomicMass = list[3].toDouble();
            double atomicRadius = list[4].toDouble();
            int period = list[5].toInt();
            int group = list[6].toInt();
            QString summary = list[7];
            QString category = list[8];
            QString metallicProperty = list[9];
            QString block = list[10];
            QString phase = list[11];
            double boilingPoint = list[12].toDouble();
            double meltingPoint = list[13].toDouble();
            QString electronicConfiguration = list[14];
            double electronegativity = list[15].toDouble();
            QString oxidationStates = list[16];
            int ionizationEnergy = list[17].toInt();
            int electronAffinity = list[18].toInt();
            double density = list[19].toDouble();
            int discoveryYear = list[20].toInt();
            QString discoveredBy = list[21];
            QString bohrModelmage = QString(list[22]);
            QString bohrModel3d = QString(list[23]);
            Element* element = new Element(atomicNumber,
                                           symbol,
                                           name,
                                           atomicMass,
                                           atomicRadius,
                                           period,
                                           group,
                                           summary,
                                           category,
                                           metallicProperty,
                                           block,
                                           phase,
                                           boilingPoint,
                                           meltingPoint,
                                           electronicConfiguration,
                                           electronegativity,
                                           oxidationStates,
                                           ionizationEnergy,
                                           electronAffinity,
                                           density,
                                           discoveryYear,
                                           discoveredBy,
                                           bohrModelmage,
                                           bohrModel3d);
            elements.append(element);
        }
        CSVFile.close();
    }
}

