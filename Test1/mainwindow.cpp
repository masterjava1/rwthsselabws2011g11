#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    parameterOptionsOpen(false),
    parOpened(false)
{
    ui->setupUi(this);
    ui->Angles->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_actionOpenParameterOptions_triggered()
{
    if(!parameterOptionsOpen){
        mParameter = new Parameter(this);
        connect(mParameter,SIGNAL(closeParWindow(ParSet)),this,SLOT(parWindowClosed(ParSet)));
        connect(mParameter,SIGNAL(closeWindow()),this,SLOT(WindowClosed()));
        mParameter->show();
        parameterOptionsOpen = true;
        if (!parOpened)
        {
            parOpened = true;
        }
        else
        {
            mParameter->setPar(ui->psidot0->text(),ui->theta0->text(),ui->R->text(),ui->a->text(),ui->m->text(),
                               ui->k->text(),ui->Tolerance->text());
        }
    }
}


void MainWindow::ExportbuttonClicked()
{
    mExport = new ExportDialog;
    mExport->show();
}

void MainWindow::parWindowClosed(ParSet P){
    mParameter->close();
    parameterOptionsOpen = false;
    ui->psidot0->setText(P.psid);
    ui->theta0->setText(P.theta);
    ui->R->setText(P.R);
    ui->a->setText(P.a);
    ui->m->setText(P.m);
    ui->k->setText(P.k);
    ui->Tolerance->setText(P.rtol);
}

void MainWindow::WindowClosed()
{
    mParameter->close();
    parameterOptionsOpen = false;
}

void MainWindow::on_actionSlideTime_triggered()
{
    ui->t->setText(QString("%1").arg(ui->t_slider->value()));
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    // Input "t" "my" "lambda"  "ny"  "xi"  "omikron"  "theta"  "phi"  "psi"  "xc"   "yc"
    double m[11][2];
    m[3][0] = 250;
    m[6][0] =  0.1;
    m[0][1] = 0.0001;
    m[1][1] = -0.01864280005;
    m[2][1] = 13.94658582 ;
    m[3][1] = 235.9482257 ;
    m[4][1] = -0.01751545076;
    m[5][1] = -0.2890792344e-6;
    m[6][1] = 0.09999933409 ;
    m[7][1] = 0.0007080975705;
    m[8][1] = 0.02428656225 ;
    m[9][1] = -0.8892515745e-6;
    m[10][1] = -0.2662271235e-11;
    //Input end



    QPainter painter(this);
    painter.drawRect(10,100,250,150); //1
    painter.drawRect(10,260,250,150); //2
    painter.drawRect(270,100,250,150); //3
    painter.drawRect(270,260,250,150); //4

//Angles ==================================================
    //get min and max values -- val_min; val_max
    double val1_min[] = {min(m[8][]),min(m[7][]),min(m[9][])};
    double val1_max[] = {max(m[8][]),max(m[7][]),max(m[9][])};
    double sum1[] = {0,0,0};

    for (int ii1= 0;ii1<3;ii1++){
        if(val1_min[ii1]>0)
            {sum1[ii1]=0;}
        else{
            if(val1_min[ii1]<0){
            val1_min[ii1] = -val1_min[ii1];
            }
            if(val1_max[ii1]<0){
            val1_max[ii1] = -val1_max[ii1];
            }
            sum1[ii1] = 150/(val1_min[ii1]+val1_max[ii1])*val1_max[ii1];
        }
        painter.drawLine(10,sum1[0]+100,260,sum1[0]+100); //1
        painter.drawLine(270,sum1[1]+100,520,sum1[1]+100); //2
        painter.drawLine(10,sum1[2]+260,260,sum1[2]+260); //3
      //  painter.drawLine(270,sum1[0]+260,520,sum1[0]+260); //4

        if (ii1 == 0){
            path.moveTo(10,100+sum1[0]);
        }
        if (ii1 == 1){
            path.moveTo(270,100+sum1[1]+m[6][0]);
        }
        if (ii1 == 2){
            path.moveTo(10,260+sum1[2]);
        }
        for (int ii2 = 0; ii2<size(m,2);ii2++){
            QPainterPath path;
            path.lineTo(260-m[1][ii2],250-m[7][ii2]);
            painter.drawPath(path);
        }
    }



void MainWindow::on_actionAnglesClicked_triggered()
{
    ui->Angles->setEnabled(false);
    ui->Derivatives->setEnabled(true);
    ui->Positions->setEnabled(true);
    whichplot = 1;
}

void MainWindow::on_actionDerivativesClicked_triggered()
{
    ui->Angles->setEnabled(true);
    ui->Derivatives->setEnabled(false);
    ui->Positions->setEnabled(true);
    whichplot = 2;
}

void MainWindow::on_actionPositionsClicked_triggered()
{
    ui->Angles->setEnabled(true);
    ui->Derivatives->setEnabled(true);
    ui->Positions->setEnabled(false);
    whichplot = 3;
}
