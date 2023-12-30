#include "table.h"
#include "tablesection.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Table t;
    t.SetFileName("/home/ahmet/Obsidian-Notes/Lectures/Lecture-Files/CENG201-Files/OO-Project/Git/periodiCpp-Storage/STAGE4/TableSection/Element-Data.csv");
    TableSection w;
    w.show();
    return a.exec();
}
