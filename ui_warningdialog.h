/********************************************************************************
** Form generated from reading UI file 'warningdialog.ui'
**
** Created: Thu Apr 12 18:33:15 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGDIALOG_H
#define UI_WARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_WarningDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *WarningDialog)
    {
        if (WarningDialog->objectName().isEmpty())
            WarningDialog->setObjectName(QString::fromUtf8("WarningDialog"));
        WarningDialog->resize(309, 120);
        WarningDialog->setMinimumSize(QSize(309, 120));
        WarningDialog->setMaximumSize(QSize(309, 120));
        buttonBox = new QDialogButtonBox(WarningDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 40, 81, 301));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        plainTextEdit = new QPlainTextEdit(WarningDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 10, 211, 101));

        retranslateUi(WarningDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WarningDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WarningDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WarningDialog);
    } // setupUi

    void retranslateUi(QDialog *WarningDialog)
    {
        WarningDialog->setWindowTitle(QApplication::translate("WarningDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("WarningDialog", "Warning:\n"
"Either psidot0 or theta0 are zero. Those values will not lead to useful results!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WarningDialog: public Ui_WarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGDIALOG_H
