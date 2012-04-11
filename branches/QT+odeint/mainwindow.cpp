#include "mainwindow.h"

using namespace NTL;
using namespace blitz;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    parameterOptionsOpen(false),
    params("250" ,"0.1" ,"2.5" ,"0.5" , "15", "0", "0.00001")
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
        mParameter->setPar(params.psid, params.theta, params.R, params.a, params.m, params.k, params.rtol);
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
    params=P;
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
    /*// Input "t" "my" "lambda"  "ny"  "xi"  "omikron"  "theta"  "phi"  "psi"  "xc"   "yc"
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
        }*/
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

void MainWindow::on_Simulate_button_clicked()
{
    int nvar=10;
    RR atol=to_RR(1.0e-4);
    RR rtol=to_RR(params.rtol.toDouble());
    RR h1=to_RR(1E-4);
    RR hmin=to_RR(1E-20);
    RR x1=to_RR(0.0);
    RR x2=to_RR(2.75);
    RR g=to_RR(9.81);
    RR R=to_RR(params.R.toDouble()/100);
    RR k=to_RR(params.k.toDouble());
    RR m=to_RR(params.m.toDouble());
    RR a=to_RR(params.a.toDouble()/100);

    Array<RR,1> ystart(nvar);
    Array<RR,2> tmp;
    ystart(0)=to_RR(0.0);
    ystart(1)=to_RR(0.0);
    ystart(2)=to_RR(params.psid.toDouble());
    ystart(3)=to_RR(0.0);
    ystart(4)=to_RR(0.0);
    ystart(5)=to_RR(params.theta.toDouble());
    ystart(6)=to_RR(0.0);
    ystart(7)=to_RR(0.0);
    ystart(8)=to_RR(0.0);
    ystart(9)=to_RR(0.0);
    Output<StepperDopr853m<RHS_gyro> > out(-1);
    RHS_gyro d(g,R,k,m,a);
    Odeint<StepperDopr853m<RHS_gyro> > ode(ystart,x1,x2,atol,rtol,h1,hmin,out,d);
}
