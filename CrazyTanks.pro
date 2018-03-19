QT += core
QT -= gui

CONFIG += c++11

TARGET = CrazyTanks

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    game.cpp \
    mapmanager.cpp \
    player.cpp \
    enemy.cpp \
    enemymanager.cpp

HEADERS += \
    game.hpp \
    mapmanager.hpp \
    tank.hpp \
    player.hpp \
    enemy.hpp \
    enemymanager.hpp
