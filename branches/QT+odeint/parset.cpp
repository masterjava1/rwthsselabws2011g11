#include "parset.h"

ParSet::ParSet()
{
}

ParSet::ParSet(QString psidd, QString thetaa, QString RR, QString aa, QString mm, QString kk, QString rtoll, QString tt_max)
    : psid(psidd), theta(thetaa), R(RR), a(aa), m(mm), k(kk), rtol(rtoll), t_max(tt_max){}
