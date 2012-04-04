/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Apr 4 15:25:17 2012
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
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Angles;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_4;
    QLabel *G_text;
    QLabel *G;
    QLabel *t_text;
    QLabel *t;
    QWidget *Derivatives;
    QGraphicsView *graphicsView_5;
    QGraphicsView *graphicsView_6;
    QGraphicsView *graphicsView_7;
    QGraphicsView *graphicsView_8;
    QLabel *G_text_2;
    QLabel *t_2;
    QLabel *t_text_2;
    QLabel *G_2;
    QWidget *Positions;
    QLabel *t_3;
    QGraphicsView *graphicsView_9;
    QLabel *G_3;
    QGraphicsView *graphicsView_10;
    QGraphicsView *graphicsView_11;
    QGraphicsView *graphicsView_12;
    QLabel *G_text_3;
    QLabel *t_text_3;
    QSlider *t_slider;
    QPushButton *viewparameter_button;
    QPushButton *Simulate_button;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(540, 558);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 511, 441));
        Angles = new QWidget();
        Angles->setObjectName(QString::fromUtf8("Angles"));
        graphicsView_3 = new QGraphicsView(Angles);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(10, 230, 231, 171));
        graphicsView = new QGraphicsView(Angles);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 50, 231, 171));
        graphicsView_2 = new QGraphicsView(Angles);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(250, 50, 231, 171));
        graphicsView_4 = new QGraphicsView(Angles);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(250, 230, 231, 171));
        G_text = new QLabel(Angles);
        G_text->setObjectName(QString::fromUtf8("G_text"));
        G_text->setGeometry(QRect(10, 20, 81, 16));
        G = new QLabel(Angles);
        G->setObjectName(QString::fromUtf8("G"));
        G->setGeometry(QRect(90, 20, 31, 16));
        t_text = new QLabel(Angles);
        t_text->setObjectName(QString::fromUtf8("t_text"));
        t_text->setGeometry(QRect(130, 20, 91, 16));
        t = new QLabel(Angles);
        t->setObjectName(QString::fromUtf8("t"));
        t->setGeometry(QRect(230, 20, 46, 16));
        tabWidget->addTab(Angles, QString());
        Derivatives = new QWidget();
        Derivatives->setObjectName(QString::fromUtf8("Derivatives"));
        graphicsView_5 = new QGraphicsView(Derivatives);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(10, 230, 231, 171));
        graphicsView_6 = new QGraphicsView(Derivatives);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(10, 50, 231, 171));
        graphicsView_7 = new QGraphicsView(Derivatives);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(250, 50, 231, 171));
        graphicsView_8 = new QGraphicsView(Derivatives);
        graphicsView_8->setObjectName(QString::fromUtf8("graphicsView_8"));
        graphicsView_8->setGeometry(QRect(250, 230, 231, 171));
        G_text_2 = new QLabel(Derivatives);
        G_text_2->setObjectName(QString::fromUtf8("G_text_2"));
        G_text_2->setGeometry(QRect(10, 20, 81, 16));
        t_2 = new QLabel(Derivatives);
        t_2->setObjectName(QString::fromUtf8("t_2"));
        t_2->setGeometry(QRect(230, 20, 46, 16));
        t_text_2 = new QLabel(Derivatives);
        t_text_2->setObjectName(QString::fromUtf8("t_text_2"));
        t_text_2->setGeometry(QRect(130, 20, 91, 16));
        G_2 = new QLabel(Derivatives);
        G_2->setObjectName(QString::fromUtf8("G_2"));
        G_2->setGeometry(QRect(90, 20, 31, 16));
        tabWidget->addTab(Derivatives, QString());
        Positions = new QWidget();
        Positions->setObjectName(QString::fromUtf8("Positions"));
        t_3 = new QLabel(Positions);
        t_3->setObjectName(QString::fromUtf8("t_3"));
        t_3->setGeometry(QRect(230, 20, 46, 16));
        graphicsView_9 = new QGraphicsView(Positions);
        graphicsView_9->setObjectName(QString::fromUtf8("graphicsView_9"));
        graphicsView_9->setGeometry(QRect(250, 50, 231, 171));
        G_3 = new QLabel(Positions);
        G_3->setObjectName(QString::fromUtf8("G_3"));
        G_3->setGeometry(QRect(90, 20, 31, 16));
        graphicsView_10 = new QGraphicsView(Positions);
        graphicsView_10->setObjectName(QString::fromUtf8("graphicsView_10"));
        graphicsView_10->setGeometry(QRect(10, 50, 231, 171));
        graphicsView_11 = new QGraphicsView(Positions);
        graphicsView_11->setObjectName(QString::fromUtf8("graphicsView_11"));
        graphicsView_11->setGeometry(QRect(250, 230, 231, 171));
        graphicsView_12 = new QGraphicsView(Positions);
        graphicsView_12->setObjectName(QString::fromUtf8("graphicsView_12"));
        graphicsView_12->setGeometry(QRect(10, 230, 231, 171));
        G_text_3 = new QLabel(Positions);
        G_text_3->setObjectName(QString::fromUtf8("G_text_3"));
        G_text_3->setGeometry(QRect(10, 20, 81, 16));
        t_text_3 = new QLabel(Positions);
        t_text_3->setObjectName(QString::fromUtf8("t_text_3"));
        t_text_3->setGeometry(QRect(130, 20, 91, 16));
        tabWidget->addTab(Positions, QString());
        t_slider = new QSlider(centralWidget);
        t_slider->setObjectName(QString::fromUtf8("t_slider"));
        t_slider->setGeometry(QRect(20, 470, 231, 19));
        t_slider->setOrientation(Qt::Horizontal);
        viewparameter_button = new QPushButton(centralWidget);
        viewparameter_button->setObjectName(QString::fromUtf8("viewparameter_button"));
        viewparameter_button->setGeometry(QRect(410, 10, 111, 23));
        Simulate_button = new QPushButton(centralWidget);
        Simulate_button->setObjectName(QString::fromUtf8("Simulate_button"));
        Simulate_button->setGeometry(QRect(420, 470, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(viewparameter_button, SIGNAL(clicked()), MainWindow, SLOT(buttonClicked()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        G_text->setText(QApplication::translate("MainWindow", "Current G = ", 0, QApplication::UnicodeUTF8));
        G->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        t_text->setText(QApplication::translate("MainWindow", "Current t [s] = ", 0, QApplication::UnicodeUTF8));
        t->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Angles), QApplication::translate("MainWindow", "Angles", 0, QApplication::UnicodeUTF8));
        G_text_2->setText(QApplication::translate("MainWindow", "Current G = ", 0, QApplication::UnicodeUTF8));
        t_2->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        t_text_2->setText(QApplication::translate("MainWindow", "Current t [s] = ", 0, QApplication::UnicodeUTF8));
        G_2->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Derivatives), QApplication::translate("MainWindow", "Derivatives", 0, QApplication::UnicodeUTF8));
        t_3->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        G_3->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        G_text_3->setText(QApplication::translate("MainWindow", "Current G = ", 0, QApplication::UnicodeUTF8));
        t_text_3->setText(QApplication::translate("MainWindow", "Current t [s] = ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Positions), QApplication::translate("MainWindow", "Positions", 0, QApplication::UnicodeUTF8));
        viewparameter_button->setText(QApplication::translate("MainWindow", "View Parameter", 0, QApplication::UnicodeUTF8));
        Simulate_button->setText(QApplication::translate("MainWindow", "Simulate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
