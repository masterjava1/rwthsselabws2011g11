#include "mydialog.h"
#include "ui_mydialog.h"


MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    ui->k->setEnabled(false);
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::changeEvent(QEvent *e)
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

void MyDialog::FrictionCheck()
{
    if (ui->k->isEnabled())
    ui->k->setEnabled(false);
    else
    ui->k->setEnabled(true);

}

void MyDialog::ParameterConfirm()
{
    double psidot0 = abs((ui->psidot0->text()).toDouble());
    double theta0 = abs((ui->theta0->text()).toDouble());
    double R = (ui->R->text()).toDouble();
    double a = (ui->a->text()).toDouble();
    double m = (ui->m->text()).toDouble();
    double k =(ui->k->text()).toDouble();
    double TolConQual = (ui->TolConQual->text()).toDouble();
    delete this;
    ui->psidot0->setText(QString("%1").arg(psidot0));
    ui->theta0->setText(QString("%1").arg(theta0));
    ui->R->setText(QString("%1").arg(R));
    ui->a->setText(QString("%1").arg(a));
    ui->m->setText(QString("%1").arg(m));
    ui->k->setText(QString("%1").arg(k));
    ui->TolConQual->setText(QString("%1").arg(TolConQual));
}


