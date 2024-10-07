#ifndef RESERVATION_H
#define RESERVATION_H

#include <QString>
#include <QVector>
#include <QDate>
#include "room.h"
#include "client.h"

/**
 * @class Reservation
 * @brief Represents a reservation made by a client for a specific room and dates.
 */
class Reservation {
public:
    /**
     * @brief Default constructor.
     * Creates an empty Reservation object.
     */
    Reservation();

    /**
     * @brief Parameterized constructor.
     * Initializes a Reservation object with the provided room, client, check-in date, and check-out date.
     * 
     * @param room The Room object associated with the reservation.
     * @param client The Client object making the reservation.
     * @param checkInDate The date of check-in for the reservation.
     * @param checkOutDate The date of check-out for the reservation.
     */
    Reservation(const Room& room, const Client& client, const QDate& checkInDate, const QDate& checkOutDate);

    /**
     * @brief Copy constructor.
     * Creates a copy of another Reservation object.
     * 
     * @param other The Reservation object to be copied.
     */
    Reservation(const Reservation& other);

    /**
     * @brief Assignment operator.
     * Assigns the values from one Reservation object to another.
     * 
     * @param other The Reservation object to be assigned.
     * @return A reference to the assigned Reservation object.
     */
    Reservation& operator=(const Reservation& other);

    /**
     * @brief Virtual destructor.
     * Destroys the Reservation object.
     */
    virtual ~Reservation();

    /**
     * @brief Gets the room associated with the reservation.
     * @return The Room object associated with the reservation.
     */
    Room getRoom() const;

    /**
     * @brief Gets the client associated with the reservation.
     * @return The Client object associated with the reservation.
     */
    Client getClient() const;

    /**
     * @brief Gets the check-in date for the reservation.
     * @return The check-in date as a QDate object.
     */
    QDate getCheckInDate() const;

    /**
     * @brief Gets the check-out date for the reservation.
     * @return The check-out date as a QDate object.
     */
    QDate getCheckOutDate() const;

private:
    Room room;               ///< The reserved room.
    Client client;           ///< The client making the reservation.
    QDate checkInDate;      ///< The check-in date.
    QDate checkOutDate;     ///< The check-out date.
};

/**
 * @brief Declares the Reservation type as a metatype for use in Qt's meta-object system.
 */
Q_DECLARE_METATYPE(Reservation)

#endif // RESERVATION_H
