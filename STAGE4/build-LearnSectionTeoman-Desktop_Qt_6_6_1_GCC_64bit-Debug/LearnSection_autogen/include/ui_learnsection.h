/********************************************************************************
** Form generated from reading UI file 'learnsection.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNSECTION_H
#define UI_LEARNSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearnSection
{
public:
    QWidget *centralwidget;
    QPushButton *btnElektronegatiflik;
    QPushButton *btnElementTurleri;
    QPushButton *btnElektronIlgisi;
    QWidget *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LearnSection)
    {
        if (LearnSection->objectName().isEmpty())
            LearnSection->setObjectName("LearnSection");
        LearnSection->resize(800, 600);
        centralwidget = new QWidget(LearnSection);
        centralwidget->setObjectName("centralwidget");
        btnElektronegatiflik = new QPushButton(centralwidget);
        btnElektronegatiflik->setObjectName("btnElektronegatiflik");
        btnElektronegatiflik->setGeometry(QRect(120, 80, 101, 51));
        btnElementTurleri = new QPushButton(centralwidget);
        btnElementTurleri->setObjectName("btnElementTurleri");
        btnElementTurleri->setGeometry(QRect(230, 80, 101, 51));
        btnElektronIlgisi = new QPushButton(centralwidget);
        btnElektronIlgisi->setObjectName("btnElektronIlgisi");
        btnElektronIlgisi->setGeometry(QRect(340, 80, 91, 51));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 170, 301, 151));
        LearnSection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LearnSection);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        LearnSection->setMenuBar(menubar);
        statusbar = new QStatusBar(LearnSection);
        statusbar->setObjectName("statusbar");
        LearnSection->setStatusBar(statusbar);

        retranslateUi(LearnSection);

        QMetaObject::connectSlotsByName(LearnSection);
    } // setupUi

    void retranslateUi(QMainWindow *LearnSection)
    {
        LearnSection->setWindowTitle(QCoreApplication::translate("LearnSection", "LearnSection", nullptr));
        btnElektronegatiflik->setText(QCoreApplication::translate("LearnSection", "Elektronegatiflik", nullptr));
        btnElementTurleri->setText(QCoreApplication::translate("LearnSection", "Element T\303\274rleri", nullptr));
        btnElektronIlgisi->setText(QCoreApplication::translate("LearnSection", "Elektronilgisi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LearnSection: public Ui_LearnSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNSECTION_H
