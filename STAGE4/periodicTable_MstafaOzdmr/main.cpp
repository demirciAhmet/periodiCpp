#include "periodictable.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PeriodicTAble w;
    w.show();
    return a.exec();
}
