#ifndef ERRORDIALOG_H
#define ERRORDIALOG_H

#include <QDialog>

namespace Ui {
    class ErrorDialog;
}

class ErrorDialog : public QDialog {
    Q_OBJECT
public:
    ErrorDialog(QWidget *parent = 0);
    ~ErrorDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ErrorDialog *ui;
};

#endif // ERRORDIALOG_H
