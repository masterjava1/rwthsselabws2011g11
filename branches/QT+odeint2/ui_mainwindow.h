/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Apr 12 19:18:28 2012
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
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
    QSlider *t_slider;
    QPushButton *changeparameter_button;
    QPushButton *Simulate_button;
    QPushButton *Import_button;
    QPushButton *Export_button;
    QLabel *t_text;
    QLabel *G;
    QLabel *t;
    QLabel *G_text;
    QLabel *m_text;
    QLabel *k_text;
    QLabel *Tolerance_text;
    QLabel *R_text;
    QLabel *a_text;
    QLabel *theta0_text;
    QLabel *psidot0_text;
    QLabel *psidot0;
    QLabel *theta0;
    QLabel *R;
    QLabel *a;
    QLabel *m;
    QLabel *k;
    QLabel *Tolerance;
    QPushButton *Tecplot_button;
    QLabel *t_max_text;
    QLabel *t_max;
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(630, 535);
        MainWindow->setMinimumSize(QSize(630, 535));
        MainWindow->setMaximumSize(QSize(700, 535));
        actionOpenParameterOptions = new QAction(MainWindow);
        actionOpenParameterOptions->setObjectName(QString::fromUtf8("actionOpenParameterOptions"));
        actionSlideTime = new QAction(MainWindow);
        actionSlideTime->setObjectName(QString::fromUtf8("actionSlideTime"));
        actionChangeVView = new QAction(MainWindow);
        actionChangeVView->setObjectName(QString::fromUtf8("actionChangeVView"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        t_slider = new QSlider(centralWidget);
        t_slider->setObjectName(QString::fromUtf8("t_slider"));
        t_slider->setGeometry(QRect(18, 460, 231, 19));
        t_slider->setMinimum(0);
        t_slider->setMaximum(2200);
        t_slider->setSingleStep(10);
        t_slider->setTracking(true);
        t_slider->setOrientation(Qt::Horizontal);
        changeparameter_button = new QPushButton(centralWidget);
        changeparameter_button->setObjectName(QString::fromUtf8("changeparameter_button"));
        changeparameter_button->setGeometry(QRect(378, 60, 141, 23));
        Simulate_button = new QPushButton(centralWidget);
        Simulate_button->setObjectName(QString::fromUtf8("Simulate_button"));
        Simulate_button->setGeometry(QRect(418, 460, 92, 27));
        Import_button = new QPushButton(centralWidget);
        Import_button->setObjectName(QString::fromUtf8("Import_button"));
        Import_button->setGeometry(QRect(318, 490, 92, 27));
        Export_button = new QPushButton(centralWidget);
        Export_button->setObjectName(QString::fromUtf8("Export_button"));
        Export_button->setGeometry(QRect(418, 490, 92, 27));
        t_text = new QLabel(centralWidget);
        t_text->setObjectName(QString::fromUtf8("t_text"));
        t_text->setGeometry(QRect(138, 490, 101, 16));
        G = new QLabel(centralWidget);
        G->setObjectName(QString::fromUtf8("G"));
        G->setGeometry(QRect(98, 490, 31, 16));
        t = new QLabel(centralWidget);
        t->setObjectName(QString::fromUtf8("t"));
        t->setGeometry(QRect(248, 490, 46, 16));
        G_text = new QLabel(centralWidget);
        G_text->setObjectName(QString::fromUtf8("G_text"));
        G_text->setGeometry(QRect(18, 490, 81, 16));
        m_text = new QLabel(centralWidget);
        m_text->setObjectName(QString::fromUtf8("m_text"));
        m_text->setGeometry(QRect(270, 10, 31, 17));
        k_text = new QLabel(centralWidget);
        k_text->setObjectName(QString::fromUtf8("k_text"));
        k_text->setGeometry(QRect(270, 30, 21, 17));
        Tolerance_text = new QLabel(centralWidget);
        Tolerance_text->setObjectName(QString::fromUtf8("Tolerance_text"));
        Tolerance_text->setGeometry(QRect(368, 10, 81, 17));
        R_text = new QLabel(centralWidget);
        R_text->setObjectName(QString::fromUtf8("R_text"));
        R_text->setGeometry(QRect(160, 10, 31, 17));
        a_text = new QLabel(centralWidget);
        a_text->setObjectName(QString::fromUtf8("a_text"));
        a_text->setGeometry(QRect(160, 30, 31, 17));
        theta0_text = new QLabel(centralWidget);
        theta0_text->setObjectName(QString::fromUtf8("theta0_text"));
        theta0_text->setGeometry(QRect(10, 30, 61, 17));
        psidot0_text = new QLabel(centralWidget);
        psidot0_text->setObjectName(QString::fromUtf8("psidot0_text"));
        psidot0_text->setGeometry(QRect(10, 10, 61, 20));
        psidot0 = new QLabel(centralWidget);
        psidot0->setObjectName(QString::fromUtf8("psidot0"));
        psidot0->setGeometry(QRect(80, 10, 59, 17));
        theta0 = new QLabel(centralWidget);
        theta0->setObjectName(QString::fromUtf8("theta0"));
        theta0->setGeometry(QRect(80, 30, 59, 17));
        R = new QLabel(centralWidget);
        R->setObjectName(QString::fromUtf8("R"));
        R->setGeometry(QRect(190, 10, 59, 17));
        a = new QLabel(centralWidget);
        a->setObjectName(QString::fromUtf8("a"));
        a->setGeometry(QRect(190, 30, 59, 17));
        m = new QLabel(centralWidget);
        m->setObjectName(QString::fromUtf8("m"));
        m->setGeometry(QRect(300, 10, 59, 17));
        k = new QLabel(centralWidget);
        k->setObjectName(QString::fromUtf8("k"));
        k->setGeometry(QRect(298, 30, 61, 20));
        Tolerance = new QLabel(centralWidget);
        Tolerance->setObjectName(QString::fromUtf8("Tolerance"));
        Tolerance->setGeometry(QRect(458, 10, 59, 17));
        Tecplot_button = new QPushButton(centralWidget);
        Tecplot_button->setObjectName(QString::fromUtf8("Tecplot_button"));
        Tecplot_button->setGeometry(QRect(318, 460, 92, 27));
        t_max_text = new QLabel(centralWidget);
        t_max_text->setObjectName(QString::fromUtf8("t_max_text"));
        t_max_text->setGeometry(QRect(398, 30, 61, 17));
        t_max = new QLabel(centralWidget);
        t_max->setObjectName(QString::fromUtf8("t_max"));
        t_max->setGeometry(QRect(458, 30, 59, 17));
        plottingframe = new QFrame(centralWidget);
        plottingframe->setObjectName(QString::fromUtf8("plottingframe"));
        plottingframe->setGeometry(QRect(18, 90, 501, 351));
        plottingframe->setFrameShape(QFrame::StyledPanel);
        plottingframe->setFrameShadow(QFrame::Raised);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(548, 460, 59, 31));
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

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(changeparameter_button, SIGNAL(clicked()), actionOpenParameterOptions, SLOT(trigger()));
        QObject::connect(t_slider, SIGNAL(sliderMoved(int)), actionSlideTime, SLOT(trigger()));
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
        t_text->setText(QApplication::translate("MainWindow", "Current t [ms] = ", 0, QApplication::UnicodeUTF8));
        G->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        t->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        G_text->setText(QApplication::translate("MainWindow", "Current G = ", 0, QApplication::UnicodeUTF8));
        m_text->setText(QApplication::translate("MainWindow", "m = ", 0, QApplication::UnicodeUTF8));
        k_text->setText(QApplication::translate("MainWindow", "k = ", 0, QApplication::UnicodeUTF8));
        Tolerance_text->setText(QApplication::translate("MainWindow", "Tolerance = ", 0, QApplication::UnicodeUTF8));
        R_text->setText(QApplication::translate("MainWindow", "R = ", 0, QApplication::UnicodeUTF8));
        a_text->setText(QApplication::translate("MainWindow", "a = ", 0, QApplication::UnicodeUTF8));
        theta0_text->setText(QApplication::translate("MainWindow", "theta0 = ", 0, QApplication::UnicodeUTF8));
        psidot0_text->setText(QApplication::translate("MainWindow", "psidot0 = ", 0, QApplication::UnicodeUTF8));
        psidot0->setText(QString());
        theta0->setText(QString());
        R->setText(QString());
        a->setText(QString());
        m->setText(QString());
        k->setText(QString());
        Tolerance->setText(QString());
        Tecplot_button->setText(QApplication::translate("MainWindow", "Tecplot", 0, QApplication::UnicodeUTF8));
        t_max_text->setText(QApplication::translate("MainWindow", "t_max = ", 0, QApplication::UnicodeUTF8));
        t_max->setText(QString());
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
