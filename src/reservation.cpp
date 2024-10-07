#include "reservation.h"

// Construtor padrão
Reservation::Reservation() 
    : room(), client(), checkInDate(""), checkOutDate(""), responsible("") {}

// Construtor parametrizado
Reservation::Reservation(const Room& room, const Client& client, const QString& checkInDate, const QString& checkOutDate, const QString& responsible)
    : room(room), client(client), checkInDate(checkInDate), checkOutDate(checkOutDate), responsible(responsible) {}

// Construtor de cópia
Reservation::Reservation(const Reservation& other)
    : room(other.room), client(other.client), 
      checkInDate(other.checkInDate), checkOutDate(other.checkOutDate), responsible(other.responsible) {}

// Operador de atribuição
Reservation& Reservation::operator=(const Reservation& other) {
    if (this != &other) {  // Verifica autoatribuição
        room = other.room;
        client = other.client;
        checkInDate = other.checkInDate;
        checkOutDate = other.checkOutDate;
        responsible = other.responsible;
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

QString Reservation::getCheckInDate() const {
    return checkInDate;
}

QString Reservation::getCheckOutDate() const {
    return checkOutDate;
}

QString Reservation::getResponsible() const {
    return responsible;
}
