/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tablesection.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *CentralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *Menu;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnTable;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnQuiz;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *Windows;
    QWidget *page_1;
    QGridLayout *gridLayout_2;
    TableSection *TableSection;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QWidget *QuizSection;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        CentralWidget = new QWidget(MainWindow);
        CentralWidget->setObjectName("CentralWidget");
        verticalLayout = new QVBoxLayout(CentralWidget);
        verticalLayout->setObjectName("verticalLayout");
        Menu = new QWidget(CentralWidget);
        Menu->setObjectName("Menu");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(60);
        sizePolicy.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy);
        Menu->setMinimumSize(QSize(0, 60));
        gridLayout = new QGridLayout(Menu);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(220, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        btnTable = new QPushButton(Menu);
        btnTable->setObjectName("btnTable");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnTable->sizePolicy().hasHeightForWidth());
        btnTable->setSizePolicy(sizePolicy1);
        btnTable->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto Slab")});
        font.setPointSize(20);
        btnTable->setFont(font);
        btnTable->setCheckable(true);
        btnTable->setAutoExclusive(true);
        btnTable->setFlat(true);

        gridLayout->addWidget(btnTable, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(109, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        btnQuiz = new QPushButton(Menu);
        btnQuiz->setObjectName("btnQuiz");
        sizePolicy1.setHeightForWidth(btnQuiz->sizePolicy().hasHeightForWidth());
        btnQuiz->setSizePolicy(sizePolicy1);
        btnQuiz->setMinimumSize(QSize(0, 60));
        btnQuiz->setFont(font);
        btnQuiz->setCheckable(true);
        btnQuiz->setAutoExclusive(true);
        btnQuiz->setFlat(true);

        gridLayout->addWidget(btnQuiz, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(220, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        gridLayout->setColumnStretch(0, 4);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 2);
        gridLayout->setColumnStretch(3, 2);
        gridLayout->setColumnStretch(4, 4);

        verticalLayout->addWidget(Menu);

        Windows = new QStackedWidget(CentralWidget);
        Windows->setObjectName("Windows");
        Windows->setLineWidth(0);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        gridLayout_2 = new QGridLayout(page_1);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        TableSection = new TableSection(page_1);
        TableSection->setObjectName("TableSection");

        gridLayout_2->addWidget(TableSection, 0, 0, 1, 1);

        Windows->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        QuizSection = new QWidget(page_3);
        QuizSection->setObjectName("QuizSection");
        label = new QLabel(QuizSection);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 290, 66, 18));

        gridLayout_3->addWidget(QuizSection, 0, 0, 1, 1);

        Windows->addWidget(page_3);

        verticalLayout->addWidget(Windows);

        MainWindow->setCentralWidget(CentralWidget);

        retranslateUi(MainWindow);

        Windows->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainMenu", nullptr));
        btnTable->setText(QCoreApplication::translate("MainWindow", "Table", nullptr));
        btnQuiz->setText(QCoreApplication::translate("MainWindow", "Quiz", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
