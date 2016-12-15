QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SocialDashboardUi
TEMPLATE = app

HEADERS += displaywindow.h

SOURCES += main.cpp \
    displaywindow.cpp

RESOURCES = resources.qrc
