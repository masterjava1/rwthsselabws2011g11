#include <iostream>
#include <fstream>
#include <blitz/array.h>
#include "Output.h"

using namespace blitz;

int tecplotter(Output<StepperDopr853<RHS_van> > &out)
{
  ofstream outfile;
   outfile.open("output.dat");
   outfile << "TITLE = \"Simulation tippe-top gyro\"" << endl;
   outfile << "VARIABLES = \"t\"" << endl;
   outfile << "\"my\"" << endl << "\"lambda\"" << endl << "\"ny\"" << endl << "\"xi\"" << endl << "\"omikron\"" << endl 
	   << "\"theta\"" << endl << "\"phi\"" << endl << "\"psi\"" << endl << "\"xc\"" << endl << "\"yc\"" << endl;
   outfile << "ZONE T = \"ZONE 001\"" << endl;
   outfile << "STRANDID=0, SOLUTIONTIME=0" << endl;
   outfile << "I=86208 , J=1, K=1, ZONETYPE=Ordered" << endl;
   outfile << "DATAPACKING = POINT" << endl;
   outfile << "DT = (SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE )" << endl;
   for(int i=0;i<out.count;i++)
	{
		outfile << out.xsave(i) << " ";
		for(int j=0;j<=out.nvar;j++){
			outfile << out.ysave(j,i) << " ";
 		}
		outfile << endl;
	}
   /*outfile << out.xsave(Range(0,out.count-1)) << endl;
   outfile << out.ysave(Range(0, nvar),Range(0,out.count-1)) << endl;*/
   outfile.close();

   return 0;
}
