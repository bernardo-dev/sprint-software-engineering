#include "src/client.h"

// Construtor padrão
Client::Client() : name(""), document(""), address(""), phone("") {}

// Construtor parametrizado
Client::Client(const QString& name, const QString& document, const QString& address, const QString& phone)
    : name(name), document(document), address(address), phone(phone) {}

// Construtor de cópia
Client::Client(const Client& other)
    : name(other.name), document(other.document), address(other.address), phone(other.phone) {}

// Operador de atribuição
Client& Client::operator=(const Client& other) {
    if (this != &other) {  // Verifica autoatribuição
        name = other.name;
        document = other.document;
        address = other.address;
        phone = other.phone;
    }
    return *this;
}

// Destrutor virtual
Client::~Client() {
    // Não há necessidade de liberar memória, pois QString gerencia isso automaticamente
}

// Métodos de acesso
QString Client::getName() const { return name; }
QString Client::getDocument() const { return document; }
QString Client::getAddress() const { return address; }
QString Client::getPhone() const { return phone; }
