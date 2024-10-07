#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "client.h"

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

    void on_reportButton_clicked();

    // void on_concludeButton_3_clicked();

    void setupClientComboBox();

    void setupRoomComboBox();

private:
    Ui::ControleHotel *ui;
    QList<Client> clients;
};
#endif // MAINWINDOW_H
