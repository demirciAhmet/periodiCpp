#ifndef TABLESECTION_H
#define TABLESECTION_H

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

private slots:

    void on_Categories_toggled(bool checked);

    void on_Metallic_Properties_toggled(bool checked);

    void on_Blocks_toggled(bool checked);

    void on_Phases_toggled(bool checked);

    void onElementPropertySelected(int index);

    void on_btnHydrogen_clicked();

    void on_btnHelium_clicked();

    void on_btnLithium_clicked();


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
};
#endif // TABLESECTION_H
