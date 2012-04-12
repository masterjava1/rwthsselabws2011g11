#include "parameterdialog.h"
#include "ui_parameterdialog.h"

ParameterDialog::ParameterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ParameterDialog)
{
    ui->setupUi(this);
}

ParameterDialog::~ParameterDialog()
{
    delete ui;
}

void ParameterDialog::changeEvent(QEvent *e)
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
