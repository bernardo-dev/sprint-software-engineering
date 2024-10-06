#ifndef RESERVA_H
#define RESERVA_H

#include <QString>
#include <QVector>
#include "quarto.h"
#include "cliente.h"

class Reserva {
public:
    Reserva(const Quarto& quarto, const Cliente& cliente, const QString& dataEntrada, const QString& dataSaida, const QString& responsavel);
    Quarto getQuarto() const;
    Cliente getCliente() const;
    QString getDataEntrada() const;
    QString getDataSaida() const;
    QString getResponsavel() const;

private:
    Quarto quarto;          // Quarto reservado
    Cliente cliente;        // Cliente da reserva
    QString dataEntrada;    // Data de entrada
    QString dataSaida;      // Data de saída
    QString responsavel;     // Nome do responsável pela reserva
};

#endif // RESERVA_H
