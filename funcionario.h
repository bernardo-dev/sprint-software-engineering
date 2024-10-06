#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <QString>

class Funcionario {
public:
    Funcionario(const QString& nome, const QString& cargo);
    QString getNome() const;
    QString getCargo() const;

private:
    QString nome; // Nome do funcionário
    QString cargo; // Cargo do funcionário
};

#endif // FUNCIONARIO_H
