#ifndef LEARNSECTION_H
#define LEARNSECTION_H

#include <QWidget>

namespace Ui {
class LearnSection;
}

class LearnSection : public QWidget
{
    Q_OBJECT

public:
    explicit LearnSection(QWidget *parent = nullptr);
    ~LearnSection();

private slots:
    void on_btnElektronegatiflik_clicked();
    void on_btnElementTurleri_clicked();
    void on_btnElektronIlgisi_clicked();

    void on_btnElektronegatiflik_customContextMenuRequested(const QPoint &pos);

    void on_btnElektronegatiflik_clicked(bool checked);

    void on_btnElementTurleri_clicked(bool checked);

    void on_btnElektronIlgisi_clicked(bool checked);

    void on_btnElektronIlgisi_customContextMenuRequested(const QPoint &pos);

private:
    Ui::LearnSection *ui;
};

#endif // LEARNSECTION_H

