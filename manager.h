#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

class Manager : public Employee {
public:
    Manager(const QString& name, const QString& position);
};

#endif // MANAGER_H
