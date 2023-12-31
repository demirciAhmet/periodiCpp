#include "elementdialog.h"
#include "tablesection.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TableSection w;
    w.show();
    return a.exec();
}
