QT       += core gui testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/client.cpp \
    src/employee.cpp \
    src/manager.cpp \
    src/hotel.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/room.cpp \
    src/reservation.cpp \
    src/testefuncional.cpp

HEADERS += \
    src/client.h \
    src/employee.h \
    src/manager.h \
    src/hotel.h \
    src/mainwindow.h \
    src/room.h \
    src/reservation.h \
    src/testefuncional.h

FORMS += \
    src/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
