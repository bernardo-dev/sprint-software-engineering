#include "client.h"

Client::Client(const QString& name, const QString& document, const QString& address, const QString& phone)
    : name(name), document(document), address(address), phone(phone) {}

QString Client::getName() const {
    return name;
}

QString Client::getDocument() const {
    return document;
}

QString Client::getAddress() const {
    return address;
}

QString Client::getPhone() const {
    return phone;
}
