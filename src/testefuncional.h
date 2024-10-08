#ifndef TESTEFUNCIONAL_H
#define TESTEFUNCIONAL_H

#include <QtTest/QtTest>
#include "mainwindow.h"
#include "hotel.h"
#include "room.h"

/**
 * @class TesteFuncional
 * @brief Functional test class for the hotel reservation system.
 *
 * The TesteFuncional class uses the QtTest framework to test functionalities
 * related to reservation creation in the hotel system.
 *
 * - The first test checks if a reservation is successfully created.
 * - The second test checks if the system handles invalid date reservations correctly.
 */
class TesteFuncional : public QObject {
    Q_OBJECT

private slots:
    /**
     * @brief Tests the creation of a valid reservation.
     *
     * Verifies whether the system can correctly create a reservation with valid data.
     */
    void testCreateReservation();

    /**
     * @brief Tests the creation of a reservation with invalid data.
     *
     * Verifies if the system properly detects and rejects attempts to create
     * a reservation with an invalid date.
     */
    void testCreateReservationDateInvalid();
};

#endif // TESTEFUNCIONAL_H
