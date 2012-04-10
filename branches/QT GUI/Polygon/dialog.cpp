#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::paintEvent(QPaintEvent *e)
{
    QPainterPath path;

    path.moveTo(0, 0);
    path.lineTo(70,100);
    path.lineTo(80,200);

    QPainter painter(this);
    painter.setPen(QPen(QColor(79, 106, 25), 1, Qt::SolidLine,
                        Qt::FlatCap, Qt::MiterJoin));

    painter.drawPath(path);
}
