#include "parset.h"

ParSet::ParSet()
{
}

ParSet::ParSet(QString psidd, QString thetaa, QString RR, QString aa, QString mm, QString kk, QString atoll, QString rtoll)
    : psid(psidd), theta(thetaa), R(RR), a(aa), m(mm), k(kk), atol(atoll),
    rtol(rtoll){}