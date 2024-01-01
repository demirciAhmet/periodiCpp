#ifndef TABLESECTION_H
#define TABLESECTION_H

#include "forms/ui_tablesection.h"
#include <QButtonGroup>
#include <QPushButton>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class TableSection;
}
QT_END_NAMESPACE

class TableSection : public QWidget
{
    Q_OBJECT

public:
    TableSection(QWidget *parent = nullptr);
    ~TableSection();

private:
    Ui::TableSection *ui;

    // Color maps
    QMap<QString, QString> categoryColorMap;
    QMap<QString, QString> metallicPropertyColorMap;
    QMap<QString, QString> blockColorMap;
    QMap<QString, QString> phaseColorMap;

    // Other helper methods
    void setColorForButton(QPushButton* button, const QString& color);
    void updateButtonProperties();
    void updateLegend();


private slots:

    void on_rbtnCategories_clicked();

    void on_rbtnMetallic_Properties_clicked();

    void on_rbtnBlocks_clicked();

    void on_rbtnPhases_clicked();

    void onElementPropertySelected(int index);

    //element buttons

    void on_btnHydrogen_clicked();

    void on_btnHelium_clicked();

    void on_btnLithium_clicked();

    void on_btnBeryllium_clicked();

    void on_btnBoron_clicked();

    void on_btnCarbon_clicked();

    void on_btnNitrogen_clicked();

    void on_btnOxygen_clicked();

    void on_btnFluorine_clicked();

    void on_btnNeon_clicked();

    void on_btnSodium_clicked();

    void on_btnMagnesium_clicked();

    void on_btnAluminum_clicked();

    void on_btnSilicon_clicked();

    void on_btnPhosphorus_clicked();

    void on_btnSulfur_clicked();

    void on_btnChlorine_clicked();

    void on_btnArgon_clicked();

    void on_btnPotassium_clicked();

    void on_btnCalcium_clicked();

    void on_btnScandium_clicked();

    void on_btnTitanium_clicked();

    void on_btnVanadium_clicked();

    void on_btnChromium_clicked();

    void on_btnManganese_clicked();

    void on_btnIron_clicked();

    void on_btnCobalt_clicked();

    void on_btnNickel_clicked();

    void on_btnCopper_clicked();

    void on_btnZinc_clicked();

    void on_btnGallium_clicked();

    void on_btnGermanium_clicked();

    void on_btnArsenic_clicked();

    void on_btnSelenium_clicked();

    void on_btnBromine_clicked();

    void on_btnKrypton_clicked();

    void on_btnRubidium_clicked();

    void on_btnStrontium_clicked();

    void on_btnYttrium_clicked();

    void on_btnZirconium_clicked();

    void on_btnNiobium_clicked();

    void on_btnMolybdenum_clicked();

    void on_btnTechnetium_clicked();

    void on_btnRuthenium_clicked();

    void on_btnRhodium_clicked();

    void on_btnPalladium_clicked();

    void on_btnSilver_clicked();

    void on_btnCadmium_clicked();

    void on_btnIndium_clicked();

    void on_btnTin_clicked();

    void on_btnAntimony_clicked();

    void on_btnTellurium_clicked();

    void on_btnIodine_clicked();

    void on_btnXenon_clicked();

    void on_btnCesium_clicked();

    void on_btnBarium_clicked();

    void on_btnLanthanum_clicked();

    void on_btnCerium_clicked();

    void on_btnPraseodymium_clicked();

    void on_btnNeodymium_clicked();

    void on_btnPromethium_clicked();

    void on_btnSamarium_clicked();

    void on_btnEuropium_clicked();

    void on_btnGadolinium_clicked();

    void on_btnTerbium_clicked();

    void on_btnDysprosium_clicked();

    void on_btnHolmium_clicked();

    void on_btnErbium_clicked();

    void on_btnThulium_clicked();

    void on_btnYtterbium_clicked();

    void on_btnLutetium_clicked();

    void on_btnHafnium_clicked();

    void on_btnTantalum_clicked();

    void on_btnTungsten_clicked();

    void on_btnRhenium_clicked();

    void on_btnOsmium_clicked();

    void on_btnIridium_clicked();

    void on_btnPlatinum_clicked();

    void on_btnGold_clicked();

    void on_btnMercury_clicked();

    void on_btnThallium_clicked();

    void on_btnLead_clicked();

    void on_btnBismuth_clicked();

    void on_btnPolonium_clicked();

    void on_btnAstatine_clicked();

    void on_btnRadon_clicked();

    void on_btnFrancium_clicked();

    void on_btnRadium_clicked();

    void on_btnActinium_clicked();

    void on_btnThorium_clicked();

    void on_btnProtactinium_clicked();

    void on_btnUranium_clicked();

    void on_btnNeptunium_clicked();

    void on_btnPlutonium_clicked();

    void on_btnAmericium_clicked();

    void on_btnCurium_clicked();

    void on_btnBerkelium_clicked();

    void on_btnCalifornium_clicked();

    void on_btnEinsteinium_clicked();

    void on_btnFermium_clicked();

    void on_btnMendelevium_clicked();

    void on_btnNobelium_clicked();

    void on_btnLawrencium_clicked();

    void on_btnRutherfordium_clicked();

    void on_btnDubnium_clicked();

    void on_btnSeaborgium_clicked();

    void on_btnBohrium_clicked();

    void on_btnHassium_clicked();

    void on_btnMeitnerium_clicked();

    void on_btnDarmstadtium_clicked();

    void on_btnRoentgenium_clicked();

    void on_btnCopernicium_clicked();

    void on_btnNihonium_clicked();

    void on_btnFlerovium_clicked();

    void on_btnMoscovium_clicked();

    void on_btnLivermorium_clicked();

    void on_btnTennessine_clicked();

    void on_btnOganesson_clicked();


};
#endif // TABLESECTION_H
