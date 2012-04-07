#include "parameteroptions.h"
#include "ui_parameteroptions.h"

ParameterOptions::ParameterOptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ParameterOptions)
{
    ui->setupUi(this);
}

ParameterOptions::~ParameterOptions()
{
    delete ui;
}

void ParameterOptions::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void ParameterOptions::on_actionCloseButtonClicked_triggered()
{
    ParSet PP(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_3->text(),ui->lineEdit_4->text(),ui->lineEdit_5->text(),
              ui->lineEdit_6->text(),ui->lineEdit_7->text(),ui->lineEdit_8->text());
    emit(closeParWindow(PP));
}
