#include <QtGui/QApplication>
#include "mainwindow.h"
#include "MyDialog.h"
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MyDialog dialog;
  layout = new QVBoxLayout;

    MainWindow w;
    w.show();

    viewparameter_button->connect(viewparameter_button.get(),SIGNAL(clicked()),dialog.get(),SLOT(buttonClicked()));
    layout->addWidget(viewparameter_button.get());

    dialog->setGeometry(0,0,300,100);
    dialog->setWindowTitle("Parameters");
    dialog->setLayout(layout.get());
    dialog->show;
    
    return a.exec();
}
