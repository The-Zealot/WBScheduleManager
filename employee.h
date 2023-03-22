#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

#define FINISHED_DAY_HEX    "#808080"
#define PAYED_DAY_HEX       "#00aa00"

struct EmployeeShift
{
    QString name        = "";
    QString colorHex    = "#ffffff";
    quint32 salary      = 0;

    bool isFinished     = false;
    bool isPayed        = false;
};

#endif // EMPLOYEE_H
