QT += widgets

TEMPLATE = lib
CONFIG += staticlib c++14
TARGET = qtwaitingspinner

SOURCES += \
    waitingspinnerwidget.cpp \
    waitingspinnerdialog.cpp
    
HEADERS += \
    waitingspinnerwidget.h \
    waitingspinnerdialog.cpp

FORMS += \
    waitingspinnerdialog.ui
