#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    parameterOptionsOpen(false)
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
        po_ui = new ParameterOptions(this);
        connect(po_ui,SIGNAL(closeParWindow(ParSet)),this,SLOT(parWindowClosed(ParSet)));
        po_ui->show();
        parameterOptionsOpen = true;
    }
}

void MainWindow::parWindowClosed(ParSet P){
    po_ui->close();
    parameterOptionsOpen = false;
    ui->label_5->setText(P.a);
    ui->label_4->setText(P.atol);
    ui->label_2->setText(P.k);
    ui->label_3->setText(P.m);
    ui->label_7->setText(P.psid);
    ui->label_6->setText(P.R);
    ui->label_8->setText(P.rtol);
    ui->label->setText(P.theta);
}
