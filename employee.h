#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

struct Employee
{
    QString name        = "";
    QString colorHex    = "#ffffff";
    quint32 salary      = 0;
};

#endif // EMPLOYEE_H
