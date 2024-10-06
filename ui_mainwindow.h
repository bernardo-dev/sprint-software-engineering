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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
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
    QPushButton *pushButton_6;
    QWidget *reservePage;
    QTabWidget *tabWidget;
    QWidget *create;
    QLabel *clientReserveLabel;
    QPushButton *concludeReserveButton;
    QComboBox *clientReserveComboBox;
    QLabel *roomReserveLabel;
    QComboBox *roomReserveComboBox;
    QWidget *clientsControlPage;
    QTabWidget *clientsContrlTabWidget;
    QWidget *create_3;
    QLineEdit *nameLineEdit_3;
    QLineEdit *documentLineEdit_3;
    QLineEdit *addressLineEdit_3;
    QLineEdit *cellphoneLineEdit_3;
    QLabel *nameLabel_3;
    QLabel *documentLabel_3;
    QLabel *addressLabel_3;
    QLabel *cellphoneLabel_3;
    QPushButton *concludeButton_3;
    QWidget *reportPage;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(602, 392);
        actionTeste_1 = new QAction(MainWindow);
        actionTeste_1->setObjectName("actionTeste_1");
        actionTeste_2 = new QAction(MainWindow);
        actionTeste_2->setObjectName("actionTeste_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        accessControlButton = new QPushButton(centralwidget);
        accessControlButton->setObjectName("accessControlButton");
        accessControlButton->setGeometry(QRect(10, 40, 161, 23));
        reserveButton = new QPushButton(centralwidget);
        reserveButton->setObjectName("reserveButton");
        reserveButton->setGeometry(QRect(10, 70, 161, 23));
        clientControlButton = new QPushButton(centralwidget);
        clientControlButton->setObjectName("clientControlButton");
        clientControlButton->setGeometry(QRect(10, 100, 161, 23));
        reportButton = new QPushButton(centralwidget);
        reportButton->setObjectName("reportButton");
        reportButton->setGeometry(QRect(10, 130, 161, 23));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(200, 40, 391, 341));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        controlAccessPage = new QWidget();
        controlAccessPage->setObjectName("controlAccessPage");
        pushButton_6 = new QPushButton(controlAccessPage);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 20, 80, 23));
        stackedWidget->addWidget(controlAccessPage);
        reservePage = new QWidget();
        reservePage->setObjectName("reservePage");
        tabWidget = new QTabWidget(reservePage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 381, 331));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
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
        clientReserveComboBox->setGeometry(QRect(110, 30, 241, 24));
        roomReserveLabel = new QLabel(create);
        roomReserveLabel->setObjectName("roomReserveLabel");
        roomReserveLabel->setGeometry(QRect(20, 130, 65, 16));
        roomReserveComboBox = new QComboBox(create);
        roomReserveComboBox->setObjectName("roomReserveComboBox");
        roomReserveComboBox->setGeometry(QRect(110, 130, 241, 24));
        tabWidget->addTab(create, QString());
        stackedWidget->addWidget(reservePage);
        clientsControlPage = new QWidget();
        clientsControlPage->setObjectName("clientsControlPage");
        clientsContrlTabWidget = new QTabWidget(clientsControlPage);
        clientsContrlTabWidget->setObjectName("clientsContrlTabWidget");
        clientsContrlTabWidget->setGeometry(QRect(0, 0, 381, 331));
        create_3 = new QWidget();
        create_3->setObjectName("create_3");
        nameLineEdit_3 = new QLineEdit(create_3);
        nameLineEdit_3->setObjectName("nameLineEdit_3");
        nameLineEdit_3->setGeometry(QRect(150, 60, 181, 24));
        documentLineEdit_3 = new QLineEdit(create_3);
        documentLineEdit_3->setObjectName("documentLineEdit_3");
        documentLineEdit_3->setGeometry(QRect(150, 110, 181, 24));
        addressLineEdit_3 = new QLineEdit(create_3);
        addressLineEdit_3->setObjectName("addressLineEdit_3");
        addressLineEdit_3->setGeometry(QRect(150, 150, 181, 24));
        cellphoneLineEdit_3 = new QLineEdit(create_3);
        cellphoneLineEdit_3->setObjectName("cellphoneLineEdit_3");
        cellphoneLineEdit_3->setGeometry(QRect(150, 190, 181, 24));
        nameLabel_3 = new QLabel(create_3);
        nameLabel_3->setObjectName("nameLabel_3");
        nameLabel_3->setGeometry(QRect(40, 70, 65, 16));
        documentLabel_3 = new QLabel(create_3);
        documentLabel_3->setObjectName("documentLabel_3");
        documentLabel_3->setGeometry(QRect(40, 110, 65, 16));
        addressLabel_3 = new QLabel(create_3);
        addressLabel_3->setObjectName("addressLabel_3");
        addressLabel_3->setGeometry(QRect(40, 160, 65, 16));
        cellphoneLabel_3 = new QLabel(create_3);
        cellphoneLabel_3->setObjectName("cellphoneLabel_3");
        cellphoneLabel_3->setGeometry(QRect(40, 200, 65, 16));
        concludeButton_3 = new QPushButton(create_3);
        concludeButton_3->setObjectName("concludeButton_3");
        concludeButton_3->setGeometry(QRect(150, 240, 181, 23));
        clientsContrlTabWidget->addTab(create_3, QString());
        stackedWidget->addWidget(clientsControlPage);
        reportPage = new QWidget();
        reportPage->setObjectName("reportPage");
        stackedWidget->addWidget(reportPage);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        clientsContrlTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionTeste_1->setText(QCoreApplication::translate("MainWindow", "Teste 1", nullptr));
        actionTeste_2->setText(QCoreApplication::translate("MainWindow", "Teste 2", nullptr));
        accessControlButton->setText(QCoreApplication::translate("MainWindow", "Controle de Acesso", nullptr));
        reserveButton->setText(QCoreApplication::translate("MainWindow", "Reserva", nullptr));
        clientControlButton->setText(QCoreApplication::translate("MainWindow", "Controle de Clientes", nullptr));
        reportButton->setText(QCoreApplication::translate("MainWindow", "Relat\303\263rios", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        create->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        clientReserveLabel->setText(QCoreApplication::translate("MainWindow", "Cliente", nullptr));
        concludeReserveButton->setText(QCoreApplication::translate("MainWindow", "Concluir", nullptr));
        roomReserveLabel->setText(QCoreApplication::translate("MainWindow", "Quarto", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(create), QCoreApplication::translate("MainWindow", "Criar", nullptr));
#if QT_CONFIG(tooltip)
        clientsContrlTabWidget->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        create_3->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        nameLabel_3->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        documentLabel_3->setText(QCoreApplication::translate("MainWindow", "Documento", nullptr));
        addressLabel_3->setText(QCoreApplication::translate("MainWindow", "Endere\303\247o", nullptr));
        cellphoneLabel_3->setText(QCoreApplication::translate("MainWindow", "Telefone", nullptr));
        concludeButton_3->setText(QCoreApplication::translate("MainWindow", "Concluir", nullptr));
        clientsContrlTabWidget->setTabText(clientsContrlTabWidget->indexOf(create_3), QCoreApplication::translate("MainWindow", "Criar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
