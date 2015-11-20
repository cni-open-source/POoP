TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

QMAKE_CXXFLAGS += -std=c++11

HEADERS += \
    IFeedable.h \
    Kot.h \
    Pies.h \
    Zwierz.h
