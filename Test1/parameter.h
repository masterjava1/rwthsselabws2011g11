#ifndef PARAMETER_H
#define PARAMETER_H

#include <QDialog>

namespace Ui {
    class Parameter;
}

class Parameter : public QDialog {
    Q_OBJECT
public:
    Parameter(QWidget *parent = 0);
    ~Parameter();

public slots:
    void FrictionCheck();
    double Submit();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Parameter *ui;
};

#endif // PARAMETER_H



