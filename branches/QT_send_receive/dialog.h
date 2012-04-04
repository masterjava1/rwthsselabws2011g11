#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dialog *ui;

signals:
    void textInserted(QString ss);
    void closeW();

private slots:
    void on_actionCloseTriggered_triggered();
    void on_actionSendText_triggered();
};

#endif // DIALOG_H
