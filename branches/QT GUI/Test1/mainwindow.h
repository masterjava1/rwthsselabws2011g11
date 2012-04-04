#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "parameter.h"
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
            void ParameterbuttonClicked();
            void ExportbuttonClicked();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    Parameter *mParameter;
    ExportDialog *mExport;
};

#endif // MAINWINDOW_H
