#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "dialog.h"

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
    Dialog *myDialog;
    bool widgetOpen;

private slots:
    void on_actionOpenWidget_triggered();

public slots:
    void recieveText(QString ss);
};

#endif // MAINWINDOW_H
