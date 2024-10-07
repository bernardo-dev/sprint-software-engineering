#include "src/hotel.h"

// Construtor padrão
Hotel::Hotel() : name(""), address("") {}

// Construtor parametrizado
Hotel::Hotel(const QString& name, const QString& address)
    : name(name), address(address) {}

// Construtor de cópia
Hotel::Hotel(const Hotel& other)
    : name(other.name), address(other.address), 
      rooms(other.rooms), reservations(other.reservations), clients(other.clients) {}

// Operador de atribuição
Hotel& Hotel::operator=(const Hotel& other) {
    if (this != &other) {  // Verifica autoatribuição
        name = other.name;
        address = other.address;
        rooms = other.rooms;
        reservations = other.reservations;
        clients = other.clients;
    }
    return *this;
}

// Destrutor virtual
Hotel::~Hotel() {
    // Não há necessidade de liberar memória, pois QVector gerencia isso automaticamente
}

// Métodos para adicionar e obter dados
void Hotel::addRoom(const Room& room) {
    rooms.append(room);
}

void Hotel::addReservation(const Reservation& reservation) {
    reservations.append(reservation);
}

void Hotel::addClient(const Client& client) {
    clients.append(client);  // Adiciona o cliente à lista
}

QVector<Reservation> Hotel::getReservations() const {
    return reservations;
}

QVector<Room> Hotel::getRooms() const {
    return rooms;
}

QVector<Client> Hotel::getClients() const {
    return clients;  // Retorna a lista de clientes
}
