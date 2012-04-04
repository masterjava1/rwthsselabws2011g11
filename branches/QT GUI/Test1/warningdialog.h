#ifndef WARNINGDIALOG_H
#define WARNINGDIALOG_H

#include <QDialog>

namespace Ui {
    class WarningDialog;
}

class WarningDialog : public QDialog {
    Q_OBJECT
public:
    WarningDialog(QWidget *parent = 0);
    ~WarningDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::WarningDialog *ui;
};

#endif // WARNINGDIALOG_H
