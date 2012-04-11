/********************************************************************************
** Form generated from reading UI file 'exportdialog.ui'
**
** Created: Thu Apr 12 00:49:48 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QPushButton *Cancel_button;
    QPushButton *Ok_button;
    QCheckBox *Binary;
    QCheckBox *Tecplot;
    QCheckBox *Graphic;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName(QString::fromUtf8("ExportDialog"));
        ExportDialog->resize(159, 174);
        ExportDialog->setMinimumSize(QSize(159, 174));
        ExportDialog->setMaximumSize(QSize(159, 174));
        Cancel_button = new QPushButton(ExportDialog);
        Cancel_button->setObjectName(QString::fromUtf8("Cancel_button"));
        Cancel_button->setGeometry(QRect(30, 130, 92, 27));
        Ok_button = new QPushButton(ExportDialog);
        Ok_button->setObjectName(QString::fromUtf8("Ok_button"));
        Ok_button->setGeometry(QRect(30, 100, 92, 27));
        Binary = new QCheckBox(ExportDialog);
        Binary->setObjectName(QString::fromUtf8("Binary"));
        Binary->setGeometry(QRect(10, 10, 161, 22));
        Tecplot = new QCheckBox(ExportDialog);
        Tecplot->setObjectName(QString::fromUtf8("Tecplot"));
        Tecplot->setGeometry(QRect(10, 40, 151, 22));
        Graphic = new QCheckBox(ExportDialog);
        Graphic->setObjectName(QString::fromUtf8("Graphic"));
        Graphic->setGeometry(QRect(10, 70, 151, 22));

        retranslateUi(ExportDialog);

        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QApplication::translate("ExportDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        Cancel_button->setText(QApplication::translate("ExportDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        Ok_button->setText(QApplication::translate("ExportDialog", "Ok", 0, QApplication::UnicodeUTF8));
        Binary->setText(QApplication::translate("ExportDialog", "Export as Binary", 0, QApplication::UnicodeUTF8));
        Tecplot->setText(QApplication::translate("ExportDialog", "Export as Tecplot", 0, QApplication::UnicodeUTF8));
        Graphic->setText(QApplication::translate("ExportDialog", "Export as Graphic", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOG_H
