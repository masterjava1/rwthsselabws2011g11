#include "mainwindow.h"

using namespace NTL;
using namespace blitz;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    parameterOptionsOpen(false),
    //set default starting parameters
    params("250" ,"0.1" ,"2.5" ,"0.5" , "15", "0.3", "1E-4","1E-4", "2.75"),
    out(5000)
{
    ui->setupUi(this);
    plot = new QCustomPlot(this);
    plot->setFixedHeight(371);
    plot->setFixedWidth(501);
    plot->setParent(ui->plottingframe);
    plot->setRangeDrag(Qt::Horizontal | Qt::Vertical);
    plot->setRangeZoom(Qt::Horizontal | Qt::Vertical);
    cvar = 1;
    ui->psidot0->setText(params.psid);
    ui->theta0->setText(params.theta);
    ui->R->setText(params.R);
    ui->a->setText(params.a);
    ui->m->setText(params.m);
    ui->k->setText(params.k);
    ui->display_cqtol->setText(params.cqtol);
    ui->Tolerance->setText(params.rtol);
    ui->t_max->setText(params.t_max);

    ui->Tecplot_button->setEnabled(false);
    ui->Export_button->setEnabled(false);
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
        mParameter->setPar(params.psid, params.theta, params.R, params.a, params.m, params.k, params.rtol,params.cqtol, params.t_max);
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
    ui->display_cqtol->setText(P.cqtol);
    ui->Tolerance->setText(P.rtol);
    ui->t_max->setText(P.t_max);
    params=P;
}

void MainWindow::WindowClosed()
{
    mParameter->close();
    parameterOptionsOpen = false;
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
    if (fileName.isEmpty())
            return;
    QFileInfo file(fileName);
    if(file.suffix().isEmpty()) fileName += ".dat";
    write_tec(out,fileName.toStdString());
}

void MainWindow::disableUI(){
    ui->spinBox->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->Simulate_button->setEnabled(false);
    ui->Import_button->setEnabled(false);
    ui->Tecplot_button->setEnabled(false);
    ui->Export_button->setEnabled(false);
    this->update();
    this->repaint();
    sleep(1);
}



void MainWindow::on_Simulate_button_clicked()
{

    disableUI();

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
        RR cqtol=to_RR(params.cqtol.toDouble());
        Array<RR,1> ystart(nvar);
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
        out.clear();
        RHS_gyro d(g,R,k,m,a);
        Odeint<StepperDopr853m<RHS_gyro> > ode(ystart,x1,x2,atol,rtol,cqtol,h1,hmin,out,d);
        try{
           ode.integrate();
        }catch(RuntimeException rte){
            QString what=rte.what();
            QMessageBox::information(this, tr("Runtime Exception in ode.integrate()"),
                                     what);
        }
        redraw_plot(cvar);
        ui->spinBox->setEnabled(true);
        ui->pushButton->setEnabled(true);
        ui->Simulate_button->setEnabled(true);
        ui->Import_button->setEnabled(true);
        ui->Tecplot_button->setEnabled(true);
        ui->Export_button->setEnabled(true);
}

void  MainWindow::on_Export_button_clicked()
{

    QString fileName = QFileDialog::getSaveFileName(this,
           tr("Export Data"), "",
           tr("Gyro Export (*.gyr);;All Files (*)"));
    if (fileName.isEmpty())
            return;
    QFileInfo file(fileName);
    if(file.suffix().isEmpty()) fileName += ".gyr";

    ofstream ofs(fileName.toLatin1());
            if (ofs.bad())
            {
                return;
            }

        ofs << out.xsave << endl << out.ysave << endl << out.count << endl;
}




void MainWindow::on_Import_button_clicked()
{
        out.clear();
    QString fileName = QFileDialog::getOpenFileName(this,
          tr("Import Data"), "",
          tr("Gyro Export (*.gyr);;All Files (*)"));
    if (fileName.isEmpty())
            return;


        ifstream ifs(fileName.toLatin1());
        if(ifs.bad())
        {
            return;
        }

        Array<RR,1> xtemp;
        Array<RR,2> ytemp;
        ifs >> xtemp;
        ifs >>ytemp;
        ifs >> out.count;
        out.xsave.resize(xtemp.shape());
        out.ysave.resize(ytemp.shape());
        out.xsave=xtemp;
        out.ysave=ytemp;
        redraw_plot(cvar);

        ui->Tecplot_button->setEnabled(true);
        ui->Export_button->setEnabled(true);

}


void MainWindow::redraw_plot(int variable)
{
     plot->addGraph();
     plot->addGraph();
     plot->graph(0)->setPen(QPen(Qt::blue));
     plot->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 20)));

     QVector<double> ax(out.count);
     QVector<double> ay(out.count);
     for (int i=0;i<out.count;i++){
         conv(ax[i],out.xsave(i));
         conv(ay[i],out.ysave(variable,i));
     }

     QVector<double> bx(2);

     plot->graph(0)->setData(ax,ay);
     plot->graph(0)->rescaleAxes();
     plot->replot();
}

void MainWindow::on_actionChangeVView_triggered()
{
    cvar = ui->spinBox->value()-1;
    redraw_plot(cvar);
}

void MainWindow::on_actionFitall_triggered()
{
    cvar = ui->spinBox->value()-1;
    redraw_plot(cvar);
}
