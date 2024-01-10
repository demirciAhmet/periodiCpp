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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quizSection
{
public:
    QStackedWidget *Pages;
    QWidget *MainMenu;
    QGridLayout *gridLayout;
    QLabel *lblInfo;
    QPushButton *pushButton;
    QWidget *MakeChoice;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl;
    QPushButton *btnLevelMode;
    QPushButton *btnChallangeMode;
    QPushButton *btnBack;
    QWidget *ChallangeChoice;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnChoice;
    QPushButton *btnChoice2;
    QPushButton *btnBack_2;
    QWidget *LevelChoice;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *btnLevel;
    QPushButton *btnLevel2;
    QPushButton *btnLevel3;
    QPushButton *btnLevel4;
    QPushButton *btnLevel5;
    QPushButton *pushButton_2;

    void setupUi(QWidget *quizSection)
    {
        if (quizSection->objectName().isEmpty())
            quizSection->setObjectName("quizSection");
        quizSection->resize(903, 627);
        Pages = new QStackedWidget(quizSection);
        Pages->setObjectName("Pages");
        Pages->setGeometry(QRect(40, 10, 823, 564));
        MainMenu = new QWidget();
        MainMenu->setObjectName("MainMenu");
        gridLayout = new QGridLayout(MainMenu);
        gridLayout->setObjectName("gridLayout");
        lblInfo = new QLabel(MainMenu);
        lblInfo->setObjectName("lblInfo");

        gridLayout->addWidget(lblInfo, 0, 0, 1, 1);

        pushButton = new QPushButton(MainMenu);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(64, 32));
        pushButton->setMaximumSize(QSize(1111111, 32));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        Pages->addWidget(MainMenu);
        MakeChoice = new QWidget();
        MakeChoice->setObjectName("MakeChoice");
        MakeChoice->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_2 = new QHBoxLayout(MakeChoice);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(100, 100, 100, 100);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lbl = new QLabel(MakeChoice);
        lbl->setObjectName("lbl");
        lbl->setMaximumSize(QSize(16777215, 128));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto Slab")});
        font.setPointSize(20);
        font.setBold(true);
        lbl->setFont(font);
        lbl->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl);

        btnLevelMode = new QPushButton(MakeChoice);
        btnLevelMode->setObjectName("btnLevelMode");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(128);
        sizePolicy1.setVerticalStretch(48);
        sizePolicy1.setHeightForWidth(btnLevelMode->sizePolicy().hasHeightForWidth());
        btnLevelMode->setSizePolicy(sizePolicy1);
        btnLevelMode->setMinimumSize(QSize(128, 48));
        btnLevelMode->setMaximumSize(QSize(11111111, 68));
        btnLevelMode->setLayoutDirection(Qt::LeftToRight);
        btnLevelMode->setAutoFillBackground(false);
        btnLevelMode->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(82, 148, 226);"));

        verticalLayout_2->addWidget(btnLevelMode);

        btnChallangeMode = new QPushButton(MakeChoice);
        btnChallangeMode->setObjectName("btnChallangeMode");
        sizePolicy1.setHeightForWidth(btnChallangeMode->sizePolicy().hasHeightForWidth());
        btnChallangeMode->setSizePolicy(sizePolicy1);
        btnChallangeMode->setMinimumSize(QSize(128, 48));
        btnChallangeMode->setMaximumSize(QSize(11111111, 68));
        btnChallangeMode->setLayoutDirection(Qt::LeftToRight);
        btnChallangeMode->setAutoFillBackground(false);
        btnChallangeMode->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(82, 148, 226);"));

        verticalLayout_2->addWidget(btnChallangeMode);

        btnBack = new QPushButton(MakeChoice);
        btnBack->setObjectName("btnBack");
        sizePolicy.setHeightForWidth(btnBack->sizePolicy().hasHeightForWidth());
        btnBack->setSizePolicy(sizePolicy);
        btnBack->setMinimumSize(QSize(64, 32));
        btnBack->setMaximumSize(QSize(1111111, 32));
        btnBack->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(btnBack);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);

        horizontalLayout_2->addLayout(verticalLayout_2);

        Pages->addWidget(MakeChoice);
        ChallangeChoice = new QWidget();
        ChallangeChoice->setObjectName("ChallangeChoice");
        verticalLayout_5 = new QVBoxLayout(ChallangeChoice);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(160, 120, 160, 120);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        btnChoice = new QPushButton(ChallangeChoice);
        btnChoice->setObjectName("btnChoice");
        btnChoice->setMinimumSize(QSize(0, 48));

        verticalLayout_3->addWidget(btnChoice);

        btnChoice2 = new QPushButton(ChallangeChoice);
        btnChoice2->setObjectName("btnChoice2");
        btnChoice2->setMinimumSize(QSize(0, 48));

        verticalLayout_3->addWidget(btnChoice2);

        btnBack_2 = new QPushButton(ChallangeChoice);
        btnBack_2->setObjectName("btnBack_2");
        sizePolicy.setHeightForWidth(btnBack_2->sizePolicy().hasHeightForWidth());
        btnBack_2->setSizePolicy(sizePolicy);
        btnBack_2->setMinimumSize(QSize(64, 32));
        btnBack_2->setMaximumSize(QSize(1111111, 32));
        btnBack_2->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(btnBack_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        Pages->addWidget(ChallangeChoice);
        LevelChoice = new QWidget();
        LevelChoice->setObjectName("LevelChoice");
        verticalLayout_4 = new QVBoxLayout(LevelChoice);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(120, 120, 120, 120);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btnLevel = new QPushButton(LevelChoice);
        btnLevel->setObjectName("btnLevel");
        btnLevel->setMinimumSize(QSize(0, 48));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        font1.setPointSize(16);
        font1.setBold(true);
        btnLevel->setFont(font1);

        verticalLayout->addWidget(btnLevel);

        btnLevel2 = new QPushButton(LevelChoice);
        btnLevel2->setObjectName("btnLevel2");
        btnLevel2->setMinimumSize(QSize(0, 48));
        btnLevel2->setFont(font1);

        verticalLayout->addWidget(btnLevel2);

        btnLevel3 = new QPushButton(LevelChoice);
        btnLevel3->setObjectName("btnLevel3");
        btnLevel3->setMinimumSize(QSize(0, 48));
        btnLevel3->setFont(font1);

        verticalLayout->addWidget(btnLevel3);

        btnLevel4 = new QPushButton(LevelChoice);
        btnLevel4->setObjectName("btnLevel4");
        btnLevel4->setMinimumSize(QSize(0, 48));
        btnLevel4->setFont(font1);

        verticalLayout->addWidget(btnLevel4);

        btnLevel5 = new QPushButton(LevelChoice);
        btnLevel5->setObjectName("btnLevel5");
        btnLevel5->setMinimumSize(QSize(0, 48));
        btnLevel5->setFont(font1);

        verticalLayout->addWidget(btnLevel5);

        pushButton_2 = new QPushButton(LevelChoice);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        verticalLayout_4->addLayout(verticalLayout);

        Pages->addWidget(LevelChoice);

        retranslateUi(quizSection);

        Pages->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(quizSection);
    } // setupUi

    void retranslateUi(QWidget *quizSection)
    {
        quizSection->setWindowTitle(QCoreApplication::translate("quizSection", "QuizSection", nullptr));
        lblInfo->setText(QCoreApplication::translate("quizSection", "Welcome to Quiz! There are two options in this section:\n"
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
        pushButton->setText(QCoreApplication::translate("quizSection", "Next", nullptr));
        lbl->setText(QCoreApplication::translate("quizSection", "Please make a choice:", nullptr));
        btnLevelMode->setText(QCoreApplication::translate("quizSection", "Level Mode", nullptr));
        btnChallangeMode->setText(QCoreApplication::translate("quizSection", "Challange Mode", nullptr));
        btnBack->setText(QCoreApplication::translate("quizSection", "Back", nullptr));
        btnChoice->setText(QCoreApplication::translate("quizSection", "Start Challange!", nullptr));
        btnChoice2->setText(QCoreApplication::translate("quizSection", "Show Highest Score", nullptr));
        btnBack_2->setText(QCoreApplication::translate("quizSection", "Back", nullptr));
        btnLevel->setText(QCoreApplication::translate("quizSection", "Level 1", nullptr));
        btnLevel2->setText(QCoreApplication::translate("quizSection", "Level 2", nullptr));
        btnLevel3->setText(QCoreApplication::translate("quizSection", "Level 3", nullptr));
        btnLevel4->setText(QCoreApplication::translate("quizSection", "Level 4", nullptr));
        btnLevel5->setText(QCoreApplication::translate("quizSection", "Level 5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("quizSection", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quizSection: public Ui_quizSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZSECTION_H
