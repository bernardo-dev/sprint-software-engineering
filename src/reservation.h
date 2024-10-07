#ifndef RESERVATION_H
#define RESERVATION_H

#include <QString>
#include <QVector>
#include "room.h"
#include "client.h"

class Reservation {
public:
    // Construtor padrão (vazio)
    Reservation();

    // Construtor parametrizado
    Reservation(const Room& room, const Client& client, const QString& checkInDate, const QString& checkOutDate, const QString& responsible);

    // Construtor de cópia
    Reservation(const Reservation& other);

    // Operador de atribuição
    Reservation& operator=(const Reservation& other);

    // Destrutor virtual
    virtual ~Reservation();

    Room getRoom() const;
    Client getClient() const;
    QString getCheckInDate() const;
    QString getCheckOutDate() const;
    QString getResponsible() const;

private:
    Room room;               // Quarto reservado
    Client client;           // Cliente da reserva
    QString checkInDate;     // Data de check-in
    QString checkOutDate;    // Data de check-out
    QString responsible;      // Nome da pessoa responsável pela reserva
};

#endif // RESERVATION_H
