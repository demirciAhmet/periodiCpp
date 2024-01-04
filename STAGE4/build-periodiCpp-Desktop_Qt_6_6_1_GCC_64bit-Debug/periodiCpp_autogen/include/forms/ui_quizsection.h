/********************************************************************************
** Form generated from reading UI file 'quizsection.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZSECTION_H
#define UI_QUIZSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizSection
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *QuizSection)
    {
        if (QuizSection->objectName().isEmpty())
            QuizSection->setObjectName("QuizSection");
        QuizSection->resize(883, 627);
        verticalLayout = new QVBoxLayout(QuizSection);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(40, -1, 40, 20);
        label_2 = new QLabel(QuizSection);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(QuizSection);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(QuizSection);

        QMetaObject::connectSlotsByName(QuizSection);
    } // setupUi

    void retranslateUi(QWidget *QuizSection)
    {
        QuizSection->setWindowTitle(QCoreApplication::translate("QuizSection", "QuizSection", nullptr));
        label_2->setText(QCoreApplication::translate("QuizSection", "Welcome to Quiz! There are two options in this section:\n"
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
        pushButton->setText(QCoreApplication::translate("QuizSection", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuizSection: public Ui_QuizSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZSECTION_H
