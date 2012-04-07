#ifndef PARAMETEROPTIONS_H
#define PARAMETEROPTIONS_H

#include <QDialog>
#include "parset.h"

namespace Ui {
    class ParameterOptions;
}

class ParameterOptions : public QDialog {
    Q_OBJECT
public:
    ParameterOptions(QWidget *parent = 0);
    ~ParameterOptions();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ParameterOptions *ui;

private slots:
    void on_actionCloseButtonClicked_triggered();

signals:
    void closeParWindow(ParSet P);
};

#endif // PARAMETEROPTIONS_H
