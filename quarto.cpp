#include "quarto.h"

Quarto::Quarto(int numero, double preco) : numero(numero), preco(preco) {}

int Quarto::getNumero() const {
    return numero;
}

double Quarto::getPreco() const {
    return preco;
}
