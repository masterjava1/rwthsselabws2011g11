#include <QFileDialog>
#include <QMessageBox>
#include "parameter.h"
#include "ui_parameter.h"
#include "warningdialog.h"
#include "errordialog.h"
#include "RuntimeException.h"

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

Parameter::Parameter(QString ppsidot0, QString ttheta0, QString RR, QString aa, QString mm, QString kk, QString rtoll,QString cqtoll, QString tt_max)
    : psidot0(ppsidot0), theta0(ttheta0), R(RR), a(aa), m(mm), k(kk), rtol(rtoll), cqtol(cqtoll), t_max(tt_max){}


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
    try{
        bool errorflag=false;
        ParSet PP(ui->psidot0->text(),ui->theta0->text(),ui->R->text(),ui->a->text(),ui->m->text(),
                  ui->k->text(),ui->TolConQual->text(),ui->cqtol->text(), ui->t_max->text());
        if((ui->R->text().toDouble()<0)||(ui->R->text().toDouble()==0)) errorflag=true;
        if((ui->m->text().toDouble()<0)||(ui->m->text().toDouble()==0)) errorflag=true;
        if((ui->a->text().toDouble()<0)||(ui->a->text().toDouble()==0)) errorflag=true;
        if((ui->cqtol->text().toDouble()<0)||(ui->cqtol->text().toDouble()==0)) errorflag=true;
        if((ui->t_max->text().toDouble()<0)||(ui->t_max->text().toDouble()==0)) errorflag=true;
        if(!errorflag) emit(closeParWindow(PP));
        if(errorflag) throw RuntimeException("Invalid value! \n Value<0 or equal to 0.",1);
    }catch(RuntimeException rte){
        QString what=rte.what();
        QMessageBox::information(this, tr("Exception in paremeterwindow"),
                             what);
    }
}

void Parameter::setPar(QString psidot0, QString theta0, QString R, QString a, QString m, QString k, QString TolConQual, QString ConsTol, QString t_max){
    ui->psidot0->setText(psidot0);
    ui->theta0->setText(theta0);
    ui->R->setText(R);
    ui->a->setText(a);
    ui->m->setText(m);
    ui->k->setText(k);
    ui->TolConQual->setText(TolConQual);
    ui->t_max->setText(t_max);
    ui->cqtol->setText(ConsTol);
    if (k == "0.3"){
        ui->Friction->setChecked(true);
    }
}

void Parameter::on_actionCancelButtonClicked_triggered()
{
    emit(closeWindow());
}

void Parameter::on_export_button_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
           tr("Export Parameters"), "",
           tr("Parameters (*.par);;All Files (*)"));
    if (fileName.isEmpty())
            return;
    QFileInfo fileinfo(fileName);
    if(fileinfo.suffix().isEmpty()) fileName += ".par";

        QFile file(fileName);
            if (!file.open(QIODevice::WriteOnly)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
            }
            QDataStream out(&file);
            out<<ui->psidot0->text() << ui->theta0->text() << ui->R->text() << ui->a->text() << ui->m->text() <<
                    ui->k->text() << ui->TolConQual->text() << ui->cqtol->text()<< ui->t_max->text();
}

void Parameter::on_import_button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
            tr("Import Parameters"), "",
            tr("Parameters (*.par);;All Files (*)"));

      if (fileName.isEmpty())
            return;
        else {

            QFile file(fileName);

            if (!file.open(QIODevice::ReadOnly)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
            }

            QString psidot0, theta0, R, a, m, k, TolConQual,consqtol, t_max;

            QDataStream in(&file);
            in >> psidot0 >> theta0 >> R >> a >> m >> k >> TolConQual >> t_max;
            setPar(psidot0,theta0,R,a,m,k,TolConQual,consqtol,t_max);
      }
}

void Parameter::closeEvent(QCloseEvent* event){
    emit(closeWindow());
}
