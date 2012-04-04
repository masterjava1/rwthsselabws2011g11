#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parameter.h"
#include "exportdialog.h"

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

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::ParameterbuttonClicked()
{
    mParameter = new Parameter;
    mParameter->show();
    #define VARIABLES
        double psidot0 = 250;
        double theta0 = 0.1;
        double R = 2.5;
        double a = 0.5;
        double m = 15;
        double k = 0.3;
        double TolConQual = 10^-6;
}


void MainWindow::ExportbuttonClicked()
{
    mExport = new ExportDialog;
    mExport->show();
}
