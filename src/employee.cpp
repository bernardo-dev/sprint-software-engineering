#include "src/employee.h"

// Construtor padrão
Employee::Employee() : name(""), position("") {}

// Construtor parametrizado
Employee::Employee(const QString& name, const QString& position)
    : name(name), position(position) {}

// Construtor de cópia
Employee::Employee(const Employee& other)
    : name(other.name), position(other.position) {}

// Operador de atribuição
Employee& Employee::operator=(const Employee& other) {
    if (this != &other) {  // Verifica autoatribuição
        name = other.name;
        position = other.position;
    }
    return *this;
}

// Destrutor virtual
Employee::~Employee() {
    // Não há necessidade de liberar memória, pois QString gerencia isso automaticamente
}

// Métodos de acesso
QString Employee::getName() const { return name; }
QString Employee::getPosition() const { return position; }
