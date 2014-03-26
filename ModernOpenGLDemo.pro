TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    src/window.cpp \
    src/glexception.cpp

LIBS += -L/opt/local/lib -lglfw -lgl -lil

INCLUDEPATH += /opt/local/include

#QMAKE_CXXFLAGS += -std=gnu++11

HEADERS += \
    src/window.h \
    src/glexception.h
