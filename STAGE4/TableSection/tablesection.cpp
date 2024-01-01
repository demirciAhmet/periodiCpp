#include "tablesection.h"
#include "periodictable.h"
#include "elementdialog.h"

TableSection::TableSection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TableSection)
{
    ui->setupUi(this);

    //initialize the Periodic Table
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

    //initialize colors and legend
    updateLegend();
    updateButtonProperties();

    connect(ui->comboBoxElementProperty, SIGNAL(currentIndexChanged(int)), this, SLOT(onElementPropertySelected(int)));

}
TableSection::~TableSection()
{
    delete ui;
}


void TableSection::on_rbtnCategories_clicked()
{
    updateLegend();
    updateButtonProperties();
}


void TableSection::on_rbtnMetallic_Properties_clicked()
{
    updateLegend();
    updateButtonProperties();
}


void TableSection::on_rbtnBlocks_clicked()
{
    updateLegend();
    updateButtonProperties();
}


void TableSection::on_rbtnPhases_clicked()
{
    updateLegend();
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
    //QString property = ui->comboBoxElementProperty->currentText();

    // Set colors for each button
    int j=1;
    for (int i = 1; i <= 118; i++)
    {
        Element* element = PeriodicTable::elements[i];
        QString color;
        if (ui->rbtnCategories->isChecked())
        {
            color = categoryColorMap[element->getCategory()];
            qDebug() << "color = category of the element";
        }
        else if (ui->rbtnMetallic_Properties->isChecked())
        {
            color = metallicPropertyColorMap[element->getMetallicProperty()];
            qDebug() << "color = metallic property of the element";
        }
        else if (ui->rbtnBlocks->isChecked())
        {
            color = blockColorMap[element->getBlock()];
            qDebug() << "color = block of the element";
        }
        else if (ui->rbtnPhases->isChecked())
        {
            color = phaseColorMap[element->getPhase()];
            qDebug() << "color = phase of the element";
        }
        else
        {
            color = "#979ea8";
        }

        if (QPushButton* button = qobject_cast<QPushButton*>(ui->gridLayout->itemAt(i-1)->widget()))
        {
            setColorForButton(button, color);
        }
        else
        {
            qDebug() << "Widget is not a QPushButton for element at position" << element->getPeriod()-1 << "," << element->getGroup()-1;
        }

        //qDebug() << ui->gridLayout->itemAt(i-1)->widget()->findChild<QPushButton*>();
        //setColorForButton(ui->gridLayout->itemAt(i-1)->widget(), color);

        //setColorForButton(ui->gridLayout->itemAtPosition(element->getPeriod()-1,element->getGroup()-1)->widget()->findChild<QPushButton*>(), color);
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
        ui->lbl11->setText("(undefined)");
        ui->lblColor12->hide();
        ui->lbl12->hide();
    } else if (ui->rbtnMetallic_Properties->isChecked()) {
        ui->lblColor->setStyleSheet("background-color: " + metallicPropertyColorMap["metal"]);
        ui->lbl->setText("metal");
        ui->lblColor2->setStyleSheet("background-color: " + metallicPropertyColorMap["metalloid"]);
        ui->lbl2->setText("metalloid");
        ui->lblColor3->setStyleSheet("background-color: " + metallicPropertyColorMap["nonmetal"]);
        ui->lbl3->setText("nonmetal");
        ui->lblColor4->setStyleSheet("background-color: " + metallicPropertyColorMap["(unknown)"]);
        ui->lbl4->setText("(unknown)");
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
        ui->lbl->setText("s");
        ui->lblColor2->setStyleSheet("background-color: " + blockColorMap["p"]);
        ui->lbl2->setText("p");
        ui->lblColor3->setStyleSheet("background-color: " + blockColorMap["d"]);
        ui->lbl3->setText("d");
        ui->lblColor4->setStyleSheet("background-color: " + blockColorMap["f"]);
        ui->lbl4->setText("f");
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

//Element *hydrogen = new Element(1,"H","Hydrogen",1.008,37,1,1,"Hydrogen is a chemical element with chemical symbol H and atomic number 1. With an atomic weight of 1.00794 u, hydrogen is the lightest element on the periodic table. Its monatomic form (H) is the most abundant chemical substance in the Universe, constituting roughly 75% of all baryonic mass.","nonmetal","nonmetal","s","Gas",20.271,13.99,"1s1" ,2.2,"-1, 1",1312,-73,0.08988,1766,"Cavendish");
//ElementDialog hydrogenDialog(*hydrogen,this);

void TableSection::on_btnHydrogen_clicked()
{
    ElementDialog hydrogenDialog(*PeriodicTable::elements[1],this);
    hydrogenDialog.setModal(true);
    hydrogenDialog.exec();
}


void TableSection::on_btnHelium_clicked()
{
    ElementDialog heliumDialog(*PeriodicTable::elements[2],this);
    heliumDialog.setModal(true);
    heliumDialog.exec();
}


void TableSection::on_btnLithium_clicked()
{
    ElementDialog lithiumDialog(*PeriodicTable::elements[3],this);
    lithiumDialog.setModal(true);
    lithiumDialog.exec();
}

void TableSection::on_btnBeryllium_clicked()
{
    ElementDialog berylliumDialog(*PeriodicTable::elements[4],this);
    berylliumDialog.setModal(true);
    berylliumDialog.exec();
}

void TableSection::on_btnBoron_clicked()
{
    ElementDialog boronDialog(*PeriodicTable::elements[5],this);
    boronDialog.setModal(true);
    boronDialog.exec();
}

void TableSection::on_btnCarbon_clicked()
{
    ElementDialog carbonDialog(*PeriodicTable::elements[6],this);
    carbonDialog.setModal(true);
    carbonDialog.exec();
}

void TableSection::on_btnNitrogen_clicked()
{
    ElementDialog nitrogenDialog(*PeriodicTable::elements[7],this);
    nitrogenDialog.setModal(true);
    nitrogenDialog.exec();
}

void TableSection::on_btnOxygen_clicked()
{
    ElementDialog oxygenDialog(*PeriodicTable::elements[8],this);
    oxygenDialog.setModal(true);
    oxygenDialog.exec();
}

void TableSection::on_btnFluorine_clicked()
{
    ElementDialog fluorineDialog(*PeriodicTable::elements[9],this);
    fluorineDialog.setModal(true);
    fluorineDialog.exec();
}

void TableSection::on_btnNeon_clicked()
{
    ElementDialog neonDialog(*PeriodicTable::elements[10],this);
    neonDialog.setModal(true);
    neonDialog.exec();
}

void TableSection::on_btnSodium_clicked()
{
    ElementDialog sodiumDialog(*PeriodicTable::elements[11],this);
    sodiumDialog.setModal(true);
    sodiumDialog.exec();
}

void TableSection::on_btnMagnesium_clicked()
{
    ElementDialog magnesiumDialog(*PeriodicTable::elements[12],this);
    magnesiumDialog.setModal(true);
    magnesiumDialog.exec();
}

void TableSection::on_btnAluminum_clicked()
{
    ElementDialog aluminumDialog(*PeriodicTable::elements[13],this);
    aluminumDialog.setModal(true);
    aluminumDialog.exec();
}

void TableSection::on_btnSilicon_clicked()
{
    ElementDialog siliconDialog(*PeriodicTable::elements[14],this);
    siliconDialog.setModal(true);
    siliconDialog.exec();
}

void TableSection::on_btnPhosphorus_clicked()
{
    ElementDialog phosphorusDialog(*PeriodicTable::elements[15],this);
    phosphorusDialog.setModal(true);
    phosphorusDialog.exec();
}

void TableSection::on_btnSulfur_clicked()
{
    ElementDialog sulfurDialog(*PeriodicTable::elements[16],this);
    sulfurDialog.setModal(true);
    sulfurDialog.exec();
}

void TableSection::on_btnChlorine_clicked()
{
    ElementDialog chlorineDialog(*PeriodicTable::elements[17],this);
    chlorineDialog.setModal(true);
    chlorineDialog.exec();
}

void TableSection::on_btnArgon_clicked()
{
    ElementDialog argonDialog(*PeriodicTable::elements[18],this);
    argonDialog.setModal(true);
    argonDialog.exec();
}

void TableSection::on_btnPotassium_clicked()
{
    ElementDialog potassiumDialog(*PeriodicTable::elements[19],this);
    potassiumDialog.setModal(true);
    potassiumDialog.exec();
}

void TableSection::on_btnCalcium_clicked()
{
    ElementDialog calciumDialog(*PeriodicTable::elements[20],this);
    calciumDialog.setModal(true);
    calciumDialog.exec();
}

void TableSection::on_btnScandium_clicked()
{
    ElementDialog scandiumDialog(*PeriodicTable::elements[21],this);
    scandiumDialog.setModal(true);
    scandiumDialog.exec();
}

void TableSection::on_btnTitanium_clicked()
{
    ElementDialog titaniumDialog(*PeriodicTable::elements[22],this);
    titaniumDialog.setModal(true);
    titaniumDialog.exec();
}

void TableSection::on_btnVanadium_clicked()
{
    ElementDialog vanadiumDialog(*PeriodicTable::elements[23],this);
    vanadiumDialog.setModal(true);
    vanadiumDialog.exec();
}

void TableSection::on_btnChromium_clicked()
{
    ElementDialog chromiumDialog(*PeriodicTable::elements[24],this);
    chromiumDialog.setModal(true);
    chromiumDialog.exec();
}

void TableSection::on_btnManganese_clicked()
{
    ElementDialog manganeseDialog(*PeriodicTable::elements[25],this);
    manganeseDialog.setModal(true);
    manganeseDialog.exec();
}

void TableSection::on_btnIron_clicked()
{
    ElementDialog ironDialog(*PeriodicTable::elements[26],this);
    ironDialog.setModal(true);
    ironDialog.exec();
}

void TableSection::on_btnCobalt_clicked()
{
    ElementDialog cobaltDialog(*PeriodicTable::elements[27],this);
    cobaltDialog.setModal(true);
    cobaltDialog.exec();
}

void TableSection::on_btnNickel_clicked()
{
    ElementDialog nickelDialog(*PeriodicTable::elements[28],this);
    nickelDialog.setModal(true);
    nickelDialog.exec();
}

void TableSection::on_btnCopper_clicked()
{
    ElementDialog copperDialog(*PeriodicTable::elements[29],this);
    copperDialog.setModal(true);
    copperDialog.exec();
}

void TableSection::on_btnZinc_clicked()
{
    ElementDialog zincDialog(*PeriodicTable::elements[30],this);
    zincDialog.setModal(true);
    zincDialog.exec();
}

void TableSection::on_btnGallium_clicked()
{
    ElementDialog galliumDialog(*PeriodicTable::elements[31],this);
    galliumDialog.setModal(true);
    galliumDialog.exec();
}

void TableSection::on_btnGermanium_clicked()
{
    ElementDialog germaniumDialog(*PeriodicTable::elements[32],this);
    germaniumDialog.setModal(true);
    germaniumDialog.exec();
}

void TableSection::on_btnArsenic_clicked()
{
    ElementDialog arsenicDialog(*PeriodicTable::elements[33],this);
    arsenicDialog.setModal(true);
    arsenicDialog.exec();
}

void TableSection::on_btnSelenium_clicked()
{
    ElementDialog seleniumDialog(*PeriodicTable::elements[34],this);
    seleniumDialog.setModal(true);
    seleniumDialog.exec();
}

void TableSection::on_btnBromine_clicked()
{
    ElementDialog bromineDialog(*PeriodicTable::elements[35],this);
    bromineDialog.setModal(true);
    bromineDialog.exec();
}

void TableSection::on_btnKrypton_clicked()
{
    ElementDialog kryptonDialog(*PeriodicTable::elements[36],this);
    kryptonDialog.setModal(true);
    kryptonDialog.exec();
}

void TableSection::on_btnRubidium_clicked()
{
    ElementDialog rubidiumDialog(*PeriodicTable::elements[37],this);
    rubidiumDialog.setModal(true);
    rubidiumDialog.exec();
}

void TableSection::on_btnStrontium_clicked()
{
    ElementDialog strontiumDialog(*PeriodicTable::elements[38],this);
    strontiumDialog.setModal(true);
    strontiumDialog.exec();
}

void TableSection::on_btnYttrium_clicked()
{
    ElementDialog yttriumDialog(*PeriodicTable::elements[39],this);
    yttriumDialog.setModal(true);
    yttriumDialog.exec();
}

void TableSection::on_btnZirconium_clicked()
{
    ElementDialog zirconiumDialog(*PeriodicTable::elements[40],this);
    zirconiumDialog.setModal(true);
    zirconiumDialog.exec();
}

void TableSection::on_btnNiobium_clicked()
{
    ElementDialog niobiumDialog(*PeriodicTable::elements[41],this);
    niobiumDialog.setModal(true);
    niobiumDialog.exec();
}

void TableSection::on_btnMolybdenum_clicked()
{
    ElementDialog molybdenumDialog(*PeriodicTable::elements[42],this);
    molybdenumDialog.setModal(true);
    molybdenumDialog.exec();
}

void TableSection::on_btnTechnetium_clicked()
{
    ElementDialog technetiumDialog(*PeriodicTable::elements[43],this);
    technetiumDialog.setModal(true);
    technetiumDialog.exec();
}

void TableSection::on_btnRuthenium_clicked()
{
    ElementDialog rutheniumDialog(*PeriodicTable::elements[44],this);
    rutheniumDialog.setModal(true);
    rutheniumDialog.exec();
}

void TableSection::on_btnRhodium_clicked()
{
    ElementDialog rhodiumDialog(*PeriodicTable::elements[45],this);
    rhodiumDialog.setModal(true);
    rhodiumDialog.exec();
}

void TableSection::on_btnPalladium_clicked()
{
    ElementDialog palladiumDialog(*PeriodicTable::elements[46],this);
    palladiumDialog.setModal(true);
    palladiumDialog.exec();
}

void TableSection::on_btnSilver_clicked()
{
    ElementDialog silverDialog(*PeriodicTable::elements[47],this);
    silverDialog.setModal(true);
    silverDialog.exec();
}

void TableSection::on_btnCadmium_clicked()
{
    ElementDialog cadmiumDialog(*PeriodicTable::elements[48],this);
    cadmiumDialog.setModal(true);
    cadmiumDialog.exec();
}

void TableSection::on_btnIndium_clicked()
{
    ElementDialog indiumDialog(*PeriodicTable::elements[49],this);
    indiumDialog.setModal(true);
    indiumDialog.exec();
}

void TableSection::on_btnTin_clicked()
{
    ElementDialog tinDialog(*PeriodicTable::elements[50],this);
    tinDialog.setModal(true);
    tinDialog.exec();
}

void TableSection::on_btnAntimony_clicked()
{
    ElementDialog antimonyDialog(*PeriodicTable::elements[51],this);
    antimonyDialog.setModal(true);
    antimonyDialog.exec();
}

void TableSection::on_btnTellurium_clicked()
{
    ElementDialog telluriumDialog(*PeriodicTable::elements[52],this);
    telluriumDialog.setModal(true);
    telluriumDialog.exec();
}

void TableSection::on_btnIodine_clicked()
{
    ElementDialog iodineDialog(*PeriodicTable::elements[53],this);
    iodineDialog.setModal(true);
    iodineDialog.exec();
}

void TableSection::on_btnXenon_clicked()
{
    ElementDialog xenonDialog(*PeriodicTable::elements[54],this);
    xenonDialog.setModal(true);
    xenonDialog.exec();
}

void TableSection::on_btnCesium_clicked()
{
    ElementDialog cesiumDialog(*PeriodicTable::elements[55],this);
    cesiumDialog.setModal(true);
    cesiumDialog.exec();
}

void TableSection::on_btnBarium_clicked()
{
    ElementDialog bariumDialog(*PeriodicTable::elements[56],this);
    bariumDialog.setModal(true);
    bariumDialog.exec();
}

void TableSection::on_btnLanthanum_clicked()
{
    ElementDialog lanthanumDialog(*PeriodicTable::elements[57],this);
    lanthanumDialog.setModal(true);
    lanthanumDialog.exec();
}

void TableSection::on_btnCerium_clicked()
{
    ElementDialog ceriumDialog(*PeriodicTable::elements[58],this);
    ceriumDialog.setModal(true);
    ceriumDialog.exec();
}

void TableSection::on_btnPraseodymium_clicked()
{
    ElementDialog praseodymiumDialog(*PeriodicTable::elements[59],this);
    praseodymiumDialog.setModal(true);
    praseodymiumDialog.exec();
}

void TableSection::on_btnNeodymium_clicked()
{
    ElementDialog neodymiumDialog(*PeriodicTable::elements[60],this);
    neodymiumDialog.setModal(true);
    neodymiumDialog.exec();
}

void TableSection::on_btnPromethium_clicked()
{
    ElementDialog promethiumDialog(*PeriodicTable::elements[61],this);
    promethiumDialog.setModal(true);
    promethiumDialog.exec();
}

void TableSection::on_btnSamarium_clicked()
{
    ElementDialog samariumDialog(*PeriodicTable::elements[62],this);
    samariumDialog.setModal(true);
    samariumDialog.exec();
}

void TableSection::on_btnEuropium_clicked()
{
    ElementDialog europiumDialog(*PeriodicTable::elements[63],this);
    europiumDialog.setModal(true);
    europiumDialog.exec();
}

void TableSection::on_btnGadolinium_clicked()
{
    ElementDialog gadoliniumDialog(*PeriodicTable::elements[64],this);
    gadoliniumDialog.setModal(true);
    gadoliniumDialog.exec();
}

void TableSection::on_btnTerbium_clicked()
{
    ElementDialog terbiumDialog(*PeriodicTable::elements[65],this);
    terbiumDialog.setModal(true);
    terbiumDialog.exec();
}

void TableSection::on_btnDysprosium_clicked()
{
    ElementDialog dysprosiumDialog(*PeriodicTable::elements[66],this);
    dysprosiumDialog.setModal(true);
    dysprosiumDialog.exec();
}

void TableSection::on_btnHolmium_clicked()
{
    ElementDialog holmiumDialog(*PeriodicTable::elements[67],this);
    holmiumDialog.setModal(true);
    holmiumDialog.exec();
}

void TableSection::on_btnErbium_clicked()
{
    ElementDialog erbiumDialog(*PeriodicTable::elements[68],this);
    erbiumDialog.setModal(true);
    erbiumDialog.exec();
}

void TableSection::on_btnThulium_clicked()
{
    ElementDialog thuliumDialog(*PeriodicTable::elements[69],this);
    thuliumDialog.setModal(true);
    thuliumDialog.exec();
}

void TableSection::on_btnYtterbium_clicked()
{
    ElementDialog ytterbiumDialog(*PeriodicTable::elements[70],this);
    ytterbiumDialog.setModal(true);
    ytterbiumDialog.exec();
}

void TableSection::on_btnLutetium_clicked()
{
    ElementDialog lutetiumDialog(*PeriodicTable::elements[71],this);
    lutetiumDialog.setModal(true);
    lutetiumDialog.exec();
}

void TableSection::on_btnHafnium_clicked()
{
    ElementDialog hafniumDialog(*PeriodicTable::elements[72],this);
    hafniumDialog.setModal(true);
    hafniumDialog.exec();
}

void TableSection::on_btnTantalum_clicked()
{
    ElementDialog tantalumDialog(*PeriodicTable::elements[73],this);
    tantalumDialog.setModal(true);
    tantalumDialog.exec();
}

void TableSection::on_btnTungsten_clicked()
{
    ElementDialog tungstenDialog(*PeriodicTable::elements[74],this);
    tungstenDialog.setModal(true);
    tungstenDialog.exec();
}

void TableSection::on_btnRhenium_clicked()
{
    ElementDialog rheniumDialog(*PeriodicTable::elements[75],this);
    rheniumDialog.setModal(true);
    rheniumDialog.exec();
}

void TableSection::on_btnOsmium_clicked()
{
    ElementDialog osmiumDialog(*PeriodicTable::elements[76],this);
    osmiumDialog.setModal(true);
    osmiumDialog.exec();
}

void TableSection::on_btnIridium_clicked()
{
    ElementDialog iridiumDialog(*PeriodicTable::elements[77],this);
    iridiumDialog.setModal(true);
    iridiumDialog.exec();
}

void TableSection::on_btnPlatinum_clicked()
{
    ElementDialog platinumDialog(*PeriodicTable::elements[78],this);
    platinumDialog.setModal(true);
    platinumDialog.exec();
}

void TableSection::on_btnGold_clicked()
{
    ElementDialog goldDialog(*PeriodicTable::elements[79],this);
    goldDialog.setModal(true);
    goldDialog.exec();
}

void TableSection::on_btnMercury_clicked()
{
    ElementDialog mercuryDialog(*PeriodicTable::elements[80],this);
    mercuryDialog.setModal(true);
    mercuryDialog.exec();
}

void TableSection::on_btnThallium_clicked()
{
    ElementDialog thalliumDialog(*PeriodicTable::elements[81],this);
    thalliumDialog.setModal(true);
    thalliumDialog.exec();
}

void TableSection::on_btnLead_clicked()
{
    ElementDialog leadDialog(*PeriodicTable::elements[82],this);
    leadDialog.setModal(true);
    leadDialog.exec();
}

void TableSection::on_btnBismuth_clicked()
{
    ElementDialog bismuthDialog(*PeriodicTable::elements[83],this);
    bismuthDialog.setModal(true);
    bismuthDialog.exec();
}

void TableSection::on_btnPolonium_clicked()
{
    ElementDialog poloniumDialog(*PeriodicTable::elements[84],this);
    poloniumDialog.setModal(true);
    poloniumDialog.exec();
}

void TableSection::on_btnAstatine_clicked()
{
    ElementDialog astatineDialog(*PeriodicTable::elements[85],this);
    astatineDialog.setModal(true);
    astatineDialog.exec();
}

void TableSection::on_btnRadon_clicked()
{
    ElementDialog radonDialog(*PeriodicTable::elements[86],this);
    radonDialog.setModal(true);
    radonDialog.exec();
}

void TableSection::on_btnFrancium_clicked()
{
    ElementDialog franciumDialog(*PeriodicTable::elements[87],this);
    franciumDialog.setModal(true);
    franciumDialog.exec();
}

void TableSection::on_btnRadium_clicked()
{
    ElementDialog radiumDialog(*PeriodicTable::elements[88],this);
    radiumDialog.setModal(true);
    radiumDialog.exec();
}

void TableSection::on_btnActinium_clicked()
{
    ElementDialog actiniumDialog(*PeriodicTable::elements[89],this);
    actiniumDialog.setModal(true);
    actiniumDialog.exec();
}

void TableSection::on_btnThorium_clicked()
{
    ElementDialog thoriumDialog(*PeriodicTable::elements[90],this);
    thoriumDialog.setModal(true);
    thoriumDialog.exec();
}

void TableSection::on_btnProtactinium_clicked()
{
    ElementDialog protactiniumDialog(*PeriodicTable::elements[91],this);
    protactiniumDialog.setModal(true);
    protactiniumDialog.exec();
}

void TableSection::on_btnUranium_clicked()
{
    ElementDialog uraniumDialog(*PeriodicTable::elements[92],this);
    uraniumDialog.setModal(true);
    uraniumDialog.exec();
}

void TableSection::on_btnNeptunium_clicked()
{
    ElementDialog neptuniumDialog(*PeriodicTable::elements[93],this);
    neptuniumDialog.setModal(true);
    neptuniumDialog.exec();
}

void TableSection::on_btnPlutonium_clicked()
{
    ElementDialog plutoniumDialog(*PeriodicTable::elements[94],this);
    plutoniumDialog.setModal(true);
    plutoniumDialog.exec();
}

void TableSection::on_btnAmericium_clicked()
{
    ElementDialog americiumDialog(*PeriodicTable::elements[95],this);
    americiumDialog.setModal(true);
    americiumDialog.exec();
}

void TableSection::on_btnCurium_clicked()
{
    ElementDialog curiumDialog(*PeriodicTable::elements[96],this);
    curiumDialog.setModal(true);
    curiumDialog.exec();
}

void TableSection::on_btnBerkelium_clicked()
{
    ElementDialog berkeliumDialog(*PeriodicTable::elements[97],this);
    berkeliumDialog.setModal(true);
    berkeliumDialog.exec();
}

void TableSection::on_btnCalifornium_clicked()
{
    ElementDialog californiumDialog(*PeriodicTable::elements[98],this);
    californiumDialog.setModal(true);
    californiumDialog.exec();
}

void TableSection::on_btnEinsteinium_clicked()
{
    ElementDialog einsteiniumDialog(*PeriodicTable::elements[99],this);
    einsteiniumDialog.setModal(true);
    einsteiniumDialog.exec();
}

void TableSection::on_btnFermium_clicked()
{
    ElementDialog fermiumDialog(*PeriodicTable::elements[100],this);
    fermiumDialog.setModal(true);
    fermiumDialog.exec();
}

void TableSection::on_btnMendelevium_clicked()
{
    ElementDialog mendeleviumDialog(*PeriodicTable::elements[101],this);
    mendeleviumDialog.setModal(true);
    mendeleviumDialog.exec();
}

void TableSection::on_btnNobelium_clicked()
{
    ElementDialog nobeliumDialog(*PeriodicTable::elements[102],this);
    nobeliumDialog.setModal(true);
    nobeliumDialog.exec();
}

void TableSection::on_btnLawrencium_clicked()
{
    ElementDialog lawrenciumDialog(*PeriodicTable::elements[103],this);
    lawrenciumDialog.setModal(true);
    lawrenciumDialog.exec();
}

void TableSection::on_btnRutherfordium_clicked()
{
    ElementDialog rutherfordiumDialog(*PeriodicTable::elements[104],this);
    rutherfordiumDialog.setModal(true);
    rutherfordiumDialog.exec();
}

void TableSection::on_btnDubnium_clicked()
{
    ElementDialog dubniumDialog(*PeriodicTable::elements[105],this);
    dubniumDialog.setModal(true);
    dubniumDialog.exec();
}

void TableSection::on_btnSeaborgium_clicked()
{
    ElementDialog seaborgiumDialog(*PeriodicTable::elements[106],this);
    seaborgiumDialog.setModal(true);
    seaborgiumDialog.exec();
}

void TableSection::on_btnBohrium_clicked()
{
    ElementDialog bohriumDialog(*PeriodicTable::elements[107],this);
    bohriumDialog.setModal(true);
    bohriumDialog.exec();
}

void TableSection::on_btnHassium_clicked()
{
    ElementDialog hassiumDialog(*PeriodicTable::elements[108],this);
    hassiumDialog.setModal(true);
    hassiumDialog.exec();
}

void TableSection::on_btnMeitnerium_clicked()
{
    ElementDialog meitneriumDialog(*PeriodicTable::elements[109],this);
    meitneriumDialog.setModal(true);
    meitneriumDialog.exec();
}

void TableSection::on_btnDarmstadtium_clicked()
{
    ElementDialog darmstadtiumDialog(*PeriodicTable::elements[110],this);
    darmstadtiumDialog.setModal(true);
    darmstadtiumDialog.exec();
}

void TableSection::on_btnRoentgenium_clicked()
{
    ElementDialog roentgeniumDialog(*PeriodicTable::elements[111],this);
    roentgeniumDialog.setModal(true);
    roentgeniumDialog.exec();
}

void TableSection::on_btnCopernicium_clicked()
{
    ElementDialog coperniciumDialog(*PeriodicTable::elements[112],this);
    coperniciumDialog.setModal(true);
    coperniciumDialog.exec();
}

void TableSection::on_btnNihonium_clicked()
{
    ElementDialog nihoniumDialog(*PeriodicTable::elements[113],this);
    nihoniumDialog.setModal(true);
    nihoniumDialog.exec();
}

void TableSection::on_btnFlerovium_clicked()
{
    ElementDialog fleroviumDialog(*PeriodicTable::elements[114],this);
    fleroviumDialog.setModal(true);
    fleroviumDialog.exec();
}

void TableSection::on_btnMoscovium_clicked()
{
    ElementDialog moscoviumDialog(*PeriodicTable::elements[115],this);
    moscoviumDialog.setModal(true);
    moscoviumDialog.exec();
}

void TableSection::on_btnLivermorium_clicked()
{
    ElementDialog livermoriumDialog(*PeriodicTable::elements[116],this);
    livermoriumDialog.setModal(true);
    livermoriumDialog.exec();
}

void TableSection::on_btnTennessine_clicked()
{
    ElementDialog tennessineDialog(*PeriodicTable::elements[117],this);
    tennessineDialog.setModal(true);
    tennessineDialog.exec();
}

void TableSection::on_btnOganesson_clicked()
{
    ElementDialog oganessonDialog(*PeriodicTable::elements[118],this);
    oganessonDialog.setModal(true);
    oganessonDialog.exec();
}
