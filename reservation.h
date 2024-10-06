#ifndef RESERVATION_H
#define RESERVATION_H

#include <QString>
#include <QVector>
#include "room.h"
#include "client.h"

class Reservation {
public:
    Reservation(const Room& room, const Client& client, const QString& checkInDate, const QString& checkOutDate, const QString& responsible);
    Room getRoom() const;
    Client getClient() const;
    QString getCheckInDate() const;
    QString getCheckOutDate() const;
    QString getResponsible() const;

private:
    Room room;               // Reserved room
    Client client;           // Client of the reservation
    QString checkInDate;     // Check-in date
    QString checkOutDate;    // Check-out date
    QString responsible;      // Name of the person responsible for the reservation
};

#endif // RESERVATION_H
