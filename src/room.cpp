#include "src/room.h"

// Construtor padrão
Room::Room() : number(0), price(0.0) {}

// Construtor parametrizado
Room::Room(int number, double price) : number(number), price(price) {}

// Construtor de cópia
Room::Room(const Room& other) : number(other.number), price(other.price) {}

// Operador de atribuição
Room& Room::operator=(const Room& other) {
    if (this != &other) {  // Verifica autoatribuição
        number = other.number;
        price = other.price;
    }
    return *this;
}

// Destrutor virtual
Room::~Room() {
    // Não há necessidade de liberar memória, pois não há alocação dinâmica
}

// Métodos de acesso
int Room::getNumber() const {
    return number;
}

double Room::getPrice() const {
    return price;
}
