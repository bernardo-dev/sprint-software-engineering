#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QMetaType>

class Client {
public:
    // Construtor padrão (vazio)
    Client();

    // Construtor parametrizado
    Client(const QString& name, const QString& document, const QString& address, const QString& phone);

    // Construtor de cópia
    Client(const Client& other);

    // Operador de atribuição
    Client& operator=(const Client& other);

    // Destrutor virtual
    virtual ~Client();

    QString getName() const;
    QString getDocument() const;
    QString getAddress() const;
    QString getPhone() const;

private:
    QString name;      // Nome do cliente
    QString document;  // Documento de identificação
    QString address;   // Endereço do cliente
    QString phone;     // Número de telefone do cliente
};

Q_DECLARE_METATYPE(Client)

#endif // CLIENT_H
