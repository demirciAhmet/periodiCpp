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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget_1;
    QWidget *tab_1;
    QPushButton *btnHydrogen;
    QLabel *label;
    QWidget *tab_2;

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
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 42, 42);\n"
"border-color: rgb(42, 42, 42);\n"
"alternate-background-color: rgb(42, 42, 42);"));
        horizontalLayout = new QHBoxLayout(Dialog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget_1 = new QTabWidget(Dialog);
        tabWidget_1->setObjectName("tabWidget_1");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        font1.setHintingPreference(QFont::PreferDefaultHinting);
        tabWidget_1->setFont(font1);
        tabWidget_1->setFocusPolicy(Qt::TabFocus);
        tabWidget_1->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabWidget_1->setLayoutDirection(Qt::RightToLeft);
        tabWidget_1->setAutoFillBackground(false);
        tabWidget_1->setStyleSheet(QString::fromUtf8(""));
        tabWidget_1->setTabShape(QTabWidget::Rounded);
        tabWidget_1->setTabBarAutoHide(false);
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        tab_1->setStyleSheet(QString::fromUtf8(""));
        btnHydrogen = new QPushButton(tab_1);
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
        label = new QLabel(tab_1);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 300, 66, 18));
        label->setLayoutDirection(Qt::LeftToRight);
        tabWidget_1->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget_1->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget_1);


        retranslateUi(Dialog);

        tabWidget_1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnHydrogen->setText(QCoreApplication::translate("Dialog", "H", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        tabWidget_1->setTabText(tabWidget_1->indexOf(tab_1), QCoreApplication::translate("Dialog", "Tab 1", nullptr));
        tabWidget_1->setTabText(tabWidget_1->indexOf(tab_2), QCoreApplication::translate("Dialog", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
