#include "testefuncional.h"
#include <QPushButton>
#include <QStackedWidget>
#include <QComboBox>
#include <QDateEdit>

void TesteFuncional::testCreateReservation() {
    MainWindow w;

    // Dados para comparacao final
    Client clientIndex4("Bernardo", "123456789", "Av. Brasil, 456", "(11) 98765-4321");
    Room roomIndex4(104, 250.0);
    QDate initialDateIndex4(2024, 3, 2);
    QDate finalDateIndex4(2024, 3, 10);
    Reservation reservationTestIndex4(roomIndex4, clientIndex4, initialDateIndex4, finalDateIndex4);

    // Verifica Widget central
    auto centralWidget = w.findChild<QWidget *>("centralwidget");
    QVERIFY(centralWidget != nullptr);
    QTest::qWait(100);

    // Verifica PushButton Reserva e clica se OK
    auto reserveButton =  centralWidget->findChild<QPushButton *>("reserveButton");
    QVERIFY(reserveButton != nullptr);
    QTest::mouseClick(reserveButton, Qt::LeftButton);
    QTest::qWait(100);

    // Verifica Stacked Widget
    auto stackedWidget = centralWidget->findChild<QStackedWidget *>("stackedWidget");
    QVERIFY(stackedWidget != nullptr);
    QTest::qWait(100);

    // Verifica tela Reserva e criar reserva e clica
    auto reservePage = stackedWidget->findChild<QWidget *>("reservePage");
    QVERIFY(reservePage != nullptr);
    QTest::qWait(100);

    auto createReserve = reservePage->findChild<QWidget *>("create");
    QVERIFY(createReserve != nullptr);
    QTest::mouseClick(createReserve, Qt::LeftButton);
    QTest::qWait(100);

    // Verifica comboBox e clica (Cliente e Quarto)
    auto comboBoxClient = createReserve->findChild<QComboBox *>("clientReserveComboBox");
    QVERIFY(comboBoxClient != nullptr);
    QTest::mouseClick(comboBoxClient, Qt::LeftButton);
    QTest::qWait(100);

    comboBoxClient->setCurrentIndex(3);
    QVERIFY(comboBoxClient->currentIndex() == 3);
    auto comboBoxRoom = createReserve->findChild<QComboBox *>("roomReserveComboBox");
    QVERIFY(comboBoxRoom != nullptr);

    QTest::mouseClick(comboBoxRoom, Qt::LeftButton);
    QTest::qWait(100);
    comboBoxRoom->setCurrentIndex(3);
    QVERIFY(comboBoxRoom->currentIndex() == 3);

    // Verifica datas e seta valor
    auto initialDateEdit = createReserve->findChild<QDateEdit *>("initialReserveDateEdit");
    QVERIFY(initialDateEdit != nullptr);
    initialDateEdit->setDate(QDate(2024, 3, 2));
    QTest::qWait(100);

    auto endDateEdit = createReserve->findChild<QDateEdit *>("endReserveDateEdit");
    QVERIFY(endDateEdit != nullptr);
    endDateEdit->setDate(QDate(2024, 3, 10));

    QTest::qWait(100);

    // Verifica e clica em concluir
    auto concludeButton = createReserve->findChild<QPushButton *>("concludeReserveButton");
    QVERIFY(concludeButton != nullptr);
    QTest::mouseClick(concludeButton, Qt::LeftButton);

    QTest::qWait(100);

    // Percorre as reservas para encontrar a que acabou de ser criada
    bool foundReservation = false;

    for (auto it = w.getReservationsBegin(); it != w.getReservationsEnd(); ++it) {
        const Reservation& r = *it;
        // Aqui, você deve verificar as condições que definem a reserva que acabou de ser criada
        if (r.getClient().getDocument() == reservationTestIndex4.getClient().getDocument() &&
            r.getRoom().getNumber() == reservationTestIndex4.getRoom().getNumber() &&
            r.getCheckInDate() == reservationTestIndex4.getCheckInDate()        &&
            r.getCheckOutDate() == reservationTestIndex4.getCheckOutDate()) {
            foundReservation = true;
            break; // Se encontrado, saia do loop
        }
    }
    QVERIFY(foundReservation); // Verifica se a reserva foi encontrada

    // Limpa lista de reservas
    w.clearReservationsList();
}

// Teste para testar se nao cria Reserva com data invalida (Inicial depois da Final)
void TesteFuncional::testCreateReservationDateInvalid(){
    MainWindow w;

    // Dados para a reserva com data inválida
    Client clientIndex4("Bernardo", "123456789", "Av. Brasil, 456", "(11) 98765-4321");
    Room roomIndex4(104, 250.0);
    QDate initialDateIndex4(2024, 3, 10); // Data inicial
    QDate finalDateIndex4(2024, 3, 2);     // Data final anterior à inicial
    Reservation reservationTestIndex4(roomIndex4, clientIndex4, initialDateIndex4, finalDateIndex4);

    // Verifica Widget central
    auto centralWidget = w.findChild<QWidget *>("centralwidget");
    QVERIFY(centralWidget != nullptr);
    QTest::qWait(100);

    // Verifica PushButton Reserva e clica se OK
    auto reserveButton = centralWidget->findChild<QPushButton *>("reserveButton");
    QVERIFY(reserveButton != nullptr);
    QTest::mouseClick(reserveButton, Qt::LeftButton);
    QTest::qWait(100);

    // Verifica Stacked Widget
    auto stackedWidget = centralWidget->findChild<QStackedWidget *>("stackedWidget");
    QVERIFY(stackedWidget != nullptr);
    QTest::qWait(100);

    // Verifica tela Reserva e clica
    auto reservePage = stackedWidget->findChild<QWidget *>("reservePage");
    QVERIFY(reservePage != nullptr);
    QTest::qWait(100);

    auto createReserve = reservePage->findChild<QWidget *>("create");
    QVERIFY(createReserve != nullptr);
    QTest::mouseClick(createReserve, Qt::LeftButton);
    QTest::qWait(100);

    // Verifica comboBox e clica (Cliente e Quarto)
    auto comboBoxClient = createReserve->findChild<QComboBox *>("clientReserveComboBox");
    QVERIFY(comboBoxClient != nullptr);
    comboBoxClient->setCurrentIndex(3);
    QVERIFY(comboBoxClient->currentIndex() == 3);

    auto comboBoxRoom = createReserve->findChild<QComboBox *>("roomReserveComboBox");
    QVERIFY(comboBoxRoom != nullptr);
    comboBoxRoom->setCurrentIndex(3);
    QVERIFY(comboBoxRoom->currentIndex() == 3);

    // Verifica datas e seta valor
    auto initialDateEdit = createReserve->findChild<QDateEdit *>("initialReserveDateEdit");
    QVERIFY(initialDateEdit != nullptr);
    initialDateEdit->setDate(initialDateIndex4);
    QTest::qWait(100);

    auto endDateEdit = createReserve->findChild<QDateEdit *>("endReserveDateEdit");
    QVERIFY(endDateEdit != nullptr);
    endDateEdit->setDate(finalDateIndex4);
    QTest::qWait(100);

    // Verifica e clica em concluir
    auto concludeButton = createReserve->findChild<QPushButton *>("concludeReserveButton");
    QVERIFY(concludeButton != nullptr);
    QTest::mouseClick(concludeButton, Qt::LeftButton);

    QTest::qWait(100);

    // Verifica se o vetor de reservas está vazio
    bool isEmpty = true;
    for (auto it = w.getReservationsBegin(); it != w.getReservationsEnd(); ++it) {
        isEmpty = false; // Se encontramos pelo menos uma reserva, não está vazio
        break;
    }

    QVERIFY(isEmpty); // Verifica se o vetor de reservas está vazio
}

QTEST_MAIN(TesteFuncional)  // Essa linha cria a função main para os testes
