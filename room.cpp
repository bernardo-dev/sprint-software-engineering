#include "room.h"

Room::Room(int number, double price) : number(number), price(price) {}

int Room::getNumber() const {
    return number;
}

double Room::getPrice() const {
    return price;
}
