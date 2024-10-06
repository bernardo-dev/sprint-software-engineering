#include "reserva.h"

Reserva::Reserva(const Quarto& quarto, const Cliente& cliente, const QString& dataEntrada, const QString& dataSaida, const QString& responsavel)
    : quarto(quarto), cliente(cliente), dataEntrada(dataEntrada), dataSaida(dataSaida), responsavel(responsavel) {}

Quarto Reserva::getQuarto() const {
    return quarto;
}

Cliente Reserva::getCliente() const {
    return cliente;
}

QString Reserva::getDataEntrada() const {
    return dataEntrada;
}

QString Reserva::getDataSaida() const {
    return dataSaida;
}

QString Reserva::getResponsavel() const {
    return responsavel;
}
