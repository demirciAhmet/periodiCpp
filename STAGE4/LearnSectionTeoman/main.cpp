#include "learnsection.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LearnSection w;
    w.show();
    return a.exec();
}
