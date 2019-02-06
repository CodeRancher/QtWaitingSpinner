QT += widgets

TEMPLATE = lib
CONFIG += staticlib c++14
TARGET = qtwaitingspinner

QMAKE_CXXFLAGS += -DBOOST_LOG_DYN_LINK
QMAKE_CXXFLAGS += -pthread

SOURCES += \
    waitingspinnerwidget.cpp \
    waitingspinnerdialog.cpp
    
HEADERS += \
    waitingspinnerwidget.h \
    waitingspinnerdialog.h

FORMS += \
    waitingspinnerdialog.ui
