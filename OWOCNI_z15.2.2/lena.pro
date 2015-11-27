TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp \
    kolor.cpp \
    obraz.cpp \
    ppm.cpp

HEADERS += \
    kolor.h \
    obraz.h \
    ppm.h

