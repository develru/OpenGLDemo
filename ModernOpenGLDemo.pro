TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

LIBS += -L/opt/local/lib -lglfw

INCLUDEPATH += /opt/local/include

