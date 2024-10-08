#ifndef TESTEFUNCIONAL_H
#define TESTEFUNCIONAL_H

#include <QtTest/QtTest>
#include "mainwindow.h"
#include "hotel.h"
#include "room.h"

class TesteFuncional : public QObject {
    Q_OBJECT

private slots:  // Mude de public slots para private slots
    void teste();
};

#endif // TESTEFUNCIONAL_H
