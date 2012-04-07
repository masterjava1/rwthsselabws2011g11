#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "parameteroptions.h"
#include "parset.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    ParameterOptions *po_ui;
    bool parameterOptionsOpen;

private slots:
    void on_actionOpenParameterOptions_triggered();

public slots:
    void parWindowClosed(ParSet P);
};

#endif // MAINWINDOW_H
