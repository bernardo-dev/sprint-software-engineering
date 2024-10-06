#ifndef QUARTO_H
#define QUARTO_H

#include <QString>

class Quarto {
public:
    Quarto(int numero, double preco);
    int getNumero() const;
    double getPreco() const;

private:
    int numero;  // Número do quarto
    double preco; // Preço do quarto
};

#endif // QUARTO_H
