#ifndef HOTEL_H
#define HOTEL_H

#include <QString>
#include <QVector>
#include "reserva.h"
#include "quarto.h"
#include "cliente.h"
#include "funcionario.h"
#include "gerente.h"

class Hotel {
public:
    Hotel(const QString& nome, const QString& endereco);
    void adicionarQuarto(const Quarto& quarto);
    void adicionarReserva(const Reserva& reserva);
    QVector<Reserva> getReservas() const;
    QVector<Quarto> getQuartos() const;

private:
    QString nome;              // Nome do hotel
    QString endereco;          // Endereço do hotel
    QVector<Quarto> quartos;   // Lista de quartos
    QVector<Reserva> reservas; // Lista de reservas
};

#endif // HOTEL_H
