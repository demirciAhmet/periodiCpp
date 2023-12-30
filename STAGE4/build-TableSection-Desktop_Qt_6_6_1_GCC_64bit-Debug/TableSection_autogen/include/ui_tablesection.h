/********************************************************************************
** Form generated from reading UI file 'tablesection.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLESECTION_H
#define UI_TABLESECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableSection
{
public:
    QGridLayout *gridLayout_2;
    QFrame *legend;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *periodic_property;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QFrame *table;
    QGridLayout *gridLayout;
    QPushButton *Element_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Element;
    QPushButton *Element_4;
    QPushButton *Element_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *TableSection)
    {
        if (TableSection->objectName().isEmpty())
            TableSection->setObjectName("TableSection");
        TableSection->resize(1048, 600);
        gridLayout_2 = new QGridLayout(TableSection);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        legend = new QFrame(TableSection);
        legend->setObjectName("legend");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(legend->sizePolicy().hasHeightForWidth());
        legend->setSizePolicy(sizePolicy);
        legend->setMinimumSize(QSize(300, 100));
        horizontalLayout = new QHBoxLayout(legend);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        widget = new QWidget(legend);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(320, 0));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addWidget(widget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 5);

        gridLayout_2->addWidget(legend, 0, 1, 1, 1);

        periodic_property = new QWidget(TableSection);
        periodic_property->setObjectName("periodic_property");
        sizePolicy1.setHeightForWidth(periodic_property->sizePolicy().hasHeightForWidth());
        periodic_property->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(periodic_property);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(periodic_property);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        font1.setBold(true);
        font1.setUnderline(true);
        label->setFont(font1);
        label->setMidLineWidth(0);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);
        label->setIndent(-1);

        verticalLayout->addWidget(label);

        pushButton_2 = new QPushButton(periodic_property);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(periodic_property);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(periodic_property);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(periodic_property);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(6, 5);

        gridLayout_2->addWidget(periodic_property, 0, 0, 2, 1);

        table = new QFrame(TableSection);
        table->setObjectName("table");
        table->setMinimumSize(QSize(600, 300));
        gridLayout = new QGridLayout(table);
        gridLayout->setObjectName("gridLayout");
        Element_2 = new QPushButton(table);
        Element_2->setObjectName("Element_2");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Element_2->sizePolicy().hasHeightForWidth());
        Element_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Element_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        Element = new QPushButton(table);
        Element->setObjectName("Element");
        sizePolicy2.setHeightForWidth(Element->sizePolicy().hasHeightForWidth());
        Element->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Element, 0, 2, 1, 1);

        Element_4 = new QPushButton(table);
        Element_4->setObjectName("Element_4");
        sizePolicy2.setHeightForWidth(Element_4->sizePolicy().hasHeightForWidth());
        Element_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Element_4, 0, 0, 1, 1);

        Element_3 = new QPushButton(table);
        Element_3->setObjectName("Element_3");
        sizePolicy2.setHeightForWidth(Element_3->sizePolicy().hasHeightForWidth());
        Element_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Element_3, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        gridLayout_2->addWidget(table, 1, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 4);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 4);

        retranslateUi(TableSection);

        QMetaObject::connectSlotsByName(TableSection);
    } // setupUi

    void retranslateUi(QWidget *TableSection)
    {
        TableSection->setWindowTitle(QCoreApplication::translate("TableSection", "TableSection", nullptr));
        label_2->setText(QCoreApplication::translate("TableSection", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("TableSection", "COLORING", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TableSection", "Categories", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TableSection", "Metallic Properties", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TableSection", "Blocks", nullptr));
        pushButton->setText(QCoreApplication::translate("TableSection", "Phases", nullptr));
        Element_2->setText(QCoreApplication::translate("TableSection", "Element", nullptr));
        Element->setText(QCoreApplication::translate("TableSection", "Element", nullptr));
        Element_4->setText(QCoreApplication::translate("TableSection", "Element", nullptr));
        Element_3->setText(QCoreApplication::translate("TableSection", "Element", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableSection: public Ui_TableSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLESECTION_H
