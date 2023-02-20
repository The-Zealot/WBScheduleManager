#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QObject>
#include <QColor>

class Employee
{
public:
    Employee();
private:
    QString _name;
    QColor _color;
};

#endif // EMPLOYEE_H
