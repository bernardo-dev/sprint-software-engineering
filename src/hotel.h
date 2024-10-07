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
    // Construtor padrão (vazio)
    Hotel();

    // Construtor parametrizado
    Hotel(const QString& name, const QString& address);

    // Construtor de cópia
    Hotel(const Hotel& other);

    // Operador de atribuição
    Hotel& operator=(const Hotel& other);

    // Destrutor virtual
    virtual ~Hotel();

    void addRoom(const Room& room);
    void addReservation(const Reservation& reservation);
    void addClient(const Client& client);  // Novo método para adicionar cliente
    QVector<Reservation> getReservations() const;
    QVector<Room> getRooms() const;
    QVector<Client> getClients() const;           // Método para obter a lista de clientes

private:
    QString name;              // Nome do hotel
    QString address;           // Endereço do hotel
    QVector<Room> rooms;      // Lista de quartos
    QVector<Reservation> reservations; // Lista de reservas
    QVector<Client> clients;   // Lista de clientes (Novo)
};

#endif // HOTEL_H
