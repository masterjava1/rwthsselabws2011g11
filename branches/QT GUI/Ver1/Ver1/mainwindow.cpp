#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::FrictionChange()
{
    if (ui->k->isEnabled())
    ui->k->setEnabled(false);
    else
    ui->k->setEnabled(true);
}

