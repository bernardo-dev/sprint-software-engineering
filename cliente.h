#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>

class Cliente {
public:
    Cliente(const QString& nome, const QString& documento, const QString& endereco, const QString& telefone);
    QString getNome() const;
    QString getDocumento() const;
    QString getEndereco() const;
    QString getTelefone() const;

private:
    QString nome;      // Nome do cliente
    QString documento; // Documento de identidade
    QString endereco;  // Endereço do cliente
    QString telefone;  // Telefone do cliente
};

#endif // CLIENTE_H
