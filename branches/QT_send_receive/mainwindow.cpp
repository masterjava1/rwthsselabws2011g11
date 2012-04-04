#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    widgetOpen(false)
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

void MainWindow::on_actionOpenWidget_triggered()
{
    if(!widgetOpen){
        myDialog = new Dialog(this);
        myDialog->setFixedSize(myDialog->size());
        QObject::connect(myDialog,SIGNAL(textInserted(QString)),this,SLOT(recieveText(QString)));
        myDialog->show();
        widgetOpen = true;
    }
}

void MainWindow::recieveText(QString ss){
    ui->textEdit->setText(ss);
    widgetOpen = false;
}
