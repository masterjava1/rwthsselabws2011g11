#ifndef PARAMETERDIALOG_H
#define PARAMETERDIALOG_H

#include <QDialog>

namespace Ui {
    class ParameterDialog;
}

class ParameterDialog : public QDialog {
    Q_OBJECT
public:
    ParameterDialog(QWidget *parent = 0);
    ~ParameterDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ParameterDialog *ui;
};

#endif // PARAMETERDIALOG_H
