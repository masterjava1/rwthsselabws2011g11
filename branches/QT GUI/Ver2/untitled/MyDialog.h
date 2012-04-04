#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

class MyDialog : public QDialog
{
    Q_OBJECT

public slots:
    void buttonClicked()
    {
        QString s;
        s = "Hallo";
        this->setWindowTitle(s);
    }
};

#endif // MYDIALOG_H
