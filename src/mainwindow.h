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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_accessControlButton_clicked();

    void on_reserveButton_clicked();

    void on_clientControlButton_clicked();

    void on_roomButton_clicked();

    // void on_concludeButton_3_clicked();

    void setupClientComboBox();

    void setupRoomComboBox();

    void setupPositionComboBox();

    //void on_concludeControlClientButton_clicked();

    void on_concludeReserveButton_clicked();

    void on_removeReservationButton_clicked();

    void on_concludeControlAccessButton_clicked();

    void on_concludeControlClientButton_clicked();

    void on_concludeRoomAccessButton_clicked();

private:
    Ui::ControleHotel *ui;
    QList<Client> clients;
    QList<Room> rooms;
    QList<Reservation> reservations;
    QList<Employee> employees;
};
#endif // MAINWINDOW_H
