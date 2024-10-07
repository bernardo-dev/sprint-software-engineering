#ifndef HOTEL_H
#define HOTEL_H

#include <QString>
#include <QVector>
#include "reservation.h"
#include "room.h"
#include "client.h"
#include "employee.h"
#include "manager.h"

/**
 * @class Hotel
 * @brief Represents a hotel with a list of rooms, reservations, and clients.
 */
class Hotel {
public:
    /**
     * @brief Default constructor.
     * Creates an empty Hotel object.
     */
    Hotel();

    /**
     * @brief Parameterized constructor.
     * Initializes a Hotel object with the provided name and address.
     * 
     * @param name The name of the hotel.
     * @param address The address of the hotel.
     */
    Hotel(const QString& name, const QString& address);

    /**
     * @brief Copy constructor.
     * Creates a copy of another Hotel object.
     * 
     * @param other The Hotel object to be copied.
     */
    Hotel(const Hotel& other);

    /**
     * @brief Assignment operator.
     * Assigns the values from one Hotel object to another.
     * 
     * @param other The Hotel object to be assigned.
     * @return A reference to the assigned Hotel object.
     */
    Hotel& operator=(const Hotel& other);

    /**
     * @brief Virtual destructor.
     * Destroys the Hotel object.
     */
    virtual ~Hotel();

    /**
     * @brief Adds a room to the hotel's list of rooms.
     * 
     * @param room The Room object to be added.
     */
    void addRoom(const Room& room);

    /**
     * @brief Adds a reservation to the hotel's list of reservations.
     * 
     * @param reservation The Reservation object to be added.
     */
    void addReservation(const Reservation& reservation);

    /**
     * @brief Adds a client to the hotel's list of clients.
     * 
     * @param client The Client object to be added.
     */
    void addClient(const Client& client);

    /**
     * @brief Gets the list of reservations for the hotel.
     * 
     * @return A QVector of Reservation objects.
     */
    QVector<Reservation> getReservations() const;

    /**
     * @brief Gets the list of rooms in the hotel.
     * 
     * @return A QVector of Room objects.
     */
    QVector<Room> getRooms() const;

    /**
     * @brief Gets the list of clients in the hotel.
     * 
     * @return A QVector of Client objects.
     */
    QVector<Client> getClients() const;

private:
    QString name;                          ///< The name of the hotel.
    QString address;                       ///< The address of the hotel.
    QVector<Room> rooms;                   ///< The list of rooms in the hotel.
    QVector<Reservation> reservations;     ///< The list of reservations in the hotel.
    QVector<Client> clients;               ///< The list of clients in the hotel.
};

#endif // HOTEL_H
