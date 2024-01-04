#include "tablesection.h"
#include "periodictable.h"
#include "elementdialog.h"

//constructor
TableSection::TableSection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TableSection)
{
    ui->setupUi(this);

    //initialize the Periodic Table
    PeriodicTable periodicTable = PeriodicTable(this);

    // Initialize color maps
    categoryColorMap = {
        {"Alkali Metal", "#ff0303"},
        {"Alkaline Earth Metal", "#ff7503"},
        {"Transition Metal", "#ffbf03"},
        {"Post-Transition Metal", "#008a0e"},
        {"Lanthanide", "#700b57"},
        {"Actinide", "#d916a8"},
        {"Metalloid", "#008573"},
        {"Halogen", "#3935ad"},
        {"Non Metal", "#1071e5"},
        {"Noble Gas", "#ba23f6"},
        {"(undefined)", "#979ea8"}
    };

    metallicPropertyColorMap = {
        {"metal", "#ff7503"},
        {"metalloid", "#008a0e"},
        {"nonmetal", "#3935ad"},
        {"(unknown)", "#979ea8"}
    };

    blockColorMap = {
        {"s", "#ff7503"},
        {"p", "#008a0e"},
        {"d", "#3935ad"},
        {"f", "#700b57"}
    };

    phaseColorMap = {
        {"Solid", "#ff7503"},
        {"Liquid", "#008a0e"},
        {"Gas", "#700b57"}
    };

    //connections
    connectButtons();
    connect(ui->rbtnCategories, SIGNAL(clicked()), this, SLOT(on_colorButton_clicked()));
    connect(ui->rbtnMetallic_Properties, SIGNAL(clicked()), this, SLOT(on_colorButton_clicked()));
    connect(ui->rbtnBlocks, SIGNAL(clicked()), this, SLOT(on_colorButton_clicked()));
    connect(ui->rbtnPhases, SIGNAL(clicked()), this, SLOT(on_colorButton_clicked()));

    //initialize colors and legend
    ui->rbtnCategories->setChecked(true);
    updateLegend();
    updateButtonProperties();

}
TableSection::~TableSection()
{
    delete ui;
}

void TableSection::on_colorButton_clicked(){
    updateLegend();
    updateButtonProperties();
}

void TableSection::setColorForButton(QPushButton* button, const QString& color)
{
    QString styleSheet = QString("background-color: %1").arg(color);
    button->setStyleSheet(styleSheet);
}

void TableSection::updateButtonProperties()
{
    //QString property = ui->comboBoxElementProperty->currentText();

    // Set colors for each button
    auto size_t = 1;
    auto elementNumber = PeriodicTable::elements.size() - 1;
    while (size_t <= elementNumber)
    {
        Element* element = PeriodicTable::elements[size_t];
        QString color;
        if (ui->rbtnCategories->isChecked())
        {
            color = categoryColorMap[element->getCategory()];
        }
        else if (ui->rbtnMetallic_Properties->isChecked())
        {
            color = metallicPropertyColorMap[element->getMetallicProperty()];
        }
        else if (ui->rbtnBlocks->isChecked())
        {
            color = blockColorMap[element->getBlock()];
        }
        else if (ui->rbtnPhases->isChecked())
        {
            color = phaseColorMap[element->getPhase()];
        }
        else
        {
            color = "#979ea8";
        }

        //set button colors
        if (QPushButton* button = qobject_cast<QPushButton*>(ui->gridLayout->itemAtPosition(element->getDisplayRow()-1,element->getDisplayColumn()-1)->widget()))
        {
            setColorForButton(button, color);
        }
        else {
            qDebug() << "Widget is not a QPushButton for element at position" << element->getDisplayRow()-1 << element->getDisplayColumn()-1 << element->getName() ;
        }

        size_t++;
        //qDebug() << ui->gridLayout->itemAt(i-1)->widget()->findChild<QPushButton*>();

        //ui->gridLayout->itemAt(size_t-1)->widget()
        //ui->gridLayout->itemAtPosition(element->getPeriod()-1,element->getGroup()-1)->widget()
        //setColorForButton(ui->gridLayout->itemAt(i-1)->widget(), color);

    }
}

void TableSection::connectButtons(){
    auto size_t = 1;
    auto elementNumber = PeriodicTable::elements.size() - 1;
    while (size_t <= elementNumber)
    {
        Element* element = PeriodicTable::elements[size_t];

        if (QPushButton* button = qobject_cast<QPushButton*>(ui->gridLayout->itemAtPosition(element->getDisplayRow()-1,element->getDisplayColumn()-1)->widget()))
        {
            connect(button, &QPushButton::clicked, this, [this, element]() { onElementButtonClicked(*element);}  );
        }
        else {
            qDebug() << "Widget is not a QPushButton for element at position" << element->getDisplayRow()-1 << element->getDisplayColumn()-1 << element->getName() ;
        }

        size_t++;
}
}

void TableSection::updateLegend() {

    ui->lblColor->show();
    ui->lbl->show();
    ui->lblColor2->show();
    ui->lbl2->show();
    ui->lblColor3->show();
    ui->lbl3->show();
    ui->lblColor4->show();
    ui->lbl4->show();
    ui->lblColor5->show();
    ui->lbl5->show();
    ui->lblColor6->show();
    ui->lbl6->show();
    ui->lblColor7->show();
    ui->lbl7->show();
    ui->lblColor8->show();
    ui->lbl8->show();
    ui->lblColor9->show();
    ui->lbl9->show();
    ui->lblColor10->show();
    ui->lbl10->show();
    ui->lblColor11->show();
    ui->lbl11->show();
    ui->lblColor12->show();
    ui->lbl12->show();

    if (ui->rbtnCategories->isChecked()) {
        ui->lblColor->setStyleSheet("background-color: " + categoryColorMap["Alkali Metal"]);
        ui->lbl->setText("Alkali Metal");
        ui->lblColor2->setStyleSheet("background-color: " + categoryColorMap["Alkaline Earth Metal"]);
        ui->lbl2->setText("Alkaline Earth Metal");
        ui->lblColor3->setStyleSheet("background-color: " + categoryColorMap["Transition Metal"]);
        ui->lbl3->setText("Transition Metal");
        ui->lblColor4->setStyleSheet("background-color: " + categoryColorMap["Post-Transition Metal"]);
        ui->lbl4->setText("Post-Transition Metal");
        ui->lblColor5->setStyleSheet("background-color: " + categoryColorMap["Lanthanide"]);
        ui->lbl5->setText("Lanthanide");
        ui->lblColor6->setStyleSheet("background-color: " + categoryColorMap["Actinide"]);
        ui->lbl6->setText("Actinide");
        ui->lblColor7->setStyleSheet("background-color: " + categoryColorMap["Metalloid"]);
        ui->lbl7->setText("Metalloid");
        ui->lblColor8->setStyleSheet("background-color: " + categoryColorMap["Halogen"]);
        ui->lbl8->setText("Halogen");
        ui->lblColor9->setStyleSheet("background-color: " + categoryColorMap["Non Metal"]);
        ui->lbl9->setText("Non Metal");
        ui->lblColor10->setStyleSheet("background-color: " + categoryColorMap["Noble Gas"]);
        ui->lbl10->setText("Noble Gas");
        ui->lblColor11->setStyleSheet("background-color: " + categoryColorMap["(undefined)"]);
        ui->lbl11->setText("(unknown)");
        ui->lblColor12->hide();
        ui->lbl12->hide();
    } else if (ui->rbtnMetallic_Properties->isChecked()) {
        ui->lblColor->setStyleSheet("background-color: " + metallicPropertyColorMap["metal"]);
        ui->lbl->setText("Metal");
        ui->lblColor2->setStyleSheet("background-color: " + metallicPropertyColorMap["metalloid"]);
        ui->lbl2->setText("Metalloid");
        ui->lblColor3->setStyleSheet("background-color: " + metallicPropertyColorMap["nonmetal"]);
        ui->lbl3->setText("Nonmetal");
        ui->lblColor4->setStyleSheet("background-color: " + metallicPropertyColorMap["(unknown)"]);
        ui->lbl4->setText("(Unknown)");
        ui->lblColor5->hide();
        ui->lbl5->hide();
        ui->lblColor6->hide();
        ui->lbl6->hide();
        ui->lblColor7->hide();
        ui->lbl7->hide();
        ui->lblColor8->hide();
        ui->lbl8->hide();
        ui->lblColor9->hide();
        ui->lbl9->hide();
        ui->lblColor10->hide();
        ui->lbl10->hide();
        ui->lblColor11->hide();
        ui->lbl11->hide();
        ui->lblColor12->hide();
        ui->lbl12->hide();
    } else if (ui->rbtnBlocks->isChecked()) {
        ui->lblColor->setStyleSheet("background-color: " + blockColorMap["s"]);
        ui->lbl->setText("s Block");
        ui->lblColor2->setStyleSheet("background-color: " + blockColorMap["p"]);
        ui->lbl2->setText("p Block");
        ui->lblColor3->setStyleSheet("background-color: " + blockColorMap["d"]);
        ui->lbl3->setText("d Block");
        ui->lblColor4->setStyleSheet("background-color: " + blockColorMap["f"]);
        ui->lbl4->setText("f Block");
        ui->lblColor5->hide();
        ui->lbl5->hide();
        ui->lblColor6->hide();
        ui->lbl6->hide();
        ui->lblColor7->hide();
        ui->lbl7->hide();
        ui->lblColor8->hide();
        ui->lbl8->hide();
        ui->lblColor9->hide();
        ui->lbl9->hide();
        ui->lblColor10->hide();
        ui->lbl10->hide();
        ui->lblColor11->hide();
        ui->lbl11->hide();
        ui->lblColor12->hide();
        ui->lbl12->hide();
    } else if (ui->rbtnPhases->isChecked()) {
        ui->lblColor->setStyleSheet("background-color: " + phaseColorMap["Solid"]);
        ui->lbl->setText("Solid");
        ui->lblColor2->setStyleSheet("background-color: " + phaseColorMap["Liquid"]);
        ui->lbl2->setText("Liquid");
        ui->lblColor3->setStyleSheet("background-color: " + phaseColorMap["Gas"]);
        ui->lbl3->setText("Gas");
        ui->lblColor4->hide();
        ui->lbl4->hide();
        ui->lblColor5->hide();
        ui->lbl5->hide();
        ui->lblColor6->hide();
        ui->lbl6->hide();
        ui->lblColor7->hide();
        ui->lbl7->hide();
        ui->lblColor8->hide();
        ui->lbl8->hide();
        ui->lblColor9->hide();
        ui->lbl9->hide();
        ui->lblColor10->hide();
        ui->lbl10->hide();
        ui->lblColor11->hide();
        ui->lbl11->hide();
        ui->lblColor12->hide();
        ui->lbl12->hide();
    }
}

void TableSection::onElementButtonClicked(const Element& element)
{
    ElementDialog elementDialog(element, this);
    elementDialog.setModal(true);
    elementDialog.exec();
}
