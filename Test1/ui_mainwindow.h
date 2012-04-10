/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Apr 10 21:32:00 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenParameterOptions;
    QAction *actionSlideTime;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Angles;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_4;
    QWidget *Derivatives;
    QGraphicsView *graphicsView_5;
    QGraphicsView *graphicsView_6;
    QGraphicsView *graphicsView_7;
    QGraphicsView *graphicsView_8;
    QWidget *Positions;
    QGraphicsView *graphicsView_9;
    QGraphicsView *graphicsView_10;
    QGraphicsView *graphicsView_11;
    QGraphicsView *graphicsView_12;
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(540, 543);
        MainWindow->setMinimumSize(QSize(540, 543));
        MainWindow->setMaximumSize(QSize(540, 543));
        actionOpenParameterOptions = new QAction(MainWindow);
        actionOpenParameterOptions->setObjectName(QString::fromUtf8("actionOpenParameterOptions"));
        actionSlideTime = new QAction(MainWindow);
        actionSlideTime->setObjectName(QString::fromUtf8("actionSlideTime"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 511, 411));
        Angles = new QWidget();
        Angles->setObjectName(QString::fromUtf8("Angles"));
        graphicsView_3 = new QGraphicsView(Angles);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(10, 190, 231, 171));
        graphicsView = new QGraphicsView(Angles);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 231, 171));
        graphicsView_2 = new QGraphicsView(Angles);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(250, 10, 231, 171));
        graphicsView_4 = new QGraphicsView(Angles);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(250, 190, 231, 171));
        tabWidget->addTab(Angles, QString());
        Derivatives = new QWidget();
        Derivatives->setObjectName(QString::fromUtf8("Derivatives"));
        graphicsView_5 = new QGraphicsView(Derivatives);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(10, 190, 231, 171));
        graphicsView_6 = new QGraphicsView(Derivatives);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(10, 10, 231, 171));
        graphicsView_7 = new QGraphicsView(Derivatives);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(250, 10, 231, 171));
        graphicsView_8 = new QGraphicsView(Derivatives);
        graphicsView_8->setObjectName(QString::fromUtf8("graphicsView_8"));
        graphicsView_8->setGeometry(QRect(250, 190, 231, 171));
        tabWidget->addTab(Derivatives, QString());
        Positions = new QWidget();
        Positions->setObjectName(QString::fromUtf8("Positions"));
        graphicsView_9 = new QGraphicsView(Positions);
        graphicsView_9->setObjectName(QString::fromUtf8("graphicsView_9"));
        graphicsView_9->setGeometry(QRect(250, 10, 231, 171));
        graphicsView_10 = new QGraphicsView(Positions);
        graphicsView_10->setObjectName(QString::fromUtf8("graphicsView_10"));
        graphicsView_10->setGeometry(QRect(10, 10, 231, 171));
        graphicsView_11 = new QGraphicsView(Positions);
        graphicsView_11->setObjectName(QString::fromUtf8("graphicsView_11"));
        graphicsView_11->setGeometry(QRect(250, 190, 231, 171));
        graphicsView_12 = new QGraphicsView(Positions);
        graphicsView_12->setObjectName(QString::fromUtf8("graphicsView_12"));
        graphicsView_12->setGeometry(QRect(10, 190, 231, 171));
        tabWidget->addTab(Positions, QString());
        t_slider = new QSlider(centralWidget);
        t_slider->setObjectName(QString::fromUtf8("t_slider"));
        t_slider->setGeometry(QRect(20, 470, 231, 19));
        t_slider->setMinimum(0);
        t_slider->setMaximum(2200);
        t_slider->setSingleStep(100);
        t_slider->setTracking(true);
        t_slider->setOrientation(Qt::Horizontal);
        changeparameter_button = new QPushButton(centralWidget);
        changeparameter_button->setObjectName(QString::fromUtf8("changeparameter_button"));
        changeparameter_button->setGeometry(QRect(380, 50, 141, 23));
        Simulate_button = new QPushButton(centralWidget);
        Simulate_button->setObjectName(QString::fromUtf8("Simulate_button"));
        Simulate_button->setGeometry(QRect(420, 470, 92, 27));
        Import_button = new QPushButton(centralWidget);
        Import_button->setObjectName(QString::fromUtf8("Import_button"));
        Import_button->setGeometry(QRect(320, 500, 92, 27));
        Export_button = new QPushButton(centralWidget);
        Export_button->setObjectName(QString::fromUtf8("Export_button"));
        Export_button->setGeometry(QRect(420, 500, 92, 27));
        t_text = new QLabel(centralWidget);
        t_text->setObjectName(QString::fromUtf8("t_text"));
        t_text->setGeometry(QRect(140, 500, 101, 16));
        G = new QLabel(centralWidget);
        G->setObjectName(QString::fromUtf8("G"));
        G->setGeometry(QRect(100, 500, 31, 16));
        t = new QLabel(centralWidget);
        t->setObjectName(QString::fromUtf8("t"));
        t->setGeometry(QRect(250, 500, 46, 16));
        G_text = new QLabel(centralWidget);
        G_text->setObjectName(QString::fromUtf8("G_text"));
        G_text->setGeometry(QRect(20, 500, 81, 16));
        m_text = new QLabel(centralWidget);
        m_text->setObjectName(QString::fromUtf8("m_text"));
        m_text->setGeometry(QRect(270, 0, 31, 17));
        k_text = new QLabel(centralWidget);
        k_text->setObjectName(QString::fromUtf8("k_text"));
        k_text->setGeometry(QRect(270, 20, 21, 17));
        Tolerance_text = new QLabel(centralWidget);
        Tolerance_text->setObjectName(QString::fromUtf8("Tolerance_text"));
        Tolerance_text->setGeometry(QRect(400, 0, 81, 17));
        R_text = new QLabel(centralWidget);
        R_text->setObjectName(QString::fromUtf8("R_text"));
        R_text->setGeometry(QRect(160, 0, 31, 17));
        a_text = new QLabel(centralWidget);
        a_text->setObjectName(QString::fromUtf8("a_text"));
        a_text->setGeometry(QRect(160, 20, 31, 17));
        theta0_text = new QLabel(centralWidget);
        theta0_text->setObjectName(QString::fromUtf8("theta0_text"));
        theta0_text->setGeometry(QRect(10, 20, 61, 17));
        psidot0_text = new QLabel(centralWidget);
        psidot0_text->setObjectName(QString::fromUtf8("psidot0_text"));
        psidot0_text->setGeometry(QRect(10, 0, 61, 20));
        psidot0 = new QLabel(centralWidget);
        psidot0->setObjectName(QString::fromUtf8("psidot0"));
        psidot0->setGeometry(QRect(80, 0, 59, 17));
        theta0 = new QLabel(centralWidget);
        theta0->setObjectName(QString::fromUtf8("theta0"));
        theta0->setGeometry(QRect(80, 20, 59, 17));
        R = new QLabel(centralWidget);
        R->setObjectName(QString::fromUtf8("R"));
        R->setGeometry(QRect(190, 0, 59, 17));
        a = new QLabel(centralWidget);
        a->setObjectName(QString::fromUtf8("a"));
        a->setGeometry(QRect(190, 20, 59, 17));
        m = new QLabel(centralWidget);
        m->setObjectName(QString::fromUtf8("m"));
        m->setGeometry(QRect(300, 0, 59, 17));
        k = new QLabel(centralWidget);
        k->setObjectName(QString::fromUtf8("k"));
        k->setGeometry(QRect(300, 20, 59, 17));
        Tolerance = new QLabel(centralWidget);
        Tolerance->setObjectName(QString::fromUtf8("Tolerance"));
        Tolerance->setGeometry(QRect(480, 0, 59, 17));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(Export_button, SIGNAL(clicked()), MainWindow, SLOT(ExportbuttonClicked()));
        QObject::connect(changeparameter_button, SIGNAL(clicked()), actionOpenParameterOptions, SLOT(trigger()));
        QObject::connect(t_slider, SIGNAL(sliderMoved(int)), actionSlideTime, SLOT(trigger()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpenParameterOptions->setText(QApplication::translate("MainWindow", "openParameterOptions", 0, QApplication::UnicodeUTF8));
        actionSlideTime->setText(QApplication::translate("MainWindow", "SlideTime", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Angles), QApplication::translate("MainWindow", "Angles", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Derivatives), QApplication::translate("MainWindow", "Derivatives", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Positions), QApplication::translate("MainWindow", "Positions", 0, QApplication::UnicodeUTF8));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
