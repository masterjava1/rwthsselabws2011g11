#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <NTL/RR.h>
#include <blitz/array.h>
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
#include "Odeint.h"
#include "Output.h"
#include "StepperDopr853m.h"
#include "RHS_gyro.h"
#include "write_tec.h"
#include "qcustomplot.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    ParSet params;
    Output<StepperDopr853m<RHS_gyro> > *out;

public slots:
    void parWindowClosed(ParSet P);
    void WindowClosed();

protected:
    void changeEvent(QEvent *e);
    RR max_RR(Array<RR,1> a, int numele);
    RR min_RR(Array<RR,1> a, int numele);
    double to_double(const RR& a);

private:
    Ui::MainWindow *ui;
    Parameter *mParameter;
    bool parameterOptionsOpen;
    ExportDialog *mExport;
    int windswitch;
    bool simulateon;
    QCustomPlot *plot;
    void redraw_plot(int variable);
    double x;


private slots:
    void on_actionPositionsClicked_triggered();
    void on_actionDerivativesClicked_triggered();
    void on_actionAnglesClicked_triggered();
    void on_actionSlideTime_triggered();
    void on_actionOpenParameterOptions_triggered();
    void on_Simulate_button_clicked();
    void on_Tecplot_button_clicked();
    void on_Export_button_clicked();
};

#endif // MAINWINDOW_H
