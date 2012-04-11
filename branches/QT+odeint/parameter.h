#ifndef PARAMETER_H
#define PARAMETER_H

#include <QDialog>
#include "parset.h"

namespace Ui {
    class Parameter;
}

class Parameter : public QDialog {
    Q_OBJECT
public:
    Parameter(QWidget *parent = 0);
    ~Parameter();
    Parameter(QString ppsidot0, QString ttheta0, QString RR, QString aa, QString mm, QString kk, QString rtoll);
    QString psidot0, theta0, R, a, m, k, rtol;
    void setPar(QString psidot0, QString theta0, QString R, QString a, QString m, QString k, QString TolConQual);
    void closeEvent(QCloseEvent* event);
public slots:
    void FrictionCheck();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Parameter *ui;

private slots:
    void on_actionCancelButtonClicked_triggered();
    void on_actionSetButtonClicked_triggered();

    void on_export_button_clicked();

    void on_import_button_clicked();

signals:
    void closeParWindow(ParSet P);
    void closeWindow();

};

#endif // PARAMETER_H



