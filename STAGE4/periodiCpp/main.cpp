#include "tablesection.h"
#include "dialog.h"

#include "mainmenu.h"
#include <QApplication>
#include <QFile>
//#include "dialog.h"

//load style.qss
void loadStyle(){
    QFile file(":/stylesheets/resources/style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    qApp->setStyleSheet(styleSheet);
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loadStyle();
    MainMenu menu;
    menu.show();
    TableSection table;
    table.show();
    Dialog dialog;
    dialog.show();
    return a.exec();
}


