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
    void setPsid0(QString s);

public slots:
    void FrictionCheck();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Parameter *ui;

private slots:
    void on_actionSetButtonClicked_triggered();

signals:
    void closeParWindow(ParSet P);

};

#endif // PARAMETER_H



