#include "funcionario.h"

Funcionario::Funcionario(const QString& nome, const QString& cargo) : nome(nome), cargo(cargo) {}

QString Funcionario::getNome() const {
    return nome;
}

QString Funcionario::getCargo() const {
    return cargo;
}
