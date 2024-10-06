#include "hotel.h"

Hotel::Hotel(const QString& name, const QString& address)
    : name(name), address(address) {}

void Hotel::addRoom(const Room& room) {
    rooms.append(room);
}

void Hotel::addReservation(const Reservation& reservation) {
    reservations.append(reservation);
}

void Hotel::addClient(const Client& client) {
    clients.append(client);  // Adds the client to the list
}

QVector<Reservation> Hotel::getReservations() const {
    return reservations;
}

QVector<Room> Hotel::getRooms() const {
    return rooms;
}

QVector<Client> Hotel::getClients() const {
    return clients;  // Returns the list of clients
}
