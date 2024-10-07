/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControleHotel
{
public:
    QAction *actionTeste_1;
    QAction *actionTeste_2;
    QWidget *centralwidget;
    QPushButton *accessControlButton;
    QPushButton *reserveButton;
    QPushButton *clientControlButton;
    QPushButton *reportButton;
    QStackedWidget *stackedWidget;
    QWidget *controlAccessPage;
    QLabel *controlAccessPageLabel;
    QWidget *reservePage;
    QTabWidget *tabWidget;
    QWidget *create;
    QLabel *clientReserveLabel;
    QPushButton *concludeReserveButton;
    QComboBox *clientReserveComboBox;
    QLabel *roomReserveLabel;
    QComboBox *roomReserveComboBox;
    QLabel *periodReserveLabel;
    QDateEdit *initialReserveDateEdit;
    QDateEdit *endReserveDateEdit;
    QLabel *aReserveLabel;
    QWidget *clientsControlPage;
    QTabWidget *clientsContrlTabWidget;
    QWidget *create_3;
    QLineEdit *nameControlClientLineEdit;
    QLineEdit *documentControlClientLineEdit;
    QLineEdit *addressClientControlLineEdit;
    QLineEdit *cellphoneControlClientLineEdit;
    QLabel *nameControlClientLabel;
    QLabel *documentControlClientLabel;
    QLabel *addressClientControlLabel;
    QLabel *cellphoneClientControlLineEdit;
    QPushButton *concludeControlClientButton;
    QWidget *reportPage;
    QLabel *reportPageLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ControleHotel)
    {
        if (ControleHotel->objectName().isEmpty())
            ControleHotel->setObjectName("ControleHotel");
        ControleHotel->resize(602, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ControleHotel->sizePolicy().hasHeightForWidth());
        ControleHotel->setSizePolicy(sizePolicy);
        ControleHotel->setMinimumSize(QSize(500, 400));
        actionTeste_1 = new QAction(ControleHotel);
        actionTeste_1->setObjectName("actionTeste_1");
        actionTeste_2 = new QAction(ControleHotel);
        actionTeste_2->setObjectName("actionTeste_2");
        centralwidget = new QWidget(ControleHotel);
        centralwidget->setObjectName("centralwidget");
        accessControlButton = new QPushButton(centralwidget);
        accessControlButton->setObjectName("accessControlButton");
        accessControlButton->setGeometry(QRect(10, 40, 161, 23));
        QFont font;
        font.setPointSize(11);
        accessControlButton->setFont(font);
        reserveButton = new QPushButton(centralwidget);
        reserveButton->setObjectName("reserveButton");
        reserveButton->setGeometry(QRect(10, 70, 161, 23));
        reserveButton->setFont(font);
        clientControlButton = new QPushButton(centralwidget);
        clientControlButton->setObjectName("clientControlButton");
        clientControlButton->setGeometry(QRect(10, 100, 161, 23));
        clientControlButton->setFont(font);
        reportButton = new QPushButton(centralwidget);
        reportButton->setObjectName("reportButton");
        reportButton->setGeometry(QRect(10, 130, 161, 23));
        reportButton->setFont(font);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(200, 40, 391, 341));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        controlAccessPage = new QWidget();
        controlAccessPage->setObjectName("controlAccessPage");
        controlAccessPageLabel = new QLabel(controlAccessPage);
        controlAccessPageLabel->setObjectName("controlAccessPageLabel");
        controlAccessPageLabel->setGeometry(QRect(70, 50, 221, 16));
        stackedWidget->addWidget(controlAccessPage);
        reservePage = new QWidget();
        reservePage->setObjectName("reservePage");
        tabWidget = new QTabWidget(reservePage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 381, 331));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        create = new QWidget();
        create->setObjectName("create");
        clientReserveLabel = new QLabel(create);
        clientReserveLabel->setObjectName("clientReserveLabel");
        clientReserveLabel->setGeometry(QRect(20, 30, 65, 16));
        concludeReserveButton = new QPushButton(create);
        concludeReserveButton->setObjectName("concludeReserveButton");
        concludeReserveButton->setGeometry(QRect(150, 240, 181, 23));
        clientReserveComboBox = new QComboBox(create);
        clientReserveComboBox->setObjectName("clientReserveComboBox");
        clientReserveComboBox->setGeometry(QRect(100, 30, 241, 24));
        roomReserveLabel = new QLabel(create);
        roomReserveLabel->setObjectName("roomReserveLabel");
        roomReserveLabel->setGeometry(QRect(20, 80, 65, 16));
        roomReserveComboBox = new QComboBox(create);
        roomReserveComboBox->setObjectName("roomReserveComboBox");
        roomReserveComboBox->setGeometry(QRect(100, 70, 241, 24));
        periodReserveLabel = new QLabel(create);
        periodReserveLabel->setObjectName("periodReserveLabel");
        periodReserveLabel->setGeometry(QRect(20, 140, 65, 16));
        initialReserveDateEdit = new QDateEdit(create);
        initialReserveDateEdit->setObjectName("initialReserveDateEdit");
        initialReserveDateEdit->setGeometry(QRect(100, 140, 110, 23));
        endReserveDateEdit = new QDateEdit(create);
        endReserveDateEdit->setObjectName("endReserveDateEdit");
        endReserveDateEdit->setGeometry(QRect(250, 140, 110, 23));
        aReserveLabel = new QLabel(create);
        aReserveLabel->setObjectName("aReserveLabel");
        aReserveLabel->setGeometry(QRect(220, 140, 21, 16));
        tabWidget->addTab(create, QString());
        stackedWidget->addWidget(reservePage);
        clientsControlPage = new QWidget();
        clientsControlPage->setObjectName("clientsControlPage");
        clientsContrlTabWidget = new QTabWidget(clientsControlPage);
        clientsContrlTabWidget->setObjectName("clientsContrlTabWidget");
        clientsContrlTabWidget->setGeometry(QRect(0, 0, 381, 331));
        create_3 = new QWidget();
        create_3->setObjectName("create_3");
        nameControlClientLineEdit = new QLineEdit(create_3);
        nameControlClientLineEdit->setObjectName("nameControlClientLineEdit");
        nameControlClientLineEdit->setGeometry(QRect(150, 60, 181, 24));
        documentControlClientLineEdit = new QLineEdit(create_3);
        documentControlClientLineEdit->setObjectName("documentControlClientLineEdit");
        documentControlClientLineEdit->setGeometry(QRect(150, 110, 181, 24));
        addressClientControlLineEdit = new QLineEdit(create_3);
        addressClientControlLineEdit->setObjectName("addressClientControlLineEdit");
        addressClientControlLineEdit->setGeometry(QRect(150, 150, 181, 24));
        cellphoneControlClientLineEdit = new QLineEdit(create_3);
        cellphoneControlClientLineEdit->setObjectName("cellphoneControlClientLineEdit");
        cellphoneControlClientLineEdit->setGeometry(QRect(150, 190, 181, 24));
        nameControlClientLabel = new QLabel(create_3);
        nameControlClientLabel->setObjectName("nameControlClientLabel");
        nameControlClientLabel->setGeometry(QRect(40, 70, 65, 16));
        documentControlClientLabel = new QLabel(create_3);
        documentControlClientLabel->setObjectName("documentControlClientLabel");
        documentControlClientLabel->setGeometry(QRect(40, 110, 81, 16));
        addressClientControlLabel = new QLabel(create_3);
        addressClientControlLabel->setObjectName("addressClientControlLabel");
        addressClientControlLabel->setEnabled(true);
        addressClientControlLabel->setGeometry(QRect(40, 160, 81, 16));
        addressClientControlLabel->setTextFormat(Qt::TextFormat::AutoText);
        cellphoneClientControlLineEdit = new QLabel(create_3);
        cellphoneClientControlLineEdit->setObjectName("cellphoneClientControlLineEdit");
        cellphoneClientControlLineEdit->setGeometry(QRect(40, 200, 81, 16));
        concludeControlClientButton = new QPushButton(create_3);
        concludeControlClientButton->setObjectName("concludeControlClientButton");
        concludeControlClientButton->setGeometry(QRect(150, 240, 181, 23));
        clientsContrlTabWidget->addTab(create_3, QString());
        stackedWidget->addWidget(clientsControlPage);
        reportPage = new QWidget();
        reportPage->setObjectName("reportPage");
        reportPageLabel = new QLabel(reportPage);
        reportPageLabel->setObjectName("reportPageLabel");
        reportPageLabel->setGeometry(QRect(104, 80, 201, 20));
        stackedWidget->addWidget(reportPage);
        ControleHotel->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ControleHotel);
        statusbar->setObjectName("statusbar");
        ControleHotel->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        reportPageLabel->setBuddy(reportPageLabel);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ControleHotel);

        stackedWidget->setCurrentIndex(3);
        tabWidget->setCurrentIndex(0);
        clientsContrlTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ControleHotel);
    } // setupUi

    void retranslateUi(QMainWindow *ControleHotel)
    {
        ControleHotel->setWindowTitle(QCoreApplication::translate("ControleHotel", "Controle do Hotel", nullptr));
        actionTeste_1->setText(QCoreApplication::translate("ControleHotel", "Teste 1", nullptr));
        actionTeste_2->setText(QCoreApplication::translate("ControleHotel", "Teste 2", nullptr));
        accessControlButton->setText(QCoreApplication::translate("ControleHotel", "Controle de Acesso", nullptr));
        reserveButton->setText(QCoreApplication::translate("ControleHotel", "Reserva", nullptr));
        clientControlButton->setText(QCoreApplication::translate("ControleHotel", "Controle de Clientes", nullptr));
        reportButton->setText(QCoreApplication::translate("ControleHotel", "Relat\303\263rios", nullptr));
        controlAccessPageLabel->setText(QCoreApplication::translate("ControleHotel", "Tela de Controle de Acesso", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("ControleHotel", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        create->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        clientReserveLabel->setText(QCoreApplication::translate("ControleHotel", "Cliente", nullptr));
        concludeReserveButton->setText(QCoreApplication::translate("ControleHotel", "Concluir", nullptr));
        roomReserveLabel->setText(QCoreApplication::translate("ControleHotel", "Quarto", nullptr));
        periodReserveLabel->setText(QCoreApplication::translate("ControleHotel", "Per\303\255odo", nullptr));
        aReserveLabel->setText(QCoreApplication::translate("ControleHotel", "a", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(create), QCoreApplication::translate("ControleHotel", "Criar", nullptr));
#if QT_CONFIG(tooltip)
        clientsContrlTabWidget->setToolTip(QCoreApplication::translate("ControleHotel", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        create_3->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        nameControlClientLabel->setText(QCoreApplication::translate("ControleHotel", "Nome", nullptr));
        documentControlClientLabel->setText(QCoreApplication::translate("ControleHotel", "Documento", nullptr));
        addressClientControlLabel->setText(QCoreApplication::translate("ControleHotel", "Endere\303\247o", nullptr));
        cellphoneClientControlLineEdit->setText(QCoreApplication::translate("ControleHotel", "Telefone", nullptr));
        concludeControlClientButton->setText(QCoreApplication::translate("ControleHotel", "Concluir", nullptr));
        clientsContrlTabWidget->setTabText(clientsContrlTabWidget->indexOf(create_3), QCoreApplication::translate("ControleHotel", "Criar", nullptr));
        reportPageLabel->setText(QCoreApplication::translate("ControleHotel", "Tela de Reserva", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControleHotel: public Ui_ControleHotel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
