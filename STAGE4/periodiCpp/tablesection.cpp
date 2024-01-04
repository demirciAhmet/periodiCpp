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

    //connections
    connectButtons();
    connect(ui->rbtnCategories, SIGNAL(clicked()), this, SLOT(on_colorButton_clicked()));
    connect(ui->rbtnMetallic_Properties, SIGNAL(clicked()), this, SLOT(on_colorButton_clicked()));
    connect(ui->rbtnBlocks, SIGNAL(clicked()), this, SLOT(on_colorButton_clicked()));
    connect(ui->rbtnPhases, SIGNAL(clicked()), this, SLOT(on_colorButton_clicked()));

    //initialize colors and legend
    ui->rbtnCategories->click();

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
            categoryKeys.insert(element->getCategory());
        }
        else if (ui->rbtnMetallic_Properties->isChecked())
        {
            color = metallicPropertyColorMap[element->getMetallicProperty()];
            metallicPropertyKeys.insert(element->getMetallicProperty());
        }
        else if (ui->rbtnBlocks->isChecked())
        {
            color = blockColorMap[element->getBlock()];
            blockPropertyKeys.insert(element->getBlock());
        }
        else if (ui->rbtnPhases->isChecked())
        {
            color = phaseColorMap[element->getPhase()];
            phaseKeys.insert(element->getPhase());
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

//struct of the labels for legend in tablesection.ui
struct Labels {
    QLabel* colorLabel;
    QLabel* textLabel;
};

Labels labels[] = {
    { ui->lblColor, ui->lbl},
    { ui->lblColor2, ui->lbl2},
    { ui->lblColor3, ui->lbl3},
    { ui->lblColor4, ui->lbl4},
    { ui->lblColor5, ui->lbl5},
    { ui->lblColor6, ui->lbl6},
    { ui->lblColor7, ui->lbl7},
    { ui->lblColor8, ui->lbl8},
    { ui->lblColor9, ui->lbl9},
    { ui->lblColor10, ui->lbl10},
    { ui->lblColor11, ui->lbl11},
    { ui->lblColor12, ui->lbl12}
};

    size_t index = 0;
    size_t length = 12;

    //show hidden labels
    for(index = 0; index < length ; index++){
            labels[index].colorLabel->show();
            labels[index].textLabel->show();
    }

    size_t numOfHides = 0;
    if (ui->rbtnCategories->isChecked()) {
        numOfHides = 12 - categoryColorMap.size();

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

        //hide unused labels
        for ( size_t index = length - 1; index >= length - numOfHides; index--){
            labels[index].colorLabel->hide();
            labels[index].textLabel->hide();
        }


    } else if (ui->rbtnMetallic_Properties->isChecked()) {

        numOfHides = 12 - metallicPropertyColorMap.size();

        ui->lblColor->setStyleSheet("background-color: " + metallicPropertyColorMap["metal"]);
        ui->lbl->setText("Metal");
        ui->lblColor2->setStyleSheet("background-color: " + metallicPropertyColorMap["metalloid"]);
        ui->lbl2->setText("Metalloid");
        ui->lblColor3->setStyleSheet("background-color: " + metallicPropertyColorMap["nonmetal"]);
        ui->lbl3->setText("Nonmetal");
        ui->lblColor4->setStyleSheet("background-color: " + metallicPropertyColorMap["(unknown)"]);
        ui->lbl4->setText("(Unknown)");

        //hide unused labels
        for ( size_t index = length - 1; index >= length - numOfHides; index--){
            labels[index].colorLabel->hide();
            labels[index].textLabel->hide();
        }

    } else if (ui->rbtnBlocks->isChecked()) {

        numOfHides = 12 - blockColorMap.size();

        ui->lblColor->setStyleSheet("background-color: " + blockColorMap["s"]);
        ui->lbl->setText("s Block");
        ui->lblColor2->setStyleSheet("background-color: " + blockColorMap["p"]);
        ui->lbl2->setText("p Block");
        ui->lblColor3->setStyleSheet("background-color: " + blockColorMap["d"]);
        ui->lbl3->setText("d Block");
        ui->lblColor4->setStyleSheet("background-color: " + blockColorMap["f"]);
        ui->lbl4->setText("f Block");

        //hide unused labels
        for ( size_t index = length - 1; index >= length - numOfHides; index--){
            labels[index].colorLabel->hide();
            labels[index].textLabel->hide();
        }

    } else if (ui->rbtnPhases->isChecked()) {

        numOfHides = 12 - phaseColorMap.size();

        ui->lblColor->setStyleSheet("background-color: " + phaseColorMap["Solid"]);
        ui->lbl->setText("Solid");
        ui->lblColor2->setStyleSheet("background-color: " + phaseColorMap["Liquid"]);
        ui->lbl2->setText("Liquid");
        ui->lblColor3->setStyleSheet("background-color: " + phaseColorMap["Gas"]);
        ui->lbl3->setText("Gas");

        //hide unused labels
        for ( size_t index = length - 1; index >= length - numOfHides; index--){
            labels[index].colorLabel->hide();
            labels[index].textLabel->hide();
        }

    }

}

void TableSection::onElementButtonClicked(const Element& element)
{
    ElementDialog elementDialog(element, this);
    elementDialog.setModal(true);
    elementDialog.exec();
}
