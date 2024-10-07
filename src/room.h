#ifndef ROOM_H
#define ROOM_H

#include <QString>

class Room {
public:
    // Construtor padrão (vazio)
    Room();

    // Construtor parametrizado
    Room(int number, double price);

    // Construtor de cópia
    Room(const Room& other);

    // Operador de atribuição
    Room& operator=(const Room& other);

    // Destrutor virtual
    virtual ~Room();

    int getNumber() const;
    double getPrice() const;

private:
    int number;  // Número do quarto
    double price; // Preço do quarto
};

#endif // ROOM_H
