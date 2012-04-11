#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtGui/QApplication>
#include <QtCore>
#include <QPaintEvent>
#include <QtGui>
#include <QTabWidget>
#include <fstream>
#include <cstdlib>
#include "parameter.h"
#include "exportdialog.h"
#include "parset.h"
#include "ui_mainwindow.h"
#include "exportdialog.h"
#include <iostream>
#include <fstream>
#include <blitz/array.h>
#include <NTL/RR.h>
#include "Odeint.h"
#include "Output.h"
#include "RHS_gyro.h"
#include "StepperDopr853m.h"
#include "write_tec.h"
#include "RuntimeException.h"

using namespace blitz;
using namespace NTL;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void ExportbuttonClicked();
    void parWindowClosed(ParSet P);
    void WindowClosed();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *e);

private:
    Ui::MainWindow *ui;
    Parameter *mParameter;
    bool parameterOptionsOpen;
    bool parOpened;
    ExportDialog *mExport;
    int whichplot;
    int nvar;
    string df;
    RR atol;
    RR rtol;
    RR h1;
    RR hmin;
    RR x1;
    RR x2;
    RR g;
    RR R;
    RR k;
    RR m;
    RR a;
    Array<RR,1> ystart;
    Array<RR,2> tmp;
    Output<StepperDopr853m<RHS_gyro> > out;
    Odeint<StepperDopr853m<RHS_gyro> > ode;
    RHS_gyro d;
private slots:
    void on_actionPositionsClicked_triggered();
    void on_actionDerivativesClicked_triggered();
    void on_actionAnglesClicked_triggered();
    void on_actionSlideTime_triggered();
    void on_actionOpenParameterOptions_triggered();
};

#endif // MAINWINDOW_H
