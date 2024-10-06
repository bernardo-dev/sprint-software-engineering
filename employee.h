#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee {
public:
    Employee(const QString& name, const QString& position);
    QString getName() const;
    QString getPosition() const;

private:
    QString name;  // Employee's name
    QString position;  // Employee's position
};

#endif // EMPLOYEE_H
