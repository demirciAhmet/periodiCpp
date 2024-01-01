#include "tablesection.h"
#include "forms/ui_tablesection.h"
#include "periodictable.h"
#include "elementdialog.h"

TableSection::TableSection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TableSection)
{
    //initialize the Periodic Table
    ui->setupUi(this);
    ui->rbtnCategories->setChecked(true);
    PeriodicTable periodicTable = PeriodicTable(this);

    // Initialize color maps
    categoryColorMap = {
        {"Alkali Metal", "#ff0303"},
        {"Alkaline Earth Metal", "#ff7503"},
        {"Transition Metal", "#ffbf03"},
        {"Post-Transition Metal", "#a0ee03"},
        {"Lanthanide", "#d916a8"},
        {"Actinide", "#ba23f6"},
        {"Metalloid", "#008a0e"},
        {"Halogen", "#1071e5"},
        {"Non Metal", "#3935ad"},
        {"Noble Gas", "#700b57"},
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

    connect(ui->comboBoxElementProperty, SIGNAL(currentIndexChanged(int)), this, SLOT(onElementPropertySelected(int)));


}
TableSection::~TableSection()
{
    delete ui;
}

void TableSection::on_Categories_toggled(bool checked)
{
    updateButtonProperties();
}


void TableSection::on_Metallic_Properties_toggled(bool checked)
{
    updateButtonProperties();
}


void TableSection::on_Blocks_toggled(bool checked)
{
    updateButtonProperties();
}


void TableSection::on_Phases_toggled(bool checked)
{
    updateButtonProperties();
}

void TableSection::onElementPropertySelected(int index)
{
    Q_UNUSED(index);
    updateButtonProperties();
}

void TableSection::setColorForButton(QPushButton* button, const QString& color)
{
    QString styleSheet = QString("background-color: %1").arg(color);
    button->setStyleSheet(styleSheet);
}

void TableSection::updateButtonProperties()
{
    // Iterate through buttons and update properties based on user selections
    QList<QPushButton*> buttons = ui->gridLayout->findChildren<QPushButton*>();

    for (QPushButton* button : buttons) {
        // Retrieve element properties
        QString category = button->property("category").toString();
        QString metallicProperty = button->property("metallicProperty").toString();
        QString block = button->property("block").toString();
        QString phase = button->property("phase").toString();

        // Determine color based on user selection
        QString color;
        if (ui->rbtnCategories->isChecked()) {
            color = categoryColorMap.value(category, "");
        } else if (ui->rbtnMetallic_Properties->isChecked()) {
            color = metallicPropertyColorMap.value(metallicProperty, "");
        } else if (ui->rbtnBlocks->isChecked()) {
            color = blockColorMap.value(block, "");
        } else if (ui->rbtnPhases->isChecked()) {
            color = phaseColorMap.value(phase, "");
        }

        // Set color for the button
        setColorForButton(button, color);
    }
}

void TableSection::on_btnHydrogen_clicked()
{
    Element *hydrogen = new Element(1,"H","Hydrogen",1.008,37,1,1,"Hydrogen is a chemical element with chemical symbol H and atomic number 1. With an atomic weight of 1.00794 u, hydrogen is the lightest element on the periodic table. Its monatomic form (H) is the most abundant chemical substance in the Universe, constituting roughly 75% of all baryonic mass.","nonmetal","nonmetal","s","Gas",20.271,13.99,"1s1" ,2.2,"-1, 1",1312,-73,0.08988,1766,"Cavendish");
    ElementDialog hydrogenDialog(*hydrogen,this);
    hydrogenDialog.setModal(true);
    hydrogenDialog.exec();
    delete hydrogen;
}


void TableSection::on_btnHelium_clicked()
{
    ElementDialog heliumDialog(*PeriodicTable::elements[110],this);
    heliumDialog.setModal(true);
    heliumDialog.exec();
}


void TableSection::on_btnLithium_clicked()
{
    ElementDialog lithiumDialog(this);
    lithiumDialog.setModal(true);
    lithiumDialog.exec();
}



