#include "parameter.h"
#include "ui_parameter.h"
#include "warningdialog.h"
#include "errordialog.h"

Parameter::Parameter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Parameter)
{
    ui->setupUi(this);
}

Parameter::~Parameter()
{
    delete ui;
}

Parameter::Parameter(QString ppsidot0, QString ttheta0, QString RR, QString aa, QString mm, QString kk, QString rtoll)
    : psidot0(ppsidot0), theta0(ttheta0), R(RR), a(aa), m(mm), k(kk), rtol(rtoll){}


void Parameter::changeEvent(QEvent *e)
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

void Parameter::FrictionCheck()
{
    if (ui->Friction->isChecked())
    ui->k->setText("0.3");
    else
    ui->k->setText("0");
}


void Parameter::on_actionSetButtonClicked_triggered()
{
    ParSet PP(ui->psidot0->text(),ui->theta0->text(),ui->R->text(),ui->a->text(),ui->m->text(),
              ui->k->text(),ui->TolConQual->text());
    emit(closeParWindow(PP));
}

