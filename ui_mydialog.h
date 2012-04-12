/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created: Thu Apr 12 06:06:26 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QLabel *psidot_text;
    QLabel *theta0_text;
    QLabel *R_text;
    QLabel *k_text;
    QLabel *a_text;
    QLabel *m_text;
    QLabel *TolConQual_text;
    QCheckBox *Friction;
    QPushButton *export_button;
    QPushButton *import_button;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QLineEdit *TolConQual;
    QLineEdit *a;
    QLineEdit *m;
    QLineEdit *k;
    QLineEdit *R;
    QLineEdit *psidot0;
    QLineEdit *theta0;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QString::fromUtf8("MyDialog"));
        MyDialog->resize(361, 296);
        MyDialog->setMinimumSize(QSize(361, 296));
        MyDialog->setMaximumSize(QSize(361, 296));
        psidot_text = new QLabel(MyDialog);
        psidot_text->setObjectName(QString::fromUtf8("psidot_text"));
        psidot_text->setGeometry(QRect(30, 40, 121, 17));
        theta0_text = new QLabel(MyDialog);
        theta0_text->setObjectName(QString::fromUtf8("theta0_text"));
        theta0_text->setGeometry(QRect(30, 70, 91, 17));
        R_text = new QLabel(MyDialog);
        R_text->setObjectName(QString::fromUtf8("R_text"));
        R_text->setGeometry(QRect(30, 100, 59, 17));
        k_text = new QLabel(MyDialog);
        k_text->setObjectName(QString::fromUtf8("k_text"));
        k_text->setGeometry(QRect(30, 190, 59, 17));
        a_text = new QLabel(MyDialog);
        a_text->setObjectName(QString::fromUtf8("a_text"));
        a_text->setGeometry(QRect(30, 130, 59, 17));
        m_text = new QLabel(MyDialog);
        m_text->setObjectName(QString::fromUtf8("m_text"));
        m_text->setGeometry(QRect(30, 160, 59, 17));
        TolConQual_text = new QLabel(MyDialog);
        TolConQual_text->setObjectName(QString::fromUtf8("TolConQual_text"));
        TolConQual_text->setGeometry(QRect(30, 220, 181, 17));
        Friction = new QCheckBox(MyDialog);
        Friction->setObjectName(QString::fromUtf8("Friction"));
        Friction->setGeometry(QRect(30, 10, 91, 22));
        export_button = new QPushButton(MyDialog);
        export_button->setObjectName(QString::fromUtf8("export_button"));
        export_button->setGeometry(QRect(110, 250, 71, 27));
        import_button = new QPushButton(MyDialog);
        import_button->setObjectName(QString::fromUtf8("import_button"));
        import_button->setGeometry(QRect(30, 250, 71, 27));
        ok_button = new QPushButton(MyDialog);
        ok_button->setObjectName(QString::fromUtf8("ok_button"));
        ok_button->setGeometry(QRect(190, 250, 71, 27));
        cancel_button = new QPushButton(MyDialog);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
        cancel_button->setGeometry(QRect(270, 250, 71, 27));
        TolConQual = new QLineEdit(MyDialog);
        TolConQual->setObjectName(QString::fromUtf8("TolConQual"));
        TolConQual->setGeometry(QRect(220, 210, 113, 27));
        a = new QLineEdit(MyDialog);
        a->setObjectName(QString::fromUtf8("a"));
        a->setGeometry(QRect(220, 120, 113, 27));
        m = new QLineEdit(MyDialog);
        m->setObjectName(QString::fromUtf8("m"));
        m->setGeometry(QRect(220, 150, 113, 27));
        k = new QLineEdit(MyDialog);
        k->setObjectName(QString::fromUtf8("k"));
        k->setGeometry(QRect(220, 180, 113, 27));
        R = new QLineEdit(MyDialog);
        R->setObjectName(QString::fromUtf8("R"));
        R->setGeometry(QRect(220, 90, 113, 27));
        psidot0 = new QLineEdit(MyDialog);
        psidot0->setObjectName(QString::fromUtf8("psidot0"));
        psidot0->setGeometry(QRect(220, 30, 113, 27));
        theta0 = new QLineEdit(MyDialog);
        theta0->setObjectName(QString::fromUtf8("theta0"));
        theta0->setGeometry(QRect(220, 60, 113, 27));

        retranslateUi(MyDialog);
        QObject::connect(Friction, SIGNAL(clicked()), MyDialog, SLOT(FrictionCheck()));

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        psidot_text->setText(QApplication::translate("MyDialog", "psidot0 [rad/s]", 0, QApplication::UnicodeUTF8));
        theta0_text->setText(QApplication::translate("MyDialog", "theta0 [rad]", 0, QApplication::UnicodeUTF8));
        R_text->setText(QApplication::translate("MyDialog", "R [cm]", 0, QApplication::UnicodeUTF8));
        k_text->setText(QApplication::translate("MyDialog", "k [s/cm]", 0, QApplication::UnicodeUTF8));
        a_text->setText(QApplication::translate("MyDialog", "a [cm]", 0, QApplication::UnicodeUTF8));
        m_text->setText(QApplication::translate("MyDialog", "m [g]", 0, QApplication::UnicodeUTF8));
        TolConQual_text->setText(QApplication::translate("MyDialog", "Tolerance Conserved Quality", 0, QApplication::UnicodeUTF8));
        Friction->setText(QApplication::translate("MyDialog", "Friction", 0, QApplication::UnicodeUTF8));
        export_button->setText(QApplication::translate("MyDialog", "Export", 0, QApplication::UnicodeUTF8));
        import_button->setText(QApplication::translate("MyDialog", "Import", 0, QApplication::UnicodeUTF8));
        ok_button->setText(QApplication::translate("MyDialog", "Ok", 0, QApplication::UnicodeUTF8));
        cancel_button->setText(QApplication::translate("MyDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        TolConQual->setText(QApplication::translate("MyDialog", "10^-6", 0, QApplication::UnicodeUTF8));
        a->setText(QApplication::translate("MyDialog", "0.5", 0, QApplication::UnicodeUTF8));
        m->setText(QApplication::translate("MyDialog", "15", 0, QApplication::UnicodeUTF8));
        k->setText(QApplication::translate("MyDialog", "0.3", 0, QApplication::UnicodeUTF8));
        R->setText(QApplication::translate("MyDialog", "2.5", 0, QApplication::UnicodeUTF8));
        psidot0->setText(QApplication::translate("MyDialog", "250", 0, QApplication::UnicodeUTF8));
        theta0->setText(QApplication::translate("MyDialog", "0.1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
