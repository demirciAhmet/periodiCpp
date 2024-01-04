/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *icon_only_widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *full_menu_widget;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *widget;
    QRadioButton *radioButton;
    QPushButton *pushButton_13;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget5;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget6;
    QVBoxLayout *verticalLayout_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(801, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        icon_only_widget = new QWidget(centralwidget);
        icon_only_widget->setObjectName("icon_only_widget");
        icon_only_widget->setGeometry(QRect(150, 0, 650, 51));
        pushButton = new QPushButton(icon_only_widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 110, 40));
        pushButton->setAcceptDrops(false);
        pushButton->setStyleSheet(QString::fromUtf8("#upLeft:pressed{\n"
"bborder-image: url(:/icon/learning.png);\n"
"}"));
        pushButton->setInputMethodHints(Qt::ImhNone);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/periodic-table.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));
        pushButton->setCheckable(true);
        pushButton->setAutoRepeat(false);
        pushButton->setAutoExclusive(true);
        pushButton_2 = new QPushButton(icon_only_widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 0, 110, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(30, 30));
        pushButton_2->setCheckable(true);
        pushButton_2->setAutoExclusive(true);
        pushButton_3 = new QPushButton(icon_only_widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 0, 110, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/learning.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_3->setCheckable(true);
        pushButton_3->setAutoExclusive(true);
        pushButton_4 = new QPushButton(icon_only_widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(330, 0, 110, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/quiz.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_4->setCheckable(true);
        pushButton_4->setAutoExclusive(true);
        pushButton_5 = new QPushButton(icon_only_widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(440, 0, 110, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/achievements.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(30, 30));
        pushButton_5->setCheckable(true);
        pushButton_5->setAutoExclusive(true);
        pushButton_6 = new QPushButton(icon_only_widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(550, 0, 100, 40));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(30, 30));
        pushButton_6->setCheckable(true);
        pushButton_6->setAutoExclusive(true);
        full_menu_widget = new QWidget(centralwidget);
        full_menu_widget->setObjectName("full_menu_widget");
        full_menu_widget->setGeometry(QRect(150, 30, 694, 71));
        pushButton_7 = new QPushButton(full_menu_widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 0, 110, 60));
        pushButton_7->setCheckable(true);
        pushButton_7->setAutoExclusive(true);
        pushButton_8 = new QPushButton(full_menu_widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(110, 0, 110, 60));
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);
        pushButton_9 = new QPushButton(full_menu_widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(330, 0, 110, 60));
        pushButton_9->setCheckable(true);
        pushButton_9->setAutoExclusive(true);
        pushButton_10 = new QPushButton(full_menu_widget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(440, 0, 110, 60));
        pushButton_10->setCheckable(true);
        pushButton_10->setAutoExclusive(true);
        pushButton_11 = new QPushButton(full_menu_widget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(550, 0, 100, 60));
        pushButton_11->setCheckable(true);
        pushButton_11->setAutoExclusive(true);
        pushButton_12 = new QPushButton(full_menu_widget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(220, 0, 110, 60));
        pushButton_12->setCheckable(true);
        pushButton_12->setAutoExclusive(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 140, 641, 431));
        widget->setInputMethodHints(Qt::ImhNone);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(90, 130, 112, 24));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(760, 90, 41, 41));
        pushButton_13->setCheckable(true);
        pushButton_13->setAutoExclusive(true);
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_3 = new QVBoxLayout(widget3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget4 = new QWidget(centralwidget);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(widget4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget5 = new QWidget(centralwidget);
        widget5->setObjectName("widget5");
        widget5->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_5 = new QVBoxLayout(widget5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget6 = new QWidget(centralwidget);
        widget6->setObjectName("widget6");
        widget6->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_6 = new QVBoxLayout(widget6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_13, &QPushButton::toggled, icon_only_widget, &QWidget::setVisible);
        QObject::connect(pushButton_13, &QPushButton::toggled, full_menu_widget, &QWidget::setHidden);
        QObject::connect(pushButton_5, &QPushButton::toggled, pushButton_10, &QPushButton::setChecked);
        QObject::connect(pushButton_4, &QPushButton::toggled, pushButton_9, &QPushButton::setChecked);
        QObject::connect(pushButton_3, &QPushButton::toggled, pushButton_12, &QPushButton::setChecked);
        QObject::connect(pushButton_2, &QPushButton::toggled, pushButton_8, &QPushButton::setChecked);
        QObject::connect(pushButton, &QPushButton::toggled, pushButton_7, &QPushButton::setChecked);
        QObject::connect(pushButton_10, &QPushButton::toggled, pushButton_5, &QPushButton::setChecked);
        QObject::connect(pushButton_9, &QPushButton::toggled, pushButton_4, &QPushButton::setChecked);
        QObject::connect(pushButton_12, &QPushButton::toggled, pushButton_3, &QPushButton::setChecked);
        QObject::connect(pushButton_8, &QPushButton::toggled, pushButton_2, &QPushButton::setChecked);
        QObject::connect(pushButton_7, &QPushButton::toggled, pushButton, &QPushButton::setChecked);
        QObject::connect(pushButton_6, &QPushButton::toggled, pushButton_11, &QPushButton::setChecked);
        QObject::connect(pushButton_11, &QPushButton::toggled, pushButton_6, &QPushButton::setChecked);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "#upLeft:pressed\n"
"{\n"
"image: url(:/icon/learning.png);\n"
"}", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Table", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Quiz", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Achievements", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Learn", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
