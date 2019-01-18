#-------------------------------------------------
#
# Project created by QtCreator 2018-10-23T18:26:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LidarTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mav_udp.cpp \
    led.cpp \
    mythread.cpp

HEADERS  += mainwindow.h \
    mav_udp.h \
    led.h \
    mythread.h

FORMS    += mainwindow.ui

QT += network

INCLUDEPATH += mavlink
