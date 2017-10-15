#-------------------------------------------------
#
# Project created by QtCreator 2017-10-02T13:10:24
#
#-------------------------------------------------

QT       += core gui\
                 xml
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = xmlTree
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui
