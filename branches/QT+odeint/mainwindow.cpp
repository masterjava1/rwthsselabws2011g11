#include "mainwindow.h"

using namespace NTL;
using namespace blitz;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    parameterOptionsOpen(false),
    params("250" ,"0.1" ,"2.5" ,"0.5" , "15", "0", "0.00001", "2.75")
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
        mParameter->setPar(params.psid, params.theta, params.R, params.a, params.m, params.k, params.rtol, params.t_max);
    }
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
    ui->t_max->setText(P.t_max);
    params=P;
    ui->t_slider->setMaximum((P.t_max).toDouble()*3000);
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

RR max_RR(Array<RR,1> a, int numele) {
   int i;
   RR max=to_RR(-10E12);
   for (i=0;i<numele;i++){
      if(a(i)>max) max=a(i);
   }
   return max;
}

RR min_RR(Array<RR,1> a, int numele) {
   int i;
   RR min=to_RR(10E12);
   for (i=0;i<numele;i++){
      if(a(i)>min) min=a(i);
   }
   return min;
}

double to_double(const RR& a)
{ double z; conv(z, a); return z; }

void MainWindow::paintEvent(QPaintEvent *e)
{
    // Input "t" "my" "lambda"  "ny"  "xi"  "omikron"  "theta"  "phi"  "psi"  "xc"   "yc"
    QPainter painter(this);
    painter.drawRect(10,100,250,150); //1
    painter.drawRect(10,260,250,150); //2
    painter.drawRect(270,100,250,150); //3
    painter.drawRect(270,260,250,150); //4

    QPainter redpainter(this);
    redpainter.setPen(Qt::red);
    double t = ui->t_slider->value();
    redpainter.drawLine(10+(ui->t_max->text()).toDouble()/250*t,100,10+(ui->t_max->text()).toDouble()/250*t,250);

    //Angles ================================================== ysave(var,n)
   // if(ui->Angles->isEnabled(false)){
        //get min and max values -- val_min; val_max
        RR theta_min = min_RR(out->ysave(5,Range(0,out->count-1)), out->count);
        RR phi_min = min_RR(out->ysave(6,Range(0,out->count-1)), out->count);
        RR psi_min = min_RR(out->ysave(7,Range(0,out->count-1)), out->count);
        RR theta_max = max_RR(out->ysave(5,Range(0,out->count-1)), out->count);
        RR phi_max = max_RR(out->ysave(6,Range(0,out->count-1)), out->count);
        RR psi_max = max_RR(out->ysave(7,Range(0,out->count-1)), out->count);

        double min_angles[] = {to_double(theta_min),to_double(phi_min),to_double(psi_min)};
        double max_angles[] = {to_double(theta_max),to_double(phi_max),to_double(psi_max)};
        double sum1[] = {0,0,0};

        for (int ii1= 0;ii1<3;ii1++){
            if(min_angles[ii1]>0)
                {sum1[ii1]=0;}
            else{
                if(min_angles[ii1]<0){
                min_angles[ii1] = -min_angles[ii1];
                }
                if(max_angles[ii1]<0){
                max_angles[ii1] = -max_angles[ii1];
                }
                sum1[ii1] = 150/(min_angles[ii1]+max_angles[ii1]+200)*max_angles[ii1];
            }
            painter.drawLine(10,sum1[0]+100,260,sum1[0]+100); //1
            painter.drawLine(270,sum1[1]+100,520,sum1[1]+100); //2
            painter.drawLine(10,sum1[2]+260,260,sum1[2]+260); //3
          //  painter.drawLine(270,sum1[0]+260,520,sum1[0]+260); //4
            QPainterPath path;
            if (ii1 == 0){
                path.moveTo(10,100+sum1[0]+to_double(out->ysave(5,0)));
            }
            if (ii1 == 1){
                path.moveTo(270,100+sum1[1]+to_double(out->ysave(6,0)));
            }
            if (ii1 == 2){
                path.moveTo(10,260+sum1[2]+to_double(out->ysave(7,0)));
            }
            for (int ii2 = 0; ii2<out->count-1;ii2++){
                path.lineTo(to_double(out->xsave(ii2)),to_double(out->ysave(ii1+5,ii2)));
                painter.drawPath(path);
            }
        }
   // }
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


void MainWindow::on_Tecplot_button_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
           tr("Export Tecplot File"), "",
           tr("Parameters (*.dat);;All Files (*)"));
    write_tec(out,fileName.toStdString());
}

void MainWindow::on_Export_button_clicked()
{
    QFileDialog fdialog;
    fdialog.setDefaultSuffix("gyr");
    QString fileName = fdialog.getSaveFileName(this,
           tr("Export Data"), "",
           tr("Parameters (*.gyr);;All Files (*)"));

    ofstream ofs(fileName.toLatin1()+ ".gyr");
            if (ofs.bad())
            {
                return;
            }

        ofs << out->xsave << endl << out->ysave << endl;
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
    RR k=to_RR(params.k.toDouble()*100);
    RR m=to_RR(params.m.toDouble()/1000);
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
    out=new Output<StepperDopr853m<RHS_gyro > >(-1);
    RHS_gyro d(g,R,k,m,a);
    Odeint<StepperDopr853m<RHS_gyro> > ode(ystart,x1,x2,atol,rtol,h1,hmin,*out,d);

    try{
       ode.integrate();
    }catch(RuntimeException rte){
        QString what=rte.what();
        QMessageBox::information(this, tr("Runtime Exception in ode.integrate()"),
                                 what);
    }

    out->~Output();
}
