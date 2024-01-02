/********************************************************************************
** Form generated from reading UI file 'elementdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEMENTDIALOG_H
#define UI_ELEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ElementDialog
{
public:
    QHBoxLayout *horizontalLayout_22;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *lblName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblSymbol;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblAtomicNumber;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblGroup;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lblPeriod;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lblBlock;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_7;
    QLabel *lblCategory;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QLabel *lblPhase;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_9;
    QLabel *lblBoil;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_10;
    QLabel *lblMelt;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_11;
    QLabel *lblAtomicRadius;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_12;
    QLabel *lblAtomicMass;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_13;
    QLabel *lblElectronConfiguration;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_14;
    QLabel *lblElectronegativity;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_15;
    QLabel *lblOxidationStates;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_16;
    QLabel *lblIonizationEnergy;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_17;
    QLabel *lblElectronAffinity;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_18;
    QLabel *lblDensity;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_19;
    QLabel *lblDiscoveryYear;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_20;
    QLabel *lblDiscoveredBy;

    void setupUi(QDialog *ElementDialog)
    {
        if (ElementDialog->objectName().isEmpty())
            ElementDialog->setObjectName("ElementDialog");
        ElementDialog->resize(655, 591);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ElementDialog->sizePolicy().hasHeightForWidth());
        ElementDialog->setSizePolicy(sizePolicy);
        horizontalLayout_22 = new QHBoxLayout(ElementDialog);
        horizontalLayout_22->setSpacing(3);
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_22->setContentsMargins(16, 16, 16, 16);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_3 = new QLabel(ElementDialog);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(250, 0));
        label_3->setMaximumSize(QSize(16777215, 300));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto Slab")});
        font.setPointSize(11);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lblName = new QLabel(ElementDialog);
        lblName->setObjectName("lblName");
        sizePolicy1.setHeightForWidth(lblName->sizePolicy().hasHeightForWidth());
        lblName->setSizePolicy(sizePolicy1);
        lblName->setMinimumSize(QSize(250, 0));
        lblName->setMaximumSize(QSize(16777215, 300));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Slab")});
        font1.setPointSize(10);
        lblName->setFont(font1);
        lblName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lblName);

        horizontalLayout_3->setStretch(0, 9);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(ElementDialog);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(250, 0));
        label_2->setMaximumSize(QSize(16777215, 300));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lblSymbol = new QLabel(ElementDialog);
        lblSymbol->setObjectName("lblSymbol");
        sizePolicy1.setHeightForWidth(lblSymbol->sizePolicy().hasHeightForWidth());
        lblSymbol->setSizePolicy(sizePolicy1);
        lblSymbol->setMinimumSize(QSize(250, 0));
        lblSymbol->setMaximumSize(QSize(16777215, 300));
        lblSymbol->setFont(font1);
        lblSymbol->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lblSymbol);

        horizontalLayout_2->setStretch(0, 9);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(ElementDialog);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(250, 0));
        label->setMaximumSize(QSize(16777215, 300));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lblAtomicNumber = new QLabel(ElementDialog);
        lblAtomicNumber->setObjectName("lblAtomicNumber");
        sizePolicy1.setHeightForWidth(lblAtomicNumber->sizePolicy().hasHeightForWidth());
        lblAtomicNumber->setSizePolicy(sizePolicy1);
        lblAtomicNumber->setMinimumSize(QSize(250, 0));
        lblAtomicNumber->setMaximumSize(QSize(16777215, 300));
        lblAtomicNumber->setFont(font1);
        lblAtomicNumber->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblAtomicNumber);

        horizontalLayout->setStretch(0, 9);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_8 = new QLabel(ElementDialog);
        label_8->setObjectName("label_8");
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMinimumSize(QSize(250, 0));
        label_8->setMaximumSize(QSize(16777215, 300));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        lblGroup = new QLabel(ElementDialog);
        lblGroup->setObjectName("lblGroup");
        sizePolicy1.setHeightForWidth(lblGroup->sizePolicy().hasHeightForWidth());
        lblGroup->setSizePolicy(sizePolicy1);
        lblGroup->setMinimumSize(QSize(250, 0));
        lblGroup->setMaximumSize(QSize(16777215, 300));
        lblGroup->setFont(font1);
        lblGroup->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(lblGroup);

        horizontalLayout_9->setStretch(0, 9);
        horizontalLayout_9->setStretch(1, 1);
        horizontalLayout_9->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_6 = new QLabel(ElementDialog);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(250, 0));
        label_6->setMaximumSize(QSize(16777215, 300));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_6);

        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        lblPeriod = new QLabel(ElementDialog);
        lblPeriod->setObjectName("lblPeriod");
        sizePolicy1.setHeightForWidth(lblPeriod->sizePolicy().hasHeightForWidth());
        lblPeriod->setSizePolicy(sizePolicy1);
        lblPeriod->setMinimumSize(QSize(250, 0));
        lblPeriod->setMaximumSize(QSize(16777215, 300));
        lblPeriod->setFont(font1);
        lblPeriod->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(lblPeriod);

        horizontalLayout_8->setStretch(0, 9);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_7 = new QLabel(ElementDialog);
        label_7->setObjectName("label_7");
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(250, 0));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(label_7);

        horizontalSpacer_6 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_6);

        lblBlock = new QLabel(ElementDialog);
        lblBlock->setObjectName("lblBlock");
        sizePolicy1.setHeightForWidth(lblBlock->sizePolicy().hasHeightForWidth());
        lblBlock->setSizePolicy(sizePolicy1);
        lblBlock->setMinimumSize(QSize(250, 0));
        lblBlock->setFont(font1);
        lblBlock->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(lblBlock);

        horizontalLayout_15->setStretch(0, 9);
        horizontalLayout_15->setStretch(1, 1);
        horizontalLayout_15->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_12 = new QLabel(ElementDialog);
        label_12->setObjectName("label_12");
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMinimumSize(QSize(250, 0));
        label_12->setMaximumSize(QSize(16777215, 300));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_18->addWidget(label_12);

        horizontalSpacer_7 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_7);

        lblCategory = new QLabel(ElementDialog);
        lblCategory->setObjectName("lblCategory");
        sizePolicy1.setHeightForWidth(lblCategory->sizePolicy().hasHeightForWidth());
        lblCategory->setSizePolicy(sizePolicy1);
        lblCategory->setMinimumSize(QSize(250, 0));
        lblCategory->setMaximumSize(QSize(16777215, 300));
        lblCategory->setFont(font1);
        lblCategory->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_18->addWidget(lblCategory);

        horizontalLayout_18->setStretch(0, 9);
        horizontalLayout_18->setStretch(1, 1);
        horizontalLayout_18->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_9 = new QLabel(ElementDialog);
        label_9->setObjectName("label_9");
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(250, 0));
        label_9->setMaximumSize(QSize(16777215, 300));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_19->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_8);

        lblPhase = new QLabel(ElementDialog);
        lblPhase->setObjectName("lblPhase");
        sizePolicy1.setHeightForWidth(lblPhase->sizePolicy().hasHeightForWidth());
        lblPhase->setSizePolicy(sizePolicy1);
        lblPhase->setMinimumSize(QSize(250, 0));
        lblPhase->setMaximumSize(QSize(16777215, 300));
        lblPhase->setFont(font1);
        lblPhase->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_19->addWidget(lblPhase);

        horizontalLayout_19->setStretch(0, 9);
        horizontalLayout_19->setStretch(1, 1);
        horizontalLayout_19->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_13 = new QLabel(ElementDialog);
        label_13->setObjectName("label_13");
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(250, 0));
        label_13->setMaximumSize(QSize(16777215, 300));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_13);

        horizontalSpacer_9 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        lblBoil = new QLabel(ElementDialog);
        lblBoil->setObjectName("lblBoil");
        sizePolicy1.setHeightForWidth(lblBoil->sizePolicy().hasHeightForWidth());
        lblBoil->setSizePolicy(sizePolicy1);
        lblBoil->setMinimumSize(QSize(250, 0));
        lblBoil->setMaximumSize(QSize(16777215, 300));
        lblBoil->setFont(font1);
        lblBoil->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(lblBoil);

        horizontalLayout_6->setStretch(0, 9);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_16 = new QLabel(ElementDialog);
        label_16->setObjectName("label_16");
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setMinimumSize(QSize(250, 0));
        label_16->setMaximumSize(QSize(16777215, 300));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_16);

        horizontalSpacer_10 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        lblMelt = new QLabel(ElementDialog);
        lblMelt->setObjectName("lblMelt");
        sizePolicy1.setHeightForWidth(lblMelt->sizePolicy().hasHeightForWidth());
        lblMelt->setSizePolicy(sizePolicy1);
        lblMelt->setMinimumSize(QSize(250, 0));
        lblMelt->setMaximumSize(QSize(16777215, 300));
        lblMelt->setFont(font1);
        lblMelt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(lblMelt);

        horizontalLayout_7->setStretch(0, 9);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_5 = new QLabel(ElementDialog);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(250, 0));
        label_5->setMaximumSize(QSize(16777215, 300));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_11 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        lblAtomicRadius = new QLabel(ElementDialog);
        lblAtomicRadius->setObjectName("lblAtomicRadius");
        sizePolicy1.setHeightForWidth(lblAtomicRadius->sizePolicy().hasHeightForWidth());
        lblAtomicRadius->setSizePolicy(sizePolicy1);
        lblAtomicRadius->setMinimumSize(QSize(250, 0));
        lblAtomicRadius->setMaximumSize(QSize(16777215, 300));
        lblAtomicRadius->setFont(font1);
        lblAtomicRadius->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lblAtomicRadius);

        horizontalLayout_5->setStretch(0, 9);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_4 = new QLabel(ElementDialog);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(250, 0));
        label_4->setMaximumSize(QSize(16777215, 300));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_12 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        lblAtomicMass = new QLabel(ElementDialog);
        lblAtomicMass->setObjectName("lblAtomicMass");
        sizePolicy1.setHeightForWidth(lblAtomicMass->sizePolicy().hasHeightForWidth());
        lblAtomicMass->setSizePolicy(sizePolicy1);
        lblAtomicMass->setMinimumSize(QSize(250, 0));
        lblAtomicMass->setMaximumSize(QSize(16777215, 300));
        lblAtomicMass->setFont(font1);
        lblAtomicMass->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lblAtomicMass);

        horizontalLayout_4->setStretch(0, 9);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_17 = new QLabel(ElementDialog);
        label_17->setObjectName("label_17");
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);
        label_17->setMinimumSize(QSize(250, 0));
        label_17->setMaximumSize(QSize(16777215, 300));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_17);

        horizontalSpacer_13 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);

        lblElectronConfiguration = new QLabel(ElementDialog);
        lblElectronConfiguration->setObjectName("lblElectronConfiguration");
        sizePolicy1.setHeightForWidth(lblElectronConfiguration->sizePolicy().hasHeightForWidth());
        lblElectronConfiguration->setSizePolicy(sizePolicy1);
        lblElectronConfiguration->setMinimumSize(QSize(250, 0));
        lblElectronConfiguration->setMaximumSize(QSize(16777215, 300));
        lblElectronConfiguration->setFont(font1);
        lblElectronConfiguration->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(lblElectronConfiguration);

        horizontalLayout_10->setStretch(0, 9);
        horizontalLayout_10->setStretch(1, 1);
        horizontalLayout_10->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_14 = new QLabel(ElementDialog);
        label_14->setObjectName("label_14");
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setMinimumSize(QSize(250, 0));
        label_14->setMaximumSize(QSize(16777215, 300));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_14);

        horizontalSpacer_14 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);

        lblElectronegativity = new QLabel(ElementDialog);
        lblElectronegativity->setObjectName("lblElectronegativity");
        sizePolicy1.setHeightForWidth(lblElectronegativity->sizePolicy().hasHeightForWidth());
        lblElectronegativity->setSizePolicy(sizePolicy1);
        lblElectronegativity->setMinimumSize(QSize(250, 0));
        lblElectronegativity->setMaximumSize(QSize(16777215, 300));
        lblElectronegativity->setFont(font1);
        lblElectronegativity->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(lblElectronegativity);

        horizontalLayout_11->setStretch(0, 9);
        horizontalLayout_11->setStretch(1, 1);
        horizontalLayout_11->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_15 = new QLabel(ElementDialog);
        label_15->setObjectName("label_15");
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setMinimumSize(QSize(250, 0));
        label_15->setMaximumSize(QSize(16777215, 300));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(label_15);

        horizontalSpacer_15 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);

        lblOxidationStates = new QLabel(ElementDialog);
        lblOxidationStates->setObjectName("lblOxidationStates");
        sizePolicy1.setHeightForWidth(lblOxidationStates->sizePolicy().hasHeightForWidth());
        lblOxidationStates->setSizePolicy(sizePolicy1);
        lblOxidationStates->setMinimumSize(QSize(250, 0));
        lblOxidationStates->setMaximumSize(QSize(16777215, 300));
        lblOxidationStates->setFont(font1);
        lblOxidationStates->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(lblOxidationStates);

        horizontalLayout_16->setStretch(0, 9);
        horizontalLayout_16->setStretch(1, 1);
        horizontalLayout_16->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_21->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_18 = new QLabel(ElementDialog);
        label_18->setObjectName("label_18");
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);
        label_18->setMinimumSize(QSize(250, 0));
        label_18->setMaximumSize(QSize(16777215, 300));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(label_18);

        horizontalSpacer_16 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_16);

        lblIonizationEnergy = new QLabel(ElementDialog);
        lblIonizationEnergy->setObjectName("lblIonizationEnergy");
        sizePolicy1.setHeightForWidth(lblIonizationEnergy->sizePolicy().hasHeightForWidth());
        lblIonizationEnergy->setSizePolicy(sizePolicy1);
        lblIonizationEnergy->setMinimumSize(QSize(250, 0));
        lblIonizationEnergy->setMaximumSize(QSize(16777215, 300));
        lblIonizationEnergy->setFont(font1);
        lblIonizationEnergy->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(lblIonizationEnergy);

        horizontalLayout_21->setStretch(0, 9);
        horizontalLayout_21->setStretch(1, 1);
        horizontalLayout_21->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_21);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout_20->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_21 = new QLabel(ElementDialog);
        label_21->setObjectName("label_21");
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);
        label_21->setMinimumSize(QSize(250, 0));
        label_21->setMaximumSize(QSize(16777215, 300));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_20->addWidget(label_21);

        horizontalSpacer_17 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_17);

        lblElectronAffinity = new QLabel(ElementDialog);
        lblElectronAffinity->setObjectName("lblElectronAffinity");
        sizePolicy1.setHeightForWidth(lblElectronAffinity->sizePolicy().hasHeightForWidth());
        lblElectronAffinity->setSizePolicy(sizePolicy1);
        lblElectronAffinity->setMinimumSize(QSize(250, 0));
        lblElectronAffinity->setMaximumSize(QSize(16777215, 300));
        lblElectronAffinity->setFont(font1);
        lblElectronAffinity->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_20->addWidget(lblElectronAffinity);

        horizontalLayout_20->setStretch(0, 9);
        horizontalLayout_20->setStretch(1, 1);
        horizontalLayout_20->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_22 = new QLabel(ElementDialog);
        label_22->setObjectName("label_22");
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);
        label_22->setMinimumSize(QSize(250, 0));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(label_22);

        horizontalSpacer_18 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_18);

        lblDensity = new QLabel(ElementDialog);
        lblDensity->setObjectName("lblDensity");
        sizePolicy1.setHeightForWidth(lblDensity->sizePolicy().hasHeightForWidth());
        lblDensity->setSizePolicy(sizePolicy1);
        lblDensity->setMinimumSize(QSize(250, 0));
        lblDensity->setFont(font1);
        lblDensity->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(lblDensity);

        horizontalLayout_14->setStretch(0, 9);
        horizontalLayout_14->setStretch(1, 1);
        horizontalLayout_14->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_19 = new QLabel(ElementDialog);
        label_19->setObjectName("label_19");
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);
        label_19->setMinimumSize(QSize(250, 0));
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_19);

        horizontalSpacer_19 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_19);

        lblDiscoveryYear = new QLabel(ElementDialog);
        lblDiscoveryYear->setObjectName("lblDiscoveryYear");
        sizePolicy1.setHeightForWidth(lblDiscoveryYear->sizePolicy().hasHeightForWidth());
        lblDiscoveryYear->setSizePolicy(sizePolicy1);
        lblDiscoveryYear->setMinimumSize(QSize(250, 0));
        lblDiscoveryYear->setFont(font1);
        lblDiscoveryYear->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(lblDiscoveryYear);

        horizontalLayout_13->setStretch(0, 9);
        horizontalLayout_13->setStretch(1, 1);
        horizontalLayout_13->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_20 = new QLabel(ElementDialog);
        label_20->setObjectName("label_20");
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setMinimumSize(QSize(250, 0));
        label_20->setMaximumSize(QSize(16777215, 300));
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_20);

        horizontalSpacer_20 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_20);

        lblDiscoveredBy = new QLabel(ElementDialog);
        lblDiscoveredBy->setObjectName("lblDiscoveredBy");
        sizePolicy1.setHeightForWidth(lblDiscoveredBy->sizePolicy().hasHeightForWidth());
        lblDiscoveredBy->setSizePolicy(sizePolicy1);
        lblDiscoveredBy->setMinimumSize(QSize(250, 0));
        lblDiscoveredBy->setMaximumSize(QSize(16777215, 300));
        lblDiscoveredBy->setFont(font1);
        lblDiscoveredBy->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(lblDiscoveredBy);

        horizontalLayout_12->setStretch(0, 9);
        horizontalLayout_12->setStretch(1, 1);
        horizontalLayout_12->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_12);


        horizontalLayout_22->addLayout(verticalLayout);


        retranslateUi(ElementDialog);

        QMetaObject::connectSlotsByName(ElementDialog);
    } // setupUi

    void retranslateUi(QDialog *ElementDialog)
    {
        ElementDialog->setWindowTitle(QCoreApplication::translate("ElementDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("ElementDialog", "Name:", nullptr));
        lblName->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_2->setText(QCoreApplication::translate("ElementDialog", "Symbol:", nullptr));
        lblSymbol->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label->setText(QCoreApplication::translate("ElementDialog", "Atom Number:", nullptr));
        lblAtomicNumber->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_8->setText(QCoreApplication::translate("ElementDialog", "Group:", nullptr));
        lblGroup->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_6->setText(QCoreApplication::translate("ElementDialog", "Period:", nullptr));
        lblPeriod->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_7->setText(QCoreApplication::translate("ElementDialog", "Block:", nullptr));
        lblBlock->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_12->setText(QCoreApplication::translate("ElementDialog", "Category:", nullptr));
        lblCategory->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_9->setText(QCoreApplication::translate("ElementDialog", "Phase:", nullptr));
        lblPhase->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_13->setText(QCoreApplication::translate("ElementDialog", "Boiling Point:", nullptr));
        lblBoil->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_16->setText(QCoreApplication::translate("ElementDialog", "Melting Point:", nullptr));
        lblMelt->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_5->setText(QCoreApplication::translate("ElementDialog", "Atomic Radius:", nullptr));
        lblAtomicRadius->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_4->setText(QCoreApplication::translate("ElementDialog", "Atomic Mass:", nullptr));
        lblAtomicMass->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_17->setText(QCoreApplication::translate("ElementDialog", "Electron Configuration:", nullptr));
        lblElectronConfiguration->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_14->setText(QCoreApplication::translate("ElementDialog", "Electronegativity:", nullptr));
        lblElectronegativity->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_15->setText(QCoreApplication::translate("ElementDialog", "Oxidation States:", nullptr));
        lblOxidationStates->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_18->setText(QCoreApplication::translate("ElementDialog", "Ionization Energy:", nullptr));
        lblIonizationEnergy->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_21->setText(QCoreApplication::translate("ElementDialog", "Electron Affinity:", nullptr));
        lblElectronAffinity->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_22->setText(QCoreApplication::translate("ElementDialog", "Density:", nullptr));
        lblDensity->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_19->setText(QCoreApplication::translate("ElementDialog", "Discovery Year:", nullptr));
        lblDiscoveryYear->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
        label_20->setText(QCoreApplication::translate("ElementDialog", "Discovered By:", nullptr));
        lblDiscoveredBy->setText(QCoreApplication::translate("ElementDialog", "---------", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElementDialog: public Ui_ElementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEMENTDIALOG_H
