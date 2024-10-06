#include "hotel.h"

Hotel::Hotel(const QString& nome, const QString& endereco)
    : nome(nome), endereco(endereco) {}

void Hotel::adicionarQuarto(const Quarto& quarto) {
    quartos.append(quarto);
}

void Hotel::adicionarReserva(const Reserva& reserva) {
    reservas.append(reserva);
}

QVector<Reserva> Hotel::getReservas() const {
    return reservas;
}

QVector<Quarto> Hotel::getQuartos() const {
    return quartos;
}
