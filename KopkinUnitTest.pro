#-------------------------------------------------
#
# Project created by QtCreator 2017-09-20T20:32:35
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_kopkinunittest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_kopkinunittest.cpp \
    kopkinclass.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    kopkinclass.h
