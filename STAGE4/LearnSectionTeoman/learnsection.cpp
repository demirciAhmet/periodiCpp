#include "learnsection.h"
#include "ui_learnsection.h"
#include <QMessageBox>

LearnSection::LearnSection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LearnSection)
{
    ui->setupUi(this);

    connect(ui->btnElektronegatiflik, SIGNAL(clicked()), this, SLOT(on_btnElektronegatiflik_clicked()));
    connect(ui->btnElementTurleri, SIGNAL(clicked()), this, SLOT(on_btnElementTurleri_clicked()));
    connect(ui->btnElektronIlgisi, SIGNAL(clicked()), this, SLOT(on_btnElektronIlgisi_clicked()));
}

LearnSection::~LearnSection()
{
    delete ui;
}

void LearnSection::on_btnElektronegatiflik_clicked()
{
    QMessageBox::information(this, "Elektronegatiflik", "Elektronegatiflik, bir atomun bağ kurduğu diğer atomlardan elektron çekme yeteneğidir.");
}

void LearnSection::on_btnElementTurleri_clicked()
{
    QString message = "Metallik: Elektron verme eğiliminde olan elementler.\n"
                      "Ametallik: Elektron çekme eğiliminde olan elementler.\n"
                      "Ara Metallik: Metal ve ametaller arasında özellik gösteren elementler.\n"
                      "Soygazlık: Kovalent bağlarla bağlı olan ve genellikle reaktif olmayan elementler.";
    QMessageBox::information(this, "Element Türleri", message);
}

void LearnSection::on_btnElektronIlgisi_clicked()
{
    QMessageBox::information(this, "Elektron İlgisi", "Elektron ilgisi, bir atomun serbest bir elektronu alarak oluşan enerji değişimidir.");
}

void LearnSection::on_btnElektronegatiflik_customContextMenuRequested(const QPoint &pos)
{

}


void LearnSection::on_btnElektronegatiflik_clicked(bool checked)
{

}


void LearnSection::on_btnElementTurleri_clicked(bool checked)
{

}


void LearnSection::on_btnElektronIlgisi_clicked(bool checked)
{

}


void LearnSection::on_btnElektronIlgisi_customContextMenuRequested(const QPoint &pos)
{

}

