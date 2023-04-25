#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>
#include "defines.h"

struct EmployeeShift
{
    QString name        = "";
    QString colorHex    = FINISHED_DAY_HEX;
    quint32 salary      = 0;

    bool isFinished     = false;
    bool isPayed        = false;
};

struct Employee
{
    QString name = "";
    quint32 salary = 0;
    quint32 shifts = 0;

    quint32 payedShifts = 0;
};

#endif // EMPLOYEE_H
