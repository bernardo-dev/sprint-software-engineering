#include "reservation.h"

Reservation::Reservation(const Room& room, const Client& client, const QString& checkInDate, const QString& checkOutDate, const QString& responsible)
    : room(room), client(client), checkInDate(checkInDate), checkOutDate(checkOutDate), responsible(responsible) {}

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
