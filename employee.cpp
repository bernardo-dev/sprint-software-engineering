#include "employee.h"

Employee::Employee(const QString& name, const QString& position) : name(name), position(position) {}

QString Employee::getName() const {
    return name;
}

QString Employee::getPosition() const {
    return position;
}
