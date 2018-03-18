TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    game.cpp \
    tanks.cpp \
    bullet.cpp \
    mapmanager.cpp \
    enemymanager.cpp \
    render.cpp \
    player.cpp

HEADERS += \
    game.h \
    tanks.h \
    bullet.h \
    mapmanager.h \
    enemymanager.h \
    render.h \
    debug.h \
    player.h
