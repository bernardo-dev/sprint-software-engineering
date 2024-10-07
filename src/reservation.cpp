#include "reservation.h"

// Construtor padrão
Reservation::Reservation()
    : room(), client(), checkInDate(), checkOutDate() {}

// Construtor parametrizado
Reservation::Reservation(const Room& room, const Client& client, const QDate& checkInDate, const QDate& checkOutDate)
    : room(room), client(client), checkInDate(checkInDate), checkOutDate(checkOutDate) {}

// Construtor de cópia
Reservation::Reservation(const Reservation& other)
    : room(other.room), client(other.client), 
      checkInDate(other.checkInDate), checkOutDate(other.checkOutDate) {}

// Operador de atribuição
Reservation& Reservation::operator=(const Reservation& other) {
    if (this != &other) {  // Verifica autoatribuição
        room = other.room;
        client = other.client;
        checkInDate = other.checkInDate;
        checkOutDate = other.checkOutDate;
    }
    return *this;
}

// Destrutor virtual
Reservation::~Reservation() {
    // Não há necessidade de liberar memória, pois Room e Client gerenciam isso automaticamente
}

// Métodos de acesso
Room Reservation::getRoom() const {
    return room;
}

Client Reservation::getClient() const {
    return client;
}

QDate Reservation::getCheckInDate() const {
    return checkInDate;
}

QDate Reservation::getCheckOutDate() const {
    return checkOutDate;
}

