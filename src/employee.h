#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee {
public:
    // Construtor padrão (vazio)
    Employee();

    // Construtor parametrizado
    Employee(const QString& name, const QString& position);

    // Construtor de cópia
    Employee(const Employee& other);

    // Operador de atribuição
    Employee& operator=(const Employee& other);

    // Destrutor virtual
    virtual ~Employee();

    QString getName() const;
    QString getPosition() const;

private:
    QString name;      // Nome do funcionário
    QString position;  // Posição do funcionário
};

#endif // EMPLOYEE_H
