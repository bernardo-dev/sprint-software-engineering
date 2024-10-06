#ifndef ROOM_H
#define ROOM_H

#include <QString>

class Room {
public:
    Room(int number, double price);
    int getNumber() const;
    double getPrice() const;

private:
    int number;  // Room number
    double price; // Room price
};

#endif // ROOM_H
