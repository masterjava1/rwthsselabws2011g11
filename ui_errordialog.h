/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created: Thu Apr 12 18:33:15 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ErrorDialog
{
public:
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox_2;

    void setupUi(QDialog *ErrorDialog)
    {
        if (ErrorDialog->objectName().isEmpty())
            ErrorDialog->setObjectName(QString::fromUtf8("ErrorDialog"));
        ErrorDialog->resize(309, 120);
        ErrorDialog->setMinimumSize(QSize(309, 120));
        ErrorDialog->setMaximumSize(QSize(309, 120));
        plainTextEdit = new QPlainTextEdit(ErrorDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 10, 211, 101));
        buttonBox_2 = new QDialogButtonBox(ErrorDialog);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(220, 40, 81, 301));
        buttonBox_2->setOrientation(Qt::Vertical);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Ok);

        retranslateUi(ErrorDialog);
        QObject::connect(buttonBox_2, SIGNAL(accepted()), ErrorDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorDialog)
    {
        ErrorDialog->setWindowTitle(QApplication::translate("ErrorDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("ErrorDialog", "Error:\n"
"R, a and m must be greater than zero! Please change those values!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ErrorDialog: public Ui_ErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
