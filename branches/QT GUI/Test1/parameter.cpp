#include "parameter.h"
#include "ui_parameter.h"
#include "warningdialog.h"
#include "errordialog.h"

Parameter::Parameter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Parameter)
{
    ui->setupUi(this);
    ui->k->setEnabled(false);
}

Parameter::~Parameter()
{
    delete ui;
}

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
    if (ui->k->isEnabled())
    ui->k->setEnabled(false);
    else
    ui->k->setEnabled(true);
}
double Parameter::Submit()
{
    double psidot0 = (ui->psidot0->text()).toDouble();
    if (psidot0 < 0)
    {
        psidot0 = -psidot0;
    }
    double theta0 =  (ui->theta0->text()).toDouble();
    if (theta0 < 0)
    {
        theta0 = -theta0;
    }
    double R = (ui->R->text()).toDouble();
    double a = (ui->a->text()).toDouble();
    double m = (ui->m->text()).toDouble();
    double k =(ui->k->text()).toDouble();
    double TolConQual = (ui->TolConQual->text()).toDouble();
    if (TolConQual < 0)
    {
        TolConQual = -TolConQual;
    }
    double vec[] = {psidot0, theta0, R, a, m, k, TolConQual};
    if (psidot0 == 0 || theta0 == 0)
    {
        WarningDialog mWarning(this);
        mWarning.setModal(true);
        mWarning.exec();
    }
    if (R <= 0 || a <= 0 || m <= 0)
    {
        ErrorDialog mError(this);
        mError.setModal(true);
        mError.exec();
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
    }
    else{
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);
    }


    return *vec;
}
