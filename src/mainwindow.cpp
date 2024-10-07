#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include "src/room.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ControleHotel)
{
    ui->setupUi(this);
    setupClientComboBox();
    setupRoomComboBox();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_accessControlButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_reserveButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_clientControlButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_reportButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

// void MainWindow::on_concludeButton_3_clicked()
// {
//     QString name = ui->nameLineEdit_3->text();
//     QString document = ui->documentLineEdit_3->text();
//     QString address = ui->addressClientControlLineEdit->text();
//     QString phoneNumber = ui->cellphoneControlClientLineEdit->text();

// }

QList<Client> getClients() {
    Client cliente1("João Silva", "123456789", "Av. Brasil, 456", "(11) 98765-4321");
    Client cliente2("Maria Souza", "987654321", "Rua dos Limoeiros, 789", "(11) 91234-5678");
    Client cliente3("José Santos", "456789123", "Praça da Sé, 101", "(11) 99876-5432");
    Client cliente4("Bernardo", "123456789", "Av. Brasil, 456", "(11) 98765-4321");
    Client cliente5("Maria", "987654321", "Rua dos Limoeiros, 789", "(11) 91234-5678");
    Client cliente6("José", "456789123", "Praça da Sé, 101", "(11) 99876-5432");
    Client cliente7("João", "123456789", "Av. Brasil, 456", "(11) 98765-4321");
    Client cliente8("Maria", "987654321", "Rua dos Limoeiros, 789", "(11) 91234-5678");
    Client cliente9("José", "456789123", "Praça da Sé, 101", "(11) 99876-5432");
    Client cliente10("Guilherme", "123456789", "Av. Brasil, 456", "(11) 98765-4321");

    QList<Client> clients;
    clients << cliente1 << cliente2 << cliente3 << cliente4 << cliente5 << cliente6 << cliente7 << cliente8 << cliente9 << cliente10;

    return clients;
}

QList<Room> getRooms() {
    QList<Room> rooms;

    Room room1(101, 100.0);
    Room room2(102, 150.0);
    Room room3(103, 200.0);
    Room room4(104, 250.0);
    Room room5(105, 300.0);
    Room room6(106, 350.0);
    Room room7(107, 400.0);
    Room room8(108, 450.0);
    Room room9(109, 500.0);
    Room room10(110, 550.0);
    Room room11(111, 600.0);

    rooms << room1 << room2 << room3 << room4 << room5 << room6 << room7 << room8 << room9 << room10 << room11;

    return rooms;
}

void MainWindow::setupClientComboBox()
{
    // Assuming you have a method to get the list of clients
    QList<Client> clients = getClients(); // Replace with actual method to get clients

    // Populate the model with client data
    for (const Client &client : clients) {
        ui->clientReserveComboBox->addItem(client.getName());
    }
}

void MainWindow::setupRoomComboBox()
{
    QList<Room> rooms = getRooms();

    for (const Room &room : rooms) {
        ui->roomReserveComboBox->addItem(QString::number(room.getNumber()));
    }
}
