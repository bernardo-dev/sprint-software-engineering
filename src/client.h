#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QMetaType>

/**
 * @class Client
 * @brief Represents a client with personal information such as name, document, address, and phone.
 */
class Client {
public:
    /**
     * @brief Default constructor.
     * Creates an empty Client object.
     */
    Client();

    /**
     * @brief Parameterized constructor.
     * Initializes a Client object with the provided name, document, address, and phone.
     * 
     * @param name The name of the client.
     * @param document The identification document of the client.
     * @param address The address of the client.
     * @param phone The phone number of the client.
     */
    Client(const QString& name, const QString& document, const QString& address, const QString& phone);

    /**
     * @brief Copy constructor.
     * Creates a copy of another Client object.
     * 
     * @param other The Client object to be copied.
     */
    Client(const Client& other);

    /**
     * @brief Assignment operator.
     * Assigns the values from one Client object to another.
     * 
     * @param other The Client object to be assigned.
     * @return A reference to the assigned Client object.
     */
    Client& operator=(const Client& other);

    /**
     * @brief Virtual destructor.
     * Destroys the Client object.
     */
    virtual ~Client();

    /**
     * @brief Gets the client's name.
     * @return The client's name.
     */
    QString getName() const;

    /**
     * @brief Gets the client's document.
     * @return The client's document.
     */
    QString getDocument() const;

    /**
     * @brief Gets the client's address.
     * @return The client's address.
     */
    QString getAddress() const;

    /**
     * @brief Gets the client's phone number.
     * @return The client's phone number.
     */
    QString getPhone() const;

private:
    QString name;      ///< The name of the client.
    QString document;  ///< The identification document of the client.
    QString address;   ///< The address of the client.
    QString phone;     ///< The phone number of the client.
};

/**
 * @brief Declares the Client type as a metatype for use in Qt's meta-object system.
 */
Q_DECLARE_METATYPE(Client)

#endif // CLIENT_H
