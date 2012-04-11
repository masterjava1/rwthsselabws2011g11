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
        connect(mParameter,SIGNAL(closeWindow()),this,SLOT(WindowClosed()));
        mParameter->show();
        parameterOptionsOpen = true;
        if (!parOpened)
        {
            parOpened = true;
        }
        else
        {
            mParameter->setPar(ui->psidot0->text(),ui->theta0->text(),ui->R->text(),ui->a->text(),ui->m->text(),
                               ui->k->text(),ui->Tolerance->text());
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

void MainWindow::WindowClosed()
{
    mParameter->close();
    parameterOptionsOpen = false;
}





void MainWindow::on_actionSlideTime_triggered()
{
    ui->t->setText(QString("%1").arg(ui->t_slider->value()));
}