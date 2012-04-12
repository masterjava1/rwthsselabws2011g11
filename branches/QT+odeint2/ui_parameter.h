/********************************************************************************
** Form generated from reading UI file 'parameter.ui'
**
** Created: Thu Apr 12 23:57:42 2012
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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Parameter
{
public:
    QAction *actionSetButtonClicked;
    QAction *actionCancelButtonClicked;
    QPushButton *export_button;
    QCheckBox *Friction;
    QPushButton *import_button;
    QPushButton *Submit;
    QPushButton *Cancel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *psidot0;
    QLineEdit *theta0;
    QLineEdit *R;
    QLineEdit *a;
    QLineEdit *m;
    QLineEdit *k;
    QLineEdit *TolConQual;
    QLineEdit *cqtol;
    QLineEdit *t_max;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *psidot_text;
    QLabel *theta0_text;
    QLabel *R_text;
    QLabel *a_text;
    QLabel *m_text;
    QLabel *k_text;
    QLabel *TolConQual_text;
    QLabel *label;
    QLabel *t_max_text;

    void setupUi(QDialog *Parameter)
    {
        if (Parameter->objectName().isEmpty())
            Parameter->setObjectName(QString::fromUtf8("Parameter"));
        Parameter->resize(370, 410);
        Parameter->setMinimumSize(QSize(370, 410));
        Parameter->setMaximumSize(QSize(370, 410));
        actionSetButtonClicked = new QAction(Parameter);
        actionSetButtonClicked->setObjectName(QString::fromUtf8("actionSetButtonClicked"));
        actionCancelButtonClicked = new QAction(Parameter);
        actionCancelButtonClicked->setObjectName(QString::fromUtf8("actionCancelButtonClicked"));
        export_button = new QPushButton(Parameter);
        export_button->setObjectName(QString::fromUtf8("export_button"));
        export_button->setGeometry(QRect(85, 370, 71, 27));
        Friction = new QCheckBox(Parameter);
        Friction->setObjectName(QString::fromUtf8("Friction"));
        Friction->setGeometry(QRect(30, 0, 91, 22));
        Friction->setChecked(true);
        import_button = new QPushButton(Parameter);
        import_button->setObjectName(QString::fromUtf8("import_button"));
        import_button->setGeometry(QRect(10, 370, 71, 27));
        Submit = new QPushButton(Parameter);
        Submit->setObjectName(QString::fromUtf8("Submit"));
        Submit->setGeometry(QRect(160, 370, 121, 27));
        Cancel = new QPushButton(Parameter);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(290, 370, 71, 27));
        verticalLayoutWidget = new QWidget(Parameter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(170, 30, 161, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        psidot0 = new QLineEdit(verticalLayoutWidget);
        psidot0->setObjectName(QString::fromUtf8("psidot0"));

        verticalLayout->addWidget(psidot0);

        theta0 = new QLineEdit(verticalLayoutWidget);
        theta0->setObjectName(QString::fromUtf8("theta0"));

        verticalLayout->addWidget(theta0);

        R = new QLineEdit(verticalLayoutWidget);
        R->setObjectName(QString::fromUtf8("R"));

        verticalLayout->addWidget(R);

        a = new QLineEdit(verticalLayoutWidget);
        a->setObjectName(QString::fromUtf8("a"));

        verticalLayout->addWidget(a);

        m = new QLineEdit(verticalLayoutWidget);
        m->setObjectName(QString::fromUtf8("m"));

        verticalLayout->addWidget(m);

        k = new QLineEdit(verticalLayoutWidget);
        k->setObjectName(QString::fromUtf8("k"));

        verticalLayout->addWidget(k);

        TolConQual = new QLineEdit(verticalLayoutWidget);
        TolConQual->setObjectName(QString::fromUtf8("TolConQual"));

        verticalLayout->addWidget(TolConQual);

        cqtol = new QLineEdit(verticalLayoutWidget);
        cqtol->setObjectName(QString::fromUtf8("cqtol"));

        verticalLayout->addWidget(cqtol);

        t_max = new QLineEdit(verticalLayoutWidget);
        t_max->setObjectName(QString::fromUtf8("t_max"));

        verticalLayout->addWidget(t_max);

        verticalLayoutWidget_2 = new QWidget(Parameter);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 30, 111, 331));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        psidot_text = new QLabel(verticalLayoutWidget_2);
        psidot_text->setObjectName(QString::fromUtf8("psidot_text"));

        verticalLayout_2->addWidget(psidot_text);

        theta0_text = new QLabel(verticalLayoutWidget_2);
        theta0_text->setObjectName(QString::fromUtf8("theta0_text"));

        verticalLayout_2->addWidget(theta0_text);

        R_text = new QLabel(verticalLayoutWidget_2);
        R_text->setObjectName(QString::fromUtf8("R_text"));

        verticalLayout_2->addWidget(R_text);

        a_text = new QLabel(verticalLayoutWidget_2);
        a_text->setObjectName(QString::fromUtf8("a_text"));

        verticalLayout_2->addWidget(a_text);

        m_text = new QLabel(verticalLayoutWidget_2);
        m_text->setObjectName(QString::fromUtf8("m_text"));

        verticalLayout_2->addWidget(m_text);

        k_text = new QLabel(verticalLayoutWidget_2);
        k_text->setObjectName(QString::fromUtf8("k_text"));

        verticalLayout_2->addWidget(k_text);

        TolConQual_text = new QLabel(verticalLayoutWidget_2);
        TolConQual_text->setObjectName(QString::fromUtf8("TolConQual_text"));

        verticalLayout_2->addWidget(TolConQual_text);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        t_max_text = new QLabel(verticalLayoutWidget_2);
        t_max_text->setObjectName(QString::fromUtf8("t_max_text"));

        verticalLayout_2->addWidget(t_max_text);


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
        export_button->setText(QApplication::translate("Parameter", "Export", 0, QApplication::UnicodeUTF8));
        Friction->setText(QApplication::translate("Parameter", "Friction", 0, QApplication::UnicodeUTF8));
        import_button->setText(QApplication::translate("Parameter", "Import", 0, QApplication::UnicodeUTF8));
        Submit->setText(QApplication::translate("Parameter", "Submit Changes", 0, QApplication::UnicodeUTF8));
        Cancel->setText(QApplication::translate("Parameter", "Cancel", 0, QApplication::UnicodeUTF8));
        psidot0->setText(QApplication::translate("Parameter", "250", 0, QApplication::UnicodeUTF8));
        theta0->setText(QApplication::translate("Parameter", "0.1", 0, QApplication::UnicodeUTF8));
        R->setText(QApplication::translate("Parameter", "2.5", 0, QApplication::UnicodeUTF8));
        a->setText(QApplication::translate("Parameter", "0.5", 0, QApplication::UnicodeUTF8));
        m->setText(QApplication::translate("Parameter", "15", 0, QApplication::UnicodeUTF8));
        k->setText(QApplication::translate("Parameter", "0", 0, QApplication::UnicodeUTF8));
        TolConQual->setText(QApplication::translate("Parameter", "0.00001", 0, QApplication::UnicodeUTF8));
        t_max->setText(QApplication::translate("Parameter", "2.75", 0, QApplication::UnicodeUTF8));
        psidot_text->setText(QApplication::translate("Parameter", "psidot0 [rad/s]", 0, QApplication::UnicodeUTF8));
        theta0_text->setText(QApplication::translate("Parameter", "theta0 [rad]", 0, QApplication::UnicodeUTF8));
        R_text->setText(QApplication::translate("Parameter", "R [cm]", 0, QApplication::UnicodeUTF8));
        a_text->setText(QApplication::translate("Parameter", "a [cm]", 0, QApplication::UnicodeUTF8));
        m_text->setText(QApplication::translate("Parameter", "m [g]", 0, QApplication::UnicodeUTF8));
        k_text->setText(QApplication::translate("Parameter", "k [s/cm]", 0, QApplication::UnicodeUTF8));
        TolConQual_text->setText(QApplication::translate("Parameter", "tolerance", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Parameter", "cq tolerance", 0, QApplication::UnicodeUTF8));
        t_max_text->setText(QApplication::translate("Parameter", "t_max [s]", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Parameter: public Ui_Parameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETER_H
