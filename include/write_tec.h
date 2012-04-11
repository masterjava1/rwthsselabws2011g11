  /*===========================================================================
  04.04.2012
  desc: write outputfile in tecplot-format 
  rev: 0.1
  author: William Takashi Hulin
  ===========================================================================
  dependencies:
    - blitz/array.h
    - Output.h
  included in:
    - 
  ===========================================================================*/
#ifndef _WRITE_TEC_INCLUDED__
#define _WRITE_TEC_INCLUDED__

#include <fstream>
#include <string>
#include <blitz/array.h>
#include <NTL/RR.h>
#include "Output.h"

using namespace blitz;
using namespace NTL;

template <typename D>
void write_tec(Output<D> &out, string s){
   ofstream outfile;
   outfile.open(s.c_str());
   outfile << "TITLE = \"Simulation tippe-top gyro\"" << endl;
   outfile << "VARIABLES = \"t\"" << endl;
   outfile << "\"my\"" << endl 
   << "\"lambda\"" << endl << "\"ny\"" << endl << "\"xi\"" << endl 
   << "\"omikron\"" << endl << "\"theta\"" << endl << "\"phi\"" << endl 
   << "\"psi\"" << endl << "\"xc\"" << endl << "\"yc\"" << endl;
   outfile << "ZONE T = \"ZONE 001\"" << endl;
   outfile << "STRANDID=0, SOLUTIONTIME=0" << endl;
   outfile << "I="<<out.count<<" , J=1, K=1, ZONETYPE=Ordered" << endl;
   outfile << "DATAPACKING = POINT" << endl;
   outfile << "DT = (SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE SINGLE"<<
   " SINGLE SINGLE SINGLE SINGLE )" << endl;
   for(int i=0;i<out.count;i++)
   {
      outfile << out.xsave(i) << " ";
      for(int j=0;j<out.nvar;j++){
         outfile << out.ysave(j,i) << " ";
      }
      outfile << endl;
   }
   outfile.close();
}

#endif
