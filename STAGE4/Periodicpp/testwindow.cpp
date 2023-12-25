#include "testwindow.h"

#include "./ui_testwindow.h"

TestWindow::TestWindow(QWidget *parent) : QWindow(parent)
    , ui(new Ui::TestWindow)
{
    ui->setupUi(this);
}

TestWindow::~TestWindow()
{
    delete ui;
}
