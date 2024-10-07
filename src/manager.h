#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

/**
 * @class Manager
 * @brief Represents a manager, which is a type of Employee with additional responsibilities.
 */
class Manager : public Employee {
public:
    /**
     * @brief Default constructor.
     * Creates an empty Manager object.
     */
    Manager();

    /**
     * @brief Parameterized constructor.
     * Initializes a Manager object with the provided name and position.
     * 
     * @param name The name of the manager.
     * @param position The position of the manager.
     */
    Manager(const QString& name, const QString& position);

    /**
     * @brief Copy constructor.
     * Creates a copy of another Manager object.
     * 
     * @param other The Manager object to be copied.
     */
    Manager(const Manager& other);

    /**
     * @brief Assignment operator.
     * Assigns the values from one Manager object to another.
     * 
     * @param other The Manager object to be assigned.
     * @return A reference to the assigned Manager object.
     */
    Manager& operator=(const Manager& other);

    /**
     * @brief Virtual destructor.
     * Destroys the Manager object.
     */
    virtual ~Manager();
};

#endif // MANAGER_H
