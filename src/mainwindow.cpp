#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include <QMessageBox>
#include "src/room.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ControleHotel)
{
    ui->setupUi(this);
    reservations.clear();
    rooms.clear();
    clients.clear();
    employees.clear();
    setupClientComboBox();
    setupRoomComboBox();
    setupPositionComboBox();
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

void MainWindow::on_roomButton_clicked()
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
    clients = getClients(); // Replace with actual method to get clients

    // Populate the model with client data
    for (const Client &client : clients) {
        ui->clientReserveComboBox->addItem(client.getName(), QVariant::fromValue(client));
    }
}

void MainWindow::setupRoomComboBox()
{
    rooms = getRooms();

    for (const Room &room : rooms) {
        ui->roomReserveComboBox->addItem(QString::number(room.getNumber()), QVariant::fromValue(room));
    }
}

void MainWindow::setupPositionComboBox(){
    ui->positionControlAccessComboBox->addItem("Recepcionista");
    ui->positionControlAccessComboBox->addItem("Gerente");
}



void MainWindow::on_concludeReserveButton_clicked()
{
    int clientIndex = ui->clientReserveComboBox->currentIndex();
    int roomIndex = ui->roomReserveComboBox->currentIndex();

    QDate initialDate = ui->initialReserveDateEdit->date();
    QDate endDate = ui->endReserveDateEdit->date();

    if((initialDate.daysTo(endDate) < 1)){
        QMessageBox::information(this, "ERRO", "Falha ao criar reserva, Período de tempo inválido", QMessageBox::Close);
        return;
    }

    if(clientIndex == -1 || roomIndex == -1){
        QMessageBox::information(this, "ERRO", "Falha ao criar reserva", QMessageBox::Close);
        return;
    }

    Client selectedClient = ui->clientReserveComboBox->itemData(clientIndex).value<Client>();
    Room selectedRoom = ui->roomReserveComboBox->itemData(roomIndex).value<Room>();

    ui->clientReserveComboBox->removeItem(clientIndex);
    ui->roomReserveComboBox->removeItem(roomIndex);


    Reservation thisReservation(selectedRoom, selectedClient, initialDate, endDate);

    reservations << thisReservation;

    qDebug() << "Reservas no hotel:";
    for (const Reservation &i : reservations) {
        qDebug() << "Quarto:" << i.getRoom().getNumber()
        << ", Cliente:" << i.getClient().getName()
        << ", Data de Entrada:" << i.getCheckInDate()
        << ", Data de Saída:" << i.getCheckOutDate();
    }
    //mensagem de adicionado com sucesso

    ui->removeReservationComboBox->addItem((thisReservation.getClient().getName() + " - Quarto: " + QString::number(thisReservation.getRoom().getNumber())), QVariant::fromValue(thisReservation));
    QMessageBox::information(this, "Sucesso", "Reserva para " + selectedClient.getName() + " adicionado com sucesso", QMessageBox::Close);

}


void MainWindow::on_removeReservationButton_clicked()
{
    int reservationIndex = ui->removeReservationComboBox->currentIndex();

    if(reservationIndex == -1){
        return;
    }

    Reservation selectedReservation = ui->removeReservationComboBox->itemData(reservationIndex).value<Reservation>();

    ui->removeReservationComboBox->removeItem(reservationIndex);
    reservations.removeAt(reservationIndex);
    ui->clientReserveComboBox->addItem(selectedReservation.getClient().getName(), QVariant::fromValue(selectedReservation.getClient()));
    ui->roomReserveComboBox->addItem(QString::number(selectedReservation.getRoom().getNumber()), QVariant::fromValue(selectedReservation.getRoom()));


    // qDebug() << "Reservas no hotel:";
    // for (const Reservation &i : reservations) {
    //     qDebug() << "Quarto:" << i.getRoom().getNumber()
    //     << ", Cliente:" << i.getClient().getName()
    //     << ", Data de Entrada:" << i.getCheckInDate()
    //     << ", Data de Saída:" << i.getCheckOutDate();
    // }



}







void MainWindow::on_concludeControlAccessButton_clicked()
{

    int index = ui->positionControlAccessComboBox->currentIndex();
    if(index == -1 || ui->nameControlAccessLineEdit->text().isEmpty()){
        ui->nameControlAccessLineEdit->clear();
        QMessageBox::information(this, "ERRO", "Falha ao adicionar Usuário", QMessageBox::Close);
        return;
    }
    QString position = ui->positionControlAccessComboBox->itemText(index);
    QString name = ui->nameControlAccessLineEdit->text();

    Employee e(name, position);

    employees << e;
    ui->nameControlAccessLineEdit->clear();
    QMessageBox::information(this, "Sucesso", "Usuário " + name + " adicionado com sucesso", QMessageBox::Close);

}


void MainWindow::on_concludeControlClientButton_clicked()
{
    QString name = ui->nameControlClientLineEdit->text();
    QString document = ui->documentControlClientLineEdit->text();
    QString address = ui->addressClientControlLineEdit->text();
    QString phone = ui->cellphoneControlClientLineEdit->text();

    if(name.isEmpty() || document.isEmpty() || address.isEmpty() || phone.isEmpty()){
        QMessageBox::information(this, "ERRO", "Falha ao adicionar Cliente", QMessageBox::Close);
        return;
    }

    Client c(name, document, address, phone);
    clients << c;

    ui->clientReserveComboBox->addItem(c.getName(), QVariant::fromValue(c));

    ui->nameControlClientLineEdit->clear();
    ui->documentControlClientLineEdit->clear();
    ui->addressClientControlLineEdit->clear();
    ui->cellphoneControlClientLineEdit->clear();

    QMessageBox::information(this, "Sucesso", "Cliente  " + name + " adicionado com sucesso", QMessageBox::Close);
}


void MainWindow::on_concludeRoomAccessButton_clicked()
{
    int roomNumber = ui->roomControlspinBox->value();
    double roomPrice = ui->roomControldoubleSpinBox->value();

    if(!roomNumber || !roomPrice){
        QMessageBox::information(this, "ERRO", "Falha ao adicionar quarto", QMessageBox::Close);
        return;
    }

    Room r(roomNumber, roomPrice);
    ui->roomReserveComboBox->addItem(QString::number(r.getNumber()), QVariant::fromValue(r));

    ui->roomControlspinBox->clear();
    ui->roomControldoubleSpinBox->clear();

    QMessageBox::information(this, "Sucesso", "Quarto  " + QString::number(roomNumber) + " adicionado com sucesso", QMessageBox::Close);

}

QList<Reservation>::const_iterator MainWindow::getReservationsBegin() const {
    return reservations.constBegin();
}

QList<Reservation>::const_iterator MainWindow::getReservationsEnd() const {
    return reservations.constEnd();
}


