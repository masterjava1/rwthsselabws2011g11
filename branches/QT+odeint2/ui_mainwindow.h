/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Apr 13 00:01:42 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenParameterOptions;
    QAction *actionSlideTime;
    QAction *actionChangeVView;
    QWidget *centralWidget;
    QPushButton *changeparameter_button;
    QPushButton *Simulate_button;
    QPushButton *Import_button;
    QPushButton *Export_button;
    QPushButton *Tecplot_button;
    QFrame *plottingframe;
    QSpinBox *spinBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_13;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_20;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *psidot0_text;
    QLabel *theta0_text;
    QVBoxLayout *verticalLayout_4;
    QLabel *psidot0;
    QLabel *theta0;
    QVBoxLayout *verticalLayout_5;
    QLabel *R_text;
    QLabel *a_text;
    QVBoxLayout *verticalLayout_6;
    QLabel *R;
    QLabel *a;
    QVBoxLayout *verticalLayout_7;
    QLabel *m_text;
    QLabel *k_text;
    QVBoxLayout *verticalLayout_8;
    QLabel *m;
    QLabel *k;
    QVBoxLayout *verticalLayout_9;
    QLabel *Tolerance_text;
    QLabel *t_max_text;
    QVBoxLayout *verticalLayout_10;
    QLabel *Tolerance;
    QLabel *t_max;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_cqtol;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_12;
    QLabel *display_cqtol;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(630, 535);
        MainWindow->setMinimumSize(QSize(630, 535));
        MainWindow->setMaximumSize(QSize(630, 535));
        actionOpenParameterOptions = new QAction(MainWindow);
        actionOpenParameterOptions->setObjectName(QString::fromUtf8("actionOpenParameterOptions"));
        actionSlideTime = new QAction(MainWindow);
        actionSlideTime->setObjectName(QString::fromUtf8("actionSlideTime"));
        actionChangeVView = new QAction(MainWindow);
        actionChangeVView->setObjectName(QString::fromUtf8("actionChangeVView"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        changeparameter_button = new QPushButton(centralWidget);
        changeparameter_button->setObjectName(QString::fromUtf8("changeparameter_button"));
        changeparameter_button->setGeometry(QRect(170, 450, 131, 31));
        Simulate_button = new QPushButton(centralWidget);
        Simulate_button->setObjectName(QString::fromUtf8("Simulate_button"));
        Simulate_button->setGeometry(QRect(20, 450, 121, 71));
        Import_button = new QPushButton(centralWidget);
        Import_button->setObjectName(QString::fromUtf8("Import_button"));
        Import_button->setGeometry(QRect(330, 490, 91, 31));
        Export_button = new QPushButton(centralWidget);
        Export_button->setObjectName(QString::fromUtf8("Export_button"));
        Export_button->setGeometry(QRect(330, 450, 91, 31));
        Tecplot_button = new QPushButton(centralWidget);
        Tecplot_button->setObjectName(QString::fromUtf8("Tecplot_button"));
        Tecplot_button->setGeometry(QRect(170, 490, 131, 31));
        plottingframe = new QFrame(centralWidget);
        plottingframe->setObjectName(QString::fromUtf8("plottingframe"));
        plottingframe->setGeometry(QRect(18, 70, 501, 371));
        plottingframe->setFrameShape(QFrame::StyledPanel);
        plottingframe->setFrameShadow(QFrame::Raised);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(470, 450, 51, 31));
        spinBox->setMinimum(1);
        spinBox->setMaximum(9);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(528, 90, 31, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(558, 90, 63, 351));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_2->addWidget(label_13);

        label_19 = new QLabel(verticalLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_2->addWidget(label_19);

        label_18 = new QLabel(verticalLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_2->addWidget(label_18);

        label_20 = new QLabel(verticalLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_2->addWidget(label_20);

        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_2->addWidget(label_17);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_2->addWidget(label_16);

        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_2->addWidget(label_15);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_2->addWidget(label_14);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_2->addWidget(label_12);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 611, 52));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        psidot0_text = new QLabel(horizontalLayoutWidget);
        psidot0_text->setObjectName(QString::fromUtf8("psidot0_text"));

        verticalLayout_3->addWidget(psidot0_text);

        theta0_text = new QLabel(horizontalLayoutWidget);
        theta0_text->setObjectName(QString::fromUtf8("theta0_text"));

        verticalLayout_3->addWidget(theta0_text);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        psidot0 = new QLabel(horizontalLayoutWidget);
        psidot0->setObjectName(QString::fromUtf8("psidot0"));

        verticalLayout_4->addWidget(psidot0);

        theta0 = new QLabel(horizontalLayoutWidget);
        theta0->setObjectName(QString::fromUtf8("theta0"));

        verticalLayout_4->addWidget(theta0);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        R_text = new QLabel(horizontalLayoutWidget);
        R_text->setObjectName(QString::fromUtf8("R_text"));

        verticalLayout_5->addWidget(R_text);

        a_text = new QLabel(horizontalLayoutWidget);
        a_text->setObjectName(QString::fromUtf8("a_text"));

        verticalLayout_5->addWidget(a_text);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        R = new QLabel(horizontalLayoutWidget);
        R->setObjectName(QString::fromUtf8("R"));

        verticalLayout_6->addWidget(R);

        a = new QLabel(horizontalLayoutWidget);
        a->setObjectName(QString::fromUtf8("a"));

        verticalLayout_6->addWidget(a);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        m_text = new QLabel(horizontalLayoutWidget);
        m_text->setObjectName(QString::fromUtf8("m_text"));

        verticalLayout_7->addWidget(m_text);

        k_text = new QLabel(horizontalLayoutWidget);
        k_text->setObjectName(QString::fromUtf8("k_text"));

        verticalLayout_7->addWidget(k_text);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        m = new QLabel(horizontalLayoutWidget);
        m->setObjectName(QString::fromUtf8("m"));

        verticalLayout_8->addWidget(m);

        k = new QLabel(horizontalLayoutWidget);
        k->setObjectName(QString::fromUtf8("k"));

        verticalLayout_8->addWidget(k);


        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        Tolerance_text = new QLabel(horizontalLayoutWidget);
        Tolerance_text->setObjectName(QString::fromUtf8("Tolerance_text"));

        verticalLayout_9->addWidget(Tolerance_text);

        t_max_text = new QLabel(horizontalLayoutWidget);
        t_max_text->setObjectName(QString::fromUtf8("t_max_text"));

        verticalLayout_9->addWidget(t_max_text);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        Tolerance = new QLabel(horizontalLayoutWidget);
        Tolerance->setObjectName(QString::fromUtf8("Tolerance"));

        verticalLayout_10->addWidget(Tolerance);

        t_max = new QLabel(horizontalLayoutWidget);
        t_max->setObjectName(QString::fromUtf8("t_max"));

        verticalLayout_10->addWidget(t_max);


        horizontalLayout->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_cqtol = new QLabel(horizontalLayoutWidget);
        label_cqtol->setObjectName(QString::fromUtf8("label_cqtol"));

        verticalLayout_11->addWidget(label_cqtol);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        display_cqtol = new QLabel(horizontalLayoutWidget);
        display_cqtol->setObjectName(QString::fromUtf8("display_cqtol"));

        verticalLayout_12->addWidget(display_cqtol);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_12);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(changeparameter_button, SIGNAL(clicked()), actionOpenParameterOptions, SLOT(trigger()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), actionChangeVView, SLOT(trigger()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpenParameterOptions->setText(QApplication::translate("MainWindow", "openParameterOptions", 0, QApplication::UnicodeUTF8));
        actionSlideTime->setText(QApplication::translate("MainWindow", "SlideTime", 0, QApplication::UnicodeUTF8));
        actionChangeVView->setText(QApplication::translate("MainWindow", "changeVView", 0, QApplication::UnicodeUTF8));
        changeparameter_button->setText(QApplication::translate("MainWindow", "Change Parameter", 0, QApplication::UnicodeUTF8));
        Simulate_button->setText(QApplication::translate("MainWindow", "Simulate", 0, QApplication::UnicodeUTF8));
        Import_button->setText(QApplication::translate("MainWindow", "Import Data", 0, QApplication::UnicodeUTF8));
        Export_button->setText(QApplication::translate("MainWindow", "Export Data", 0, QApplication::UnicodeUTF8));
        Tecplot_button->setText(QApplication::translate("MainWindow", "Tecplot", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "theta dot", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "phi dot", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "psi dot", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "vx", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "vy", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "theta", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "phi", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "psi", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "x", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "y", 0, QApplication::UnicodeUTF8));
        psidot0_text->setText(QApplication::translate("MainWindow", "psidot0 = ", 0, QApplication::UnicodeUTF8));
        theta0_text->setText(QApplication::translate("MainWindow", "theta0 = ", 0, QApplication::UnicodeUTF8));
        psidot0->setText(QString());
        theta0->setText(QString());
        R_text->setText(QApplication::translate("MainWindow", "R = ", 0, QApplication::UnicodeUTF8));
        a_text->setText(QApplication::translate("MainWindow", "a = ", 0, QApplication::UnicodeUTF8));
        R->setText(QString());
        a->setText(QString());
        m_text->setText(QApplication::translate("MainWindow", "m = ", 0, QApplication::UnicodeUTF8));
        k_text->setText(QApplication::translate("MainWindow", "k = ", 0, QApplication::UnicodeUTF8));
        m->setText(QString());
        k->setText(QString());
        Tolerance_text->setText(QApplication::translate("MainWindow", "Tolerance = ", 0, QApplication::UnicodeUTF8));
        t_max_text->setText(QApplication::translate("MainWindow", "t_max = ", 0, QApplication::UnicodeUTF8));
        Tolerance->setText(QString());
        t_max->setText(QString());
        label_cqtol->setText(QApplication::translate("MainWindow", "cq tol =", 0, QApplication::UnicodeUTF8));
        display_cqtol->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
