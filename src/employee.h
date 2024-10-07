#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

/**
 * @class Employee
 * @brief Represents an employee with personal information such as name and position.
 */
class Employee {
public:
    /**
     * @brief Default constructor.
     * Creates an empty Employee object.
     */
    Employee();

    /**
     * @brief Parameterized constructor.
     * Initializes an Employee object with the provided name and position.
     * 
     * @param name The name of the employee.
     * @param position The position of the employee.
     */
    Employee(const QString& name, const QString& position);

    /**
     * @brief Copy constructor.
     * Creates a copy of another Employee object.
     * 
     * @param other The Employee object to be copied.
     */
    Employee(const Employee& other);

    /**
     * @brief Assignment operator.
     * Assigns the values from one Employee object to another.
     * 
     * @param other The Employee object to be assigned.
     * @return A reference to the assigned Employee object.
     */
    Employee& operator=(const Employee& other);

    /**
     * @brief Virtual destructor.
     * Destroys the Employee object.
     */
    virtual ~Employee();

    /**
     * @brief Gets the employee's name.
     * @return The employee's name as a QString.
     */
    QString getName() const;

    /**
     * @brief Gets the employee's position.
     * @return The employee's position as a QString.
     */
    QString getPosition() const;

private:
    QString name;      ///< The name of the employee.
    QString position;  ///< The position of the employee.
};

#endif // EMPLOYEE_H
