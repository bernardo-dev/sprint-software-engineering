#ifndef ROOM_H
#define ROOM_H

#include <QString>
#include <QMetaType>

/**
 * @class Room
 * @brief Represents a hotel room with a number and price.
 */
class Room {
public:
    /**
     * @brief Default constructor.
     * Creates an empty Room object.
     */
    Room();

    /**
     * @brief Parameterized constructor.
     * Initializes a Room object with the provided number and price.
     * 
     * @param number The number of the room.
     * @param price The price of the room.
     */
    Room(int number, double price);

    /**
     * @brief Copy constructor.
     * Creates a copy of another Room object.
     * 
     * @param other The Room object to be copied.
     */
    Room(const Room& other);

    /**
     * @brief Assignment operator.
     * Assigns the values from one Room object to another.
     * 
     * @param other The Room object to be assigned.
     * @return A reference to the assigned Room object.
     */
    Room& operator=(const Room& other);

    /**
     * @brief Virtual destructor.
     * Destroys the Room object.
     */
    virtual ~Room();

    /**
     * @brief Gets the room number.
     * @return The room number as an integer.
     */
    int getNumber() const;

    /**
     * @brief Gets the room price.
     * @return The room price as a double.
     */
    double getPrice() const;

private:
    int number;  ///< The room number.
    double price; ///< The price of the room.
};

/**
 * @brief Declares the Room type as a metatype for use in Qt's meta-object system.
 */
Q_DECLARE_METATYPE(Room)

#endif // ROOM_H
