#ifndef HOTEL_H
#define HOTEL_H

#include <QString>
#include <QVector>
#include "reservation.h"
#include "room.h"
#include "client.h"
#include "employee.h"
#include "manager.h"

class Hotel {
public:
    Hotel(const QString& name, const QString& address);
    void addRoom(const Room& room);
    void addReservation(const Reservation& reservation);
    void addClient(const Client& client);  // New method to add client
    QVector<Reservation> getReservations() const;
    QVector<Room> getRooms() const;
    QVector<Client> getClients() const;           // Method to get the list of clients

private:
    QString name;              // Hotel's name
    QString address;           // Hotel's address
    QVector<Room> rooms;      // List of rooms
    QVector<Reservation> reservations; // List of reservations
    QVector<Client> clients;   // List of clients (New)
};

#endif // HOTEL_H
