#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_H_1_clicked()
{
    QMessageBox::information(this,"H","This is a element");
}


void MainWindow::on_pushButton_32_clicked()
{

}

