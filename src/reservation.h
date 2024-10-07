#ifndef RESERVATION_H
#define RESERVATION_H

#include <QString>
#include <QVector>
#include <QDate>
#include "room.h"
#include "client.h"

class Reservation {
public:
    // Construtor padrão (vazio)
    Reservation();

    // Construtor parametrizado
    Reservation(const Room& room, const Client& client, const QDate& checkInDate, const QDate& checkOutDate);

    // Construtor de cópia
    Reservation(const Reservation& other);

    // Operador de atribuição
    Reservation& operator=(const Reservation& other);

    // Destrutor virtual
    virtual ~Reservation();

    Room getRoom() const;
    Client getClient() const;
    QDate getCheckInDate() const;
    QDate getCheckOutDate() const;

private:
    Room room;               // Quarto reservado
    Client client;           // Cliente da reserva
    QDate checkInDate;     // Data de check-in
    QDate checkOutDate;    // Data de check-out
};

Q_DECLARE_METATYPE(Reservation)

#endif // RESERVATION_H
