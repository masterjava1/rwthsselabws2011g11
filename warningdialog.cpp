#include "warningdialog.h"
#include "ui_warningdialog.h"

WarningDialog::WarningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WarningDialog)
{
    ui->setupUi(this);
}

WarningDialog::~WarningDialog()
{
    delete ui;
}

void WarningDialog::changeEvent(QEvent *e)
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
