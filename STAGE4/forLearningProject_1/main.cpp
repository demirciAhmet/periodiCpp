#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int age=44;
    double height=6.02;
    qInfo()<<"Age"<<age;
    qInfo()<<"Height"<<height;

    MainWindow w;
    w.show() ;

    return a.exec();
}
