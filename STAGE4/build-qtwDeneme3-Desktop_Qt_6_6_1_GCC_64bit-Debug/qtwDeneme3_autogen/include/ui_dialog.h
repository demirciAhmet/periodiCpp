/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QPushButton *btnHydrogen;
    QWidget *tab_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(849, 585);
        Dialog->setMinimumSize(QSize(800, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto Slab")});
        font.setPointSize(20);
        font.setStyleStrategy(QFont::PreferDefault);
        font.setHintingPreference(QFont::PreferDefaultHinting);
        Dialog->setFont(font);
        Dialog->setAutoFillBackground(false);
        horizontalLayout = new QHBoxLayout(Dialog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(160, 0, 0, 0);
        tabWidget_2 = new QTabWidget(Dialog);
        tabWidget_2->setObjectName("tabWidget_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        font1.setHintingPreference(QFont::PreferDefaultHinting);
        tabWidget_2->setFont(font1);
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        btnHydrogen = new QPushButton(tab_3);
        btnHydrogen->setObjectName("btnHydrogen");
        btnHydrogen->setGeometry(QRect(60, 30, 71, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto Slab")});
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        btnHydrogen->setFont(font2);
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget_2->addTab(tab_4, QString());

        horizontalLayout->addWidget(tabWidget_2);


        retranslateUi(Dialog);

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnHydrogen->setText(QCoreApplication::translate("Dialog", "H", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("Dialog", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("Dialog", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
