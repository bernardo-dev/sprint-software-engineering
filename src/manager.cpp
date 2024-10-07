#include "manager.h"

// Construtor padrão
Manager::Manager() : Employee() {}

// Construtor parametrizado
Manager::Manager(const QString& name, const QString& position) : Employee(name, position) {}

// Construtor de cópia
Manager::Manager(const Manager& other) : Employee(other) {}

// Operador de atribuição
Manager& Manager::operator=(const Manager& other) {
    if (this != &other) {  // Verifica autoatribuição
        Employee::operator=(other);  // Chama o operador de atribuição da classe base
    }
    return *this;
}

// Destrutor virtual
Manager::~Manager() {
    // Não há necessidade de liberar memória, pois Employee gerencia isso automaticamente
}
