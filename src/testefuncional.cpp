#include "testefuncional.h"
#include <QPushButton>
#include <QStackedWidget>
#include <QComboBox>
#include <QDateEdit>

void TesteFuncional::teste() {
    MainWindow w;

    // Verifica Widget central
    auto centralWidget = w.findChild<QWidget *>("centralwidget");
    QVERIFY(centralWidget != nullptr);
    QTest::qWait(100);

    // Verifica PushButton Reserva e clica se OK
    auto reserveButton =  centralWidget->findChild<QPushButton *>("reserveButton");
    QVERIFY(reserveButton != nullptr);
    QTest::mouseClick(reserveButton, Qt::LeftButton);
    QTest::qWait(1000);

    // Verifica Stacked Widget
    auto stackedWidget = centralWidget->findChild<QStackedWidget *>("stackedWidget");
    QVERIFY(stackedWidget != nullptr);
    QTest::qWait(1000);

    // Verifica tela Reserva e criar reserva e clica
    auto reservePage = stackedWidget->findChild<QWidget *>("reservePage");
    QVERIFY(reservePage != nullptr);
    QTest::qWait(1000);

    auto createReserve = reservePage->findChild<QWidget *>("create");
    QVERIFY(createReserve != nullptr);
    QTest::mouseClick(createReserve, Qt::LeftButton);
    QTest::qWait(1000);

    // Verifica comboBox e clica (Cliente e Quarto)
    auto comboBoxClient = createReserve->findChild<QComboBox *>("clientReserveComboBox");
    QVERIFY(comboBoxClient != nullptr);
    QTest::mouseClick(comboBoxClient, Qt::LeftButton);
    QTest::qWait(1000);

    comboBoxClient->setCurrentIndex(3);
    QVERIFY(comboBoxClient->currentIndex() == 3);
    auto comboBoxRoom = createReserve->findChild<QComboBox *>("roomReserveComboBox");
    QVERIFY(comboBoxRoom != nullptr);

    QTest::mouseClick(comboBoxRoom, Qt::LeftButton);
    QTest::qWait(1000);
    comboBoxRoom->setCurrentIndex(3);
    QVERIFY(comboBoxRoom->currentIndex() == 3);

    // Verifica datas e seta valor
    auto initialDateEdit = createReserve->findChild<QDateEdit *>("initialReserveDateEdit");
    QVERIFY(initialDateEdit != nullptr);
    initialDateEdit->setDate(QDate(2024, 3, 2));
    QTest::qWait(1000);

    auto endDateEdit = createReserve->findChild<QDateEdit *>("endReserveDateEdit");
    QVERIFY(endDateEdit != nullptr);
    endDateEdit->setDate(QDate(2024, 3, 10));

    QTest::qWait(1000);

    // Verifica e clica em concluir
    auto concludeButton = createReserve->findChild<QPushButton *>("concludeReserveButton");
    QVERIFY(concludeButton != nullptr);
    QTest::mouseClick(concludeButton, Qt::LeftButton);

    QTest::qWait(1000);

}

QTEST_MAIN(TesteFuncional)  // Essa linha cria a função main para os testes
