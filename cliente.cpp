#include "cliente.h"

Cliente::Cliente(const QString& nome, const QString& documento, const QString& endereco, const QString& telefone)
    : nome(nome), documento(documento), endereco(endereco), telefone(telefone) {}

QString Cliente::getNome() const {
    return nome;
}

QString Cliente::getDocumento() const {
    return documento;
}

QString Cliente::getEndereco() const {
    return endereco;
}

QString Cliente::getTelefone() const {
    return telefone;
}
