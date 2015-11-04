#-------------------------------------------------
#
# Project created by QtCreator 2015-11-04T14:05:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SNI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    loadingwindow.cpp

HEADERS  += mainwindow.h \
    login.h \
    loadingwindow.h

FORMS    += mainwindow.ui \
    login.ui \
    loadingwindow.ui
