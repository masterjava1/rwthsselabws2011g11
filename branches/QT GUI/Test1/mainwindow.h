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

private slots:
    void on_actionPositionsClicked_triggered();
    void on_actionDerivativesClicked_triggered();
    void on_actionAnglesClicked_triggered();
    void on_actionSlideTime_triggered();
    void on_actionOpenParameterOptions_triggered();
};

#endif // MAINWINDOW_H
