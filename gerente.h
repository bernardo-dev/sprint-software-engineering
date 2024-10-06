#ifndef GERENTE_H
#define GERENTE_H

#include "funcionario.h"

class Gerente : public Funcionario {
public:
    Gerente(const QString& nome, const QString& cargo);
};

#endif // GERENTE_H
