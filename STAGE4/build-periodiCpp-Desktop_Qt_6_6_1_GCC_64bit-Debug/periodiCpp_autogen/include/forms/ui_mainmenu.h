/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "quizsection.h"
#include "tablesection.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *CentralWidget;
    QGridLayout *gridLayout_4;
    QWidget *Menu;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnQuiz;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnTable;
    QFrame *frame;
    QStackedWidget *Windows;
    QWidget *page_1;
    QGridLayout *gridLayout_2;
    TableSection *TableSection;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QuizSection *QuizSection;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(762, 588);
        MainWindow->setStyleSheet(QString::fromUtf8("/*= Style for MainWindow START\n"
"  ==================================================== */\n"
"	#MainWindow {\n"
"		background-color: #313a46;\n"
"	}\n"
"        /* Change the font and text color of all elements */\n"
"        * {\n"
"            font-family: 'Roboto Slab', sans-serif; /* Use Roboto Slab font */\n"
"            color: #ffffff; /* Set text color to white */\n"
"            line-height: 1.4; /* Set the line height */\n"
"            }\n"
"\n"
"/*= END\n"
"  ==================================================== */\n"
"\n"
"/*= Style for Windows widget START\n"
"  ==================================================== */\n"
"	#Windows {\n"
"                background-color: #282a33;\n"
"	}\n"
"\n"
"/*= END\n"
"==================================================== */\n"
"\n"
"\n"
"/*= Style for menu  START\n"
"  ==================================================== */\n"
"	/* style for widget */\n"
"	#Menu {\n"
"		background-color: #313a46;\n"
"	}\n"
"\n"
"	/* style for QPushButton */\n"
"	#Menu QPush"
                        "Button {\n"
"		border:none;\n"
"		border-radius: 3px;\n"
"		text-align: left;\n"
"		padding: 8px 0 8px 15px;\n"
"		color: #788596;\n"
"	}\n"
"\n"
"	#Menu QPushButton:hover {\n"
"		background-color: rgba( 86, 101, 115, 0.5);\n"
"	}\n"
"\n"
"	#Menu QPushButton:checked {\n"
"		color: #fff;\n"
"	}\n"
"\n"
"/*= END\n"
"  ==================================================== */"));
        CentralWidget = new QWidget(MainWindow);
        CentralWidget->setObjectName("CentralWidget");
        gridLayout_4 = new QGridLayout(CentralWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        Menu = new QWidget(CentralWidget);
        Menu->setObjectName("Menu");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(60);
        sizePolicy.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy);
        Menu->setMinimumSize(QSize(0, 60));
        Menu->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(42, 42, 42);"));
        gridLayout = new QGridLayout(Menu);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        btnQuiz = new QPushButton(Menu);
        btnQuiz->setObjectName("btnQuiz");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnQuiz->sizePolicy().hasHeightForWidth());
        btnQuiz->setSizePolicy(sizePolicy1);
        btnQuiz->setMinimumSize(QSize(160, 60));
        btnQuiz->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto Slab")});
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(false);
        btnQuiz->setFont(font);
        btnQuiz->setCheckable(true);
        btnQuiz->setAutoExclusive(true);
        btnQuiz->setFlat(true);

        gridLayout->addWidget(btnQuiz, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        btnTable = new QPushButton(Menu);
        btnTable->setObjectName("btnTable");
        sizePolicy1.setHeightForWidth(btnTable->sizePolicy().hasHeightForWidth());
        btnTable->setSizePolicy(sizePolicy1);
        btnTable->setMinimumSize(QSize(160, 60));
        btnTable->setMaximumSize(QSize(16777215, 60));
        btnTable->setFont(font);
        btnTable->setCheckable(true);
        btnTable->setAutoExclusive(true);
        btnTable->setFlat(true);

        gridLayout->addWidget(btnTable, 0, 2, 1, 1);

        frame = new QFrame(Menu);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setMinimumSize(QSize(175, 0));
        frame->setMaximumSize(QSize(175, 11111));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 3);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 3);
        gridLayout->setColumnStretch(3, 3);
        gridLayout->setColumnStretch(4, 4);

        gridLayout_4->addWidget(Menu, 0, 0, 1, 1);

        Windows = new QStackedWidget(CentralWidget);
        Windows->setObjectName("Windows");
        Windows->setLineWidth(0);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        gridLayout_2 = new QGridLayout(page_1);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        TableSection = new class TableSection(page_1);
        TableSection->setObjectName("TableSection");

        gridLayout_2->addWidget(TableSection, 0, 0, 1, 1);

        Windows->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        QuizSection = new class QuizSection(page_3);
        QuizSection->setObjectName("QuizSection");

        gridLayout_3->addWidget(QuizSection, 0, 0, 1, 1);

        Windows->addWidget(page_3);

        gridLayout_4->addWidget(Windows, 1, 0, 1, 1);

        MainWindow->setCentralWidget(CentralWidget);

        retranslateUi(MainWindow);

        Windows->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainMenu", nullptr));
        btnQuiz->setText(QCoreApplication::translate("MainWindow", "Quiz", nullptr));
        btnTable->setText(QCoreApplication::translate("MainWindow", "Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
