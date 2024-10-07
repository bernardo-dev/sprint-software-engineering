#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

class Manager : public Employee {
public:
    // Construtor padrão (vazio)
    Manager();

    // Construtor parametrizado
    Manager(const QString& name, const QString& position);

    // Construtor de cópia
    Manager(const Manager& other);

    // Operador de atribuição
    Manager& operator=(const Manager& other);

    // Destrutor virtual
    virtual ~Manager();
};

#endif // MANAGER_H
