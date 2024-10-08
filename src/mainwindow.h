#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "client.h"
#include "room.h"
#include "reservation.h"
#include "employee.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class ControleHotel;
}
QT_END_NAMESPACE

/**
 * @class MainWindow
 * @brief The MainWindow class represents the main window of the hotel management system.
 *
 * This class provides the main interface for managing hotel clients, rooms, employees,
 * and reservations. It extends QMainWindow and interacts with UI components to handle
 * various actions such as creating reservations, adding clients, employees, and rooms.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructs a new MainWindow object.
     *
     * Initializes the main window, sets up the UI, and populates the comboboxes
     * for clients, rooms, and positions.
     *
     * @param parent The parent widget, if any.
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     * @brief Destroys the MainWindow object.
     *
     * Cleans up dynamically allocated memory, particularly the UI pointer.
     */
    ~MainWindow();

    /**
     * @brief Retrieves the iterator to the beginning of the reservations list.
     *
     * @return A const_iterator pointing to the beginning of the reservations list.
     */
    QList<Reservation>::const_iterator getReservationsBegin() const;

    /**
     * @brief Retrieves the iterator to the end of the reservations list.
     *
     * @return A const_iterator pointing to the end of the reservations list.
     */
    QList<Reservation>::const_iterator getReservationsEnd() const;

    /**
     * @brief Clears all the reservations from the system.
     */
    void clearReservationsList();

    /**
     * @brief Gets the current number of reservations.
     *
     * @return The number of reservations stored.
     */
    int getReservationsSize();

private slots:
    /**
     * @brief Handles the action when the access control button is clicked.
     *
     * Changes the current view in the stacked widget to the access control view.
     */
    void on_accessControlButton_clicked();

    /**
     * @brief Handles the action when the reserve button is clicked.
     *
     * Changes the current view in the stacked widget to the reservation creation view.
     */
    void on_reserveButton_clicked();

    /**
     * @brief Handles the action when the client control button is clicked.
     *
     * Changes the current view in the stacked widget to the client control view.
     */
    void on_clientControlButton_clicked();

    /**
     * @brief Handles the action when the room button is clicked.
     *
     * Changes the current view in the stacked widget to the room management view.
     */
    void on_roomButton_clicked();

    /**
     * @brief Populates the client combo box with the list of clients.
     *
     * Fetches clients and fills the combo box for client selection in the reservation process.
     */
    void setupClientComboBox();

    /**
     * @brief Populates the room combo box with the list of rooms.
     *
     * Fetches rooms and fills the combo box for room selection in the reservation process.
     */
    void setupRoomComboBox();

    /**
     * @brief Populates the position combo box with employee positions.
     *
     * Adds available employee positions such as "Recepcionista" and "Gerente" to the combo box.
     */
    void setupPositionComboBox();

    /**
     * @brief Handles the action when the conclude reservation button is clicked.
     *
     * Finalizes the reservation process by validating inputs and adding the reservation.
     */
    void on_concludeReserveButton_clicked();

    /**
     * @brief Handles the action when the remove reservation button is clicked.
     *
     * Removes the selected reservation and restores the client and room to availability.
     */
    void on_removeReservationButton_clicked();

    /**
     * @brief Handles the action when the conclude control access button is clicked.
     *
     * Adds a new employee with the specified name and position to the system.
     */
    void on_concludeControlAccessButton_clicked();

    /**
     * @brief Handles the action when the conclude control client button is clicked.
     *
     * Adds a new client with the specified details to the system.
     */
    void on_concludeControlClientButton_clicked();

    /**
     * @brief Handles the action when the conclude room access button is clicked.
     *
     * Adds a new room with the specified number and price to the system.
     */
    void on_concludeRoomAccessButton_clicked();

private:
    Ui::ControleHotel *ui; ///< The UI instance pointer for interacting with the user interface.
    QList<Client> clients; ///< List of all clients.
    QList<Room> rooms; ///< List of all rooms.
    QList<Reservation> reservations; ///< List of all reservations.
    QList<Employee> employees; ///< List of all employees.
};

#endif // MAINWINDOW_H
