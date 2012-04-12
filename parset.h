#ifndef PARSET_H
#define PARSET_H

#include <QString>

class ParSet
{
public:
    ParSet();
    ParSet(QString psidd, QString thetaa, QString RR, QString aa, QString mm, QString kk, QString rtoll, QString tt_max);
    QString psid, theta, R, a, m, k, rtol, t_max;
};

#endif // PARSET_H
