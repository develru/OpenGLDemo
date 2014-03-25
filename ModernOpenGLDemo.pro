TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    src/window.cpp

LIBS += -L/opt/local/lib -lglfw -lgl -lil

INCLUDEPATH += /opt/local/include

QMAKE_CXXFLAGS += -std=c++11

HEADERS += \
    src/window.h
