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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(800, 600);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Welcome to Quiz! There are two options in this section:\n"
"\n"
"1-Level Mode: \n"
"\n"
"*There are 5 different levels in this mode.\n"
"\n"
"*As you level up, the questions in the levels become more difficult. You must get all the questions right to pass a level.\n"
"\n"
"2-Challenge Mode: \n"
"\n"
"*In this mode there are 50 questions and 5 minutes to solve them.\n"
"\n"
"*There is also a score keeper and a high score section.\n"
"\n"
"*You will be penalized -1 point for every second that passes and -3 points for every mistake you make.\n"
"\n"
"*You will get +5 points for every question you get right. You can give up if you wish.\n"
"\n"
"*But if you give up, every question you fail will be recorded as incorrect. ", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
