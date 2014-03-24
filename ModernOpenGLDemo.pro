TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

LIBS += -L/opt/local/lib -lglfw -lgl

INCLUDEPATH += /opt/local/include

QMAKE_CXXFLAGS += -std=c++11
