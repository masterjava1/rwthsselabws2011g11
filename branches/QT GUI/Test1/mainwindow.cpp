#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    parameterOptionsOpen(false),
    parOpened(false)
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

void MainWindow::on_actionOpenParameterOptions_triggered()
{
    if(!parameterOptionsOpen){
        mParameter = new Parameter(this);
        connect(mParameter,SIGNAL(closeParWindow(ParSet)),this,SLOT(parWindowClosed(ParSet)));
        mParameter->show();
        parameterOptionsOpen = true;
        if (!parOpened)
        {
            parOpened = true;
        }
        else
        {
          // set Text auf die Werte in Main  pointer??
            mParameter->setPsid0(QString("99"));
        }
    }
}


void MainWindow::ExportbuttonClicked()
{
    mExport = new ExportDialog;
    mExport->show();
}

void MainWindow::parWindowClosed(ParSet P){
    mParameter->close();
    parameterOptionsOpen = false;
    ui->psidot0->setText(P.psid);
    ui->theta0->setText(P.theta);
    ui->R->setText(P.R);
    ui->a->setText(P.a);
    ui->m->setText(P.m);
    ui->k->setText(P.k);
    ui->Tolerance->setText(P.rtol);
}




