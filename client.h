#ifndef CLIENT_H
#define CLIENT_H

#include <QString>

class Client {
public:
    Client(const QString& name, const QString& document, const QString& address, const QString& phone);
    QString getName() const;
    QString getDocument() const;
    QString getAddress() const;
    QString getPhone() const;

private:
    QString name;      // Client's name
    QString document;  // Identification document
    QString address;   // Client's address
    QString phone;     // Client's phone number
};

#endif // CLIENT_H
