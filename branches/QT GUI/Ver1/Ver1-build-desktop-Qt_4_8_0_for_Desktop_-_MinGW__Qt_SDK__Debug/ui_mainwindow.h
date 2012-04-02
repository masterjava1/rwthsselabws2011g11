/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 2. Apr 14:29:31 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *psidot0;
    QLineEdit *theta0;
    QLineEdit *a;
    QLineEdit *m;
    QLineEdit *Radius;
    QLineEdit *k;
    QLineEdit *TolConQual;
    QLabel *psidot0_text;
    QLabel *theta0_text;
    QLabel *Radius_text;
    QLabel *a_text;
    QLabel *m_text;
    QLabel *k_text;
    QLabel *TolConQual_text;
    QCheckBox *Friction;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(250, 200);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(250, 200));
        MainWindow->setMaximumSize(QSize(250, 200));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        psidot0 = new QLineEdit(centralWidget);
        psidot0->setObjectName(QString::fromUtf8("psidot0"));
        psidot0->setGeometry(QRect(170, 30, 61, 20));
        theta0 = new QLineEdit(centralWidget);
        theta0->setObjectName(QString::fromUtf8("theta0"));
        theta0->setGeometry(QRect(170, 50, 61, 20));
        a = new QLineEdit(centralWidget);
        a->setObjectName(QString::fromUtf8("a"));
        a->setGeometry(QRect(170, 90, 61, 20));
        m = new QLineEdit(centralWidget);
        m->setObjectName(QString::fromUtf8("m"));
        m->setGeometry(QRect(170, 110, 61, 20));
        Radius = new QLineEdit(centralWidget);
        Radius->setObjectName(QString::fromUtf8("Radius"));
        Radius->setGeometry(QRect(170, 70, 61, 20));
        k = new QLineEdit(centralWidget);
        k->setObjectName(QString::fromUtf8("k"));
        k->setEnabled(false);
        k->setGeometry(QRect(170, 130, 61, 20));
        TolConQual = new QLineEdit(centralWidget);
        TolConQual->setObjectName(QString::fromUtf8("TolConQual"));
        TolConQual->setGeometry(QRect(170, 150, 61, 20));
        psidot0_text = new QLabel(centralWidget);
        psidot0_text->setObjectName(QString::fromUtf8("psidot0_text"));
        psidot0_text->setGeometry(QRect(20, 30, 71, 17));
        theta0_text = new QLabel(centralWidget);
        theta0_text->setObjectName(QString::fromUtf8("theta0_text"));
        theta0_text->setGeometry(QRect(20, 50, 71, 17));
        Radius_text = new QLabel(centralWidget);
        Radius_text->setObjectName(QString::fromUtf8("Radius_text"));
        Radius_text->setGeometry(QRect(20, 70, 46, 17));
        a_text = new QLabel(centralWidget);
        a_text->setObjectName(QString::fromUtf8("a_text"));
        a_text->setGeometry(QRect(20, 90, 46, 17));
        m_text = new QLabel(centralWidget);
        m_text->setObjectName(QString::fromUtf8("m_text"));
        m_text->setGeometry(QRect(20, 110, 46, 17));
        k_text = new QLabel(centralWidget);
        k_text->setObjectName(QString::fromUtf8("k_text"));
        k_text->setGeometry(QRect(20, 130, 46, 17));
        TolConQual_text = new QLabel(centralWidget);
        TolConQual_text->setObjectName(QString::fromUtf8("TolConQual_text"));
        TolConQual_text->setGeometry(QRect(20, 150, 141, 17));
        Friction = new QCheckBox(centralWidget);
        Friction->setObjectName(QString::fromUtf8("Friction"));
        Friction->setGeometry(QRect(20, 10, 70, 17));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(Friction, SIGNAL(clicked()), MainWindow, SLOT(FrictionChange()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Parameters", 0, QApplication::UnicodeUTF8));
        psidot0->setText(QApplication::translate("MainWindow", "250", 0, QApplication::UnicodeUTF8));
        theta0->setText(QApplication::translate("MainWindow", "0.1", 0, QApplication::UnicodeUTF8));
        a->setText(QApplication::translate("MainWindow", "0.5", 0, QApplication::UnicodeUTF8));
        m->setText(QApplication::translate("MainWindow", "15", 0, QApplication::UnicodeUTF8));
        Radius->setText(QApplication::translate("MainWindow", "2.5", 0, QApplication::UnicodeUTF8));
        k->setText(QApplication::translate("MainWindow", "0.3", 0, QApplication::UnicodeUTF8));
        TolConQual->setText(QApplication::translate("MainWindow", "10^-6", 0, QApplication::UnicodeUTF8));
        psidot0_text->setText(QApplication::translate("MainWindow", "Psidot0 [rad/s]", 0, QApplication::UnicodeUTF8));
        theta0_text->setText(QApplication::translate("MainWindow", "Tetha0 [rad]", 0, QApplication::UnicodeUTF8));
        Radius_text->setText(QApplication::translate("MainWindow", "R [cm]", 0, QApplication::UnicodeUTF8));
        a_text->setText(QApplication::translate("MainWindow", "a [cm]", 0, QApplication::UnicodeUTF8));
        m_text->setText(QApplication::translate("MainWindow", "m [g]", 0, QApplication::UnicodeUTF8));
        k_text->setText(QApplication::translate("MainWindow", "k [s/cm]", 0, QApplication::UnicodeUTF8));
        TolConQual_text->setText(QApplication::translate("MainWindow", "Tolerance Conserved Quality", 0, QApplication::UnicodeUTF8));
        Friction->setText(QApplication::translate("MainWindow", "Friction", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
