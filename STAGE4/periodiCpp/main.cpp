#include "mainmenu.h"
#include <QApplication>
#include <QFile>


//load style.qss
void loadStyle(){
    QFile file(":/stylesheets/style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    qApp->setStyleSheet(styleSheet);
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loadStyle();
    MainMenu w;
    w.show();

    return a.exec();
}


