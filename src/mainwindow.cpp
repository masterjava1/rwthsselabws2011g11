#include "mainwindow.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    parameterOptionsOpen(false),
    parOpened(false),
    ystart(10),
    out(-1)
// ---------------------------
   nvar(10), df("gyro_tec.dat")
{
    ui->setupUi(this);
    ui->Angles->setEnabled(false);
    atol=to_RR(1.0e-4);
    rtol=atol;
    h1=to_RR(1.0e-4);
    hmin=to_RR(1E-20);
    x1=to_RR(0.0);
    x2=to_RR(2.75);
    g=to_RR(9.81);
    R=to_RR(25E-3);
    k=to_RR(0.3E2);
    m=to_RR(15E-3);
    a=to_RR(5E-3);
    ystart(0)=to_RR(0.0);
    ystart(1)=to_RR(0.0);
    ystart(2)=to_RR(250.0);
    ystart(3)=to_RR(0.0);
    ystart(4)=to_RR(0.0);
    ystart(5)=to_RR(0.1);
    ystart(6)=to_RR(0.0);
    ystart(7)=to_RR(0.0);
    ystart(8)=to_RR(0.0);
    ystart(9)=to_RR(0.0);
    d = RHS_gyro(g,R,k,m,a);
    ode = Odeint<StepperDopr853m<RHS_gyro> >(ystart,x1,x2,atol,rtol,h1,hmin,out,d);
    try{
       ode.integrate();
    }catch(RuntimeException e){
       cout << e.what() << endl;
    }
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
    /*
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
    */
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
