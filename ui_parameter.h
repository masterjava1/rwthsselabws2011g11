/********************************************************************************
** Form generated from reading UI file 'parameter.ui'
**
** Created: Thu Apr 12 01:17:56 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETER_H
#define UI_PARAMETER_H

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

class Ui_Parameter
{
public:
    QAction *actionSetButtonClicked;
    QAction *actionCancelButtonClicked;
    QLabel *TolConQual_text;
    QLabel *k_text;
    QLineEdit *R;
    QLineEdit *theta0;
    QPushButton *export_button;
    QLabel *theta0_text;
    QLabel *m_text;
    QLabel *a_text;
    QLabel *R_text;
    QLineEdit *TolConQual;
    QLineEdit *a;
    QCheckBox *Friction;
    QPushButton *import_button;
    QLabel *psidot_text;
    QLineEdit *psidot0;
    QLineEdit *k;
    QLineEdit *m;
    QPushButton *Submit;
    QPushButton *Cancel;
    QLabel *t_max_text;
    QLineEdit *t_max;

    void setupUi(QDialog *Parameter)
    {
        if (Parameter->objectName().isEmpty())
            Parameter->setObjectName(QString::fromUtf8("Parameter"));
        Parameter->resize(363, 319);
        Parameter->setMinimumSize(QSize(363, 319));
        Parameter->setMaximumSize(QSize(363, 319));
        actionSetButtonClicked = new QAction(Parameter);
        actionSetButtonClicked->setObjectName(QString::fromUtf8("actionSetButtonClicked"));
        actionCancelButtonClicked = new QAction(Parameter);
        actionCancelButtonClicked->setObjectName(QString::fromUtf8("actionCancelButtonClicked"));
        TolConQual_text = new QLabel(Parameter);
        TolConQual_text->setObjectName(QString::fromUtf8("TolConQual_text"));
        TolConQual_text->setGeometry(QRect(20, 220, 181, 17));
        k_text = new QLabel(Parameter);
        k_text->setObjectName(QString::fromUtf8("k_text"));
        k_text->setGeometry(QRect(20, 190, 59, 17));
        R = new QLineEdit(Parameter);
        R->setObjectName(QString::fromUtf8("R"));
        R->setGeometry(QRect(210, 90, 113, 27));
        theta0 = new QLineEdit(Parameter);
        theta0->setObjectName(QString::fromUtf8("theta0"));
        theta0->setGeometry(QRect(210, 60, 113, 27));
        export_button = new QPushButton(Parameter);
        export_button->setObjectName(QString::fromUtf8("export_button"));
        export_button->setGeometry(QRect(75, 280, 71, 27));
        theta0_text = new QLabel(Parameter);
        theta0_text->setObjectName(QString::fromUtf8("theta0_text"));
        theta0_text->setGeometry(QRect(20, 70, 91, 17));
        m_text = new QLabel(Parameter);
        m_text->setObjectName(QString::fromUtf8("m_text"));
        m_text->setGeometry(QRect(20, 160, 59, 17));
        a_text = new QLabel(Parameter);
        a_text->setObjectName(QString::fromUtf8("a_text"));
        a_text->setGeometry(QRect(20, 130, 59, 17));
        R_text = new QLabel(Parameter);
        R_text->setObjectName(QString::fromUtf8("R_text"));
        R_text->setGeometry(QRect(20, 100, 59, 17));
        TolConQual = new QLineEdit(Parameter);
        TolConQual->setObjectName(QString::fromUtf8("TolConQual"));
        TolConQual->setGeometry(QRect(210, 210, 113, 27));
        a = new QLineEdit(Parameter);
        a->setObjectName(QString::fromUtf8("a"));
        a->setGeometry(QRect(210, 120, 113, 27));
        Friction = new QCheckBox(Parameter);
        Friction->setObjectName(QString::fromUtf8("Friction"));
        Friction->setGeometry(QRect(20, 10, 91, 22));
        import_button = new QPushButton(Parameter);
        import_button->setObjectName(QString::fromUtf8("import_button"));
        import_button->setGeometry(QRect(0, 280, 71, 27));
        psidot_text = new QLabel(Parameter);
        psidot_text->setObjectName(QString::fromUtf8("psidot_text"));
        psidot_text->setGeometry(QRect(20, 40, 121, 17));
        psidot0 = new QLineEdit(Parameter);
        psidot0->setObjectName(QString::fromUtf8("psidot0"));
        psidot0->setGeometry(QRect(210, 30, 113, 27));
        k = new QLineEdit(Parameter);
        k->setObjectName(QString::fromUtf8("k"));
        k->setGeometry(QRect(210, 180, 113, 27));
        m = new QLineEdit(Parameter);
        m->setObjectName(QString::fromUtf8("m"));
        m->setGeometry(QRect(210, 150, 113, 27));
        Submit = new QPushButton(Parameter);
        Submit->setObjectName(QString::fromUtf8("Submit"));
        Submit->setGeometry(QRect(150, 280, 121, 27));
        Cancel = new QPushButton(Parameter);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(280, 280, 71, 27));
        t_max_text = new QLabel(Parameter);
        t_max_text->setObjectName(QString::fromUtf8("t_max_text"));
        t_max_text->setGeometry(QRect(20, 240, 81, 17));
        t_max = new QLineEdit(Parameter);
        t_max->setObjectName(QString::fromUtf8("t_max"));
        t_max->setGeometry(QRect(210, 240, 113, 27));

        retranslateUi(Parameter);
        QObject::connect(Friction, SIGNAL(clicked()), Parameter, SLOT(FrictionCheck()));
        QObject::connect(Submit, SIGNAL(clicked()), actionSetButtonClicked, SLOT(trigger()));
        QObject::connect(Cancel, SIGNAL(clicked()), actionCancelButtonClicked, SLOT(trigger()));

        QMetaObject::connectSlotsByName(Parameter);
    } // setupUi

    void retranslateUi(QDialog *Parameter)
    {
        Parameter->setWindowTitle(QApplication::translate("Parameter", "Dialog", 0, QApplication::UnicodeUTF8));
        actionSetButtonClicked->setText(QApplication::translate("Parameter", "SetButtonClicked", 0, QApplication::UnicodeUTF8));
        actionCancelButtonClicked->setText(QApplication::translate("Parameter", "CancelButtonClicked", 0, QApplication::UnicodeUTF8));
        TolConQual_text->setText(QApplication::translate("Parameter", "Tolerance Conserved Quality", 0, QApplication::UnicodeUTF8));
        k_text->setText(QApplication::translate("Parameter", "k [s/cm]", 0, QApplication::UnicodeUTF8));
        R->setText(QApplication::translate("Parameter", "2.5", 0, QApplication::UnicodeUTF8));
        theta0->setText(QApplication::translate("Parameter", "0.1", 0, QApplication::UnicodeUTF8));
        export_button->setText(QApplication::translate("Parameter", "Export", 0, QApplication::UnicodeUTF8));
        theta0_text->setText(QApplication::translate("Parameter", "theta0 [rad]", 0, QApplication::UnicodeUTF8));
        m_text->setText(QApplication::translate("Parameter", "m [g]", 0, QApplication::UnicodeUTF8));
        a_text->setText(QApplication::translate("Parameter", "a [cm]", 0, QApplication::UnicodeUTF8));
        R_text->setText(QApplication::translate("Parameter", "R [cm]", 0, QApplication::UnicodeUTF8));
        TolConQual->setText(QApplication::translate("Parameter", "0.00001", 0, QApplication::UnicodeUTF8));
        a->setText(QApplication::translate("Parameter", "0.5", 0, QApplication::UnicodeUTF8));
        Friction->setText(QApplication::translate("Parameter", "Friction", 0, QApplication::UnicodeUTF8));
        import_button->setText(QApplication::translate("Parameter", "Import", 0, QApplication::UnicodeUTF8));
        psidot_text->setText(QApplication::translate("Parameter", "psidot0 [rad/s]", 0, QApplication::UnicodeUTF8));
        psidot0->setText(QApplication::translate("Parameter", "250", 0, QApplication::UnicodeUTF8));
        k->setText(QApplication::translate("Parameter", "0", 0, QApplication::UnicodeUTF8));
        m->setText(QApplication::translate("Parameter", "15", 0, QApplication::UnicodeUTF8));
        Submit->setText(QApplication::translate("Parameter", "Submit Changes", 0, QApplication::UnicodeUTF8));
        Cancel->setText(QApplication::translate("Parameter", "Cancel", 0, QApplication::UnicodeUTF8));
        t_max_text->setText(QApplication::translate("Parameter", "t_max [s]", 0, QApplication::UnicodeUTF8));
        t_max->setText(QApplication::translate("Parameter", "2.75", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Parameter: public Ui_Parameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETER_H
