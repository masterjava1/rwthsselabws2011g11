#include "mainwindow.h"

using namespace NTL;
using namespace blitz;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    parameterOptionsOpen(false),
    //set default starting parameters
    params("250" ,"0.1" ,"2.5" ,"0.5" , "15", "0", "0.00001", "2.75"),
    out(5000)
{
    ui->setupUi(this);
    plot = new QCustomPlot(this);
    plot->setFixedHeight(351);
    plot->setFixedWidth(501);
    plot->setParent(ui->plottingframe);
    plot->setRangeDrag(Qt::Horizontal | Qt::Vertical);
    plot->setRangeZoom(Qt::Horizontal | Qt::Vertical);
    cvar = 1;
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
    ui->t_slider->setMaximum((P.t_max).toDouble()*1000);
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

RR MainWindow::max_RR(Array<RR,1> a, int numele) {
   int i;
   RR max=to_RR(-10E12);
   for (i=0;i<numele;i++){
      if(a(i)>max) max=a(i);
   }
   return max;
}

RR MainWindow::min_RR(Array<RR,1> a, int numele) {
   int i;
   RR min=to_RR(10E12);
   for (i=0;i<numele;i++){
      if(a(i)<min) min=a(i);
   }
   return min;
}

double MainWindow::to_double(const RR& a)
{ double z; conv(z, a); return z; }




void MainWindow::on_Tecplot_button_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
           tr("Export Tecplot File"), "",
           tr("Simulation Data (*.dat);;All Files (*)"));
    QFileInfo file(fileName);
    if(file.suffix().isEmpty()) fileName += ".dat";
    write_tec(out,fileName.toStdString());
}




void MainWindow::on_Simulate_button_clicked()
{
    QProgressDialog progress("Simulating...please wait..","Cancel",0,100);
        progress.show();
        int nvar=10;
        RR atol=to_RR(1.0e-4);
        RR rtol=to_RR(params.rtol.toDouble());
        RR h1=to_RR(1E-4);
        RR hmin=to_RR(1E-20);
        RR x1=to_RR(0.0);
        RR x2=to_RR(params.t_max.toDouble());
        RR g=to_RR(9.81);
        RR R=to_RR(params.R.toDouble()/100);
        RR k=to_RR(params.k.toDouble()*100);
        RR m=to_RR(params.m.toDouble()/1000);
        RR a=to_RR(params.a.toDouble()/100);
        progress.setValue(10);
        Array<RR,1> ystart(nvar);
        Array<RR,2> tmp;
        progress.setValue(20);
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

        progress.setValue(30);
        out.clear();
        RHS_gyro d(g,R,k,m,a);
        Odeint<StepperDopr853m<RHS_gyro> > ode(ystart,x1,x2,atol,rtol,h1,hmin,out,d);
        if (progress.wasCanceled()) return;
        try{
           ode.integrate();
        }catch(RuntimeException rte){
            QString what=rte.what();
            QMessageBox::information(this, tr("Runtime Exception in ode.integrate()"),
                                     what);
        }

        progress.setValue(90);
        x=1.3;
        progress.setValue(100);
        redraw_plot(cvar);
        progress.close();
}

void MainWindow::on_Export_button_clicked()
{

    QString fileName = QFileDialog::getSaveFileName(this,
           tr("Export Data"), "",
           tr("Gyro Export (*.gyr);;All Files (*)"));
    QFileInfo file(fileName);
    if(file.suffix().isEmpty()) fileName += ".gyr";

    ofstream ofs(fileName.toLatin1());
            if (ofs.bad())
            {
                return;
            }

        ofs << out.xsave << endl << out.ysave << endl;
}


void MainWindow::on_Import_button_clicked()
{
    out.clear();

    QString fileName = QFileDialog::getOpenFileName(this,
          tr("Import Data"), "",
          tr("Gyro Export (*.gyr);;All Files (*)"));

    if (fileName.isEmpty())
          return;
      else {

        ifstream ifs(fileName.toLatin1());
        if(ifs.bad())
        {
            return;
        }

        ifs >> out.xsave >> out.ysave;
        redraw_plot(cvar);
    }
}


void MainWindow::redraw_plot(int variable)
{
     plot->addGraph();
     plot->addGraph();
     plot->graph(0)->setPen(QPen(Qt::red));
     plot->graph(1)->setPen(QPen(Qt::blue));
     plot->graph(1)->setBrush(QBrush(QColor(0, 0, 255, 20)));

     QVector<double> ax(out.count);
     QVector<double> ay(out.count);
     for (int i=0;i<out.count;i++){
         conv(ax[i],out.xsave(i));
         conv(ay[i],out.ysave(variable,i));
     }

     QVector<double> bx(2);
     QVector<double> by(2);
     /*
     bx[0]=x;
     bx[1]=x;
     by[0]=plot->yAxis->range().maxRange;
     by[1]=plot->yAxis->range().minRange;
     */

     bx[0]=x;
     bx[1]=x;
     by[0]=1E50;
     by[1]=-1E50;

     plot->graph(1)->setData(ax,ay);
     plot->graph(0)->setData(bx,by);
     plot->graph(1)->rescaleAxes();
     plot->replot();
}

void MainWindow::on_actionChangeVView_triggered()
{
    cvar = ui->spinBox->value();
    redraw_plot(cvar);
}
