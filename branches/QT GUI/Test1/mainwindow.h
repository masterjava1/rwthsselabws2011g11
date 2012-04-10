#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "parameter.h"
#include "exportdialog.h"
#include "parset.h"

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

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    Parameter *mParameter;
    bool parameterOptionsOpen;
    bool parOpened;
    ExportDialog *mExport;

private slots:
    void on_actionOpenParameterOptions_triggered();
};

#endif // MAINWINDOW_H
