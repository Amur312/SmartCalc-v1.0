QT += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../Backend/sources/calc.c \
    ../../Backend/sources/rpn.c \
    ../../Backend/sources/stack.c \
    ./sources/main.cpp \
    ./sources/mainwindow.cpp \
    ./sources/qcustomplot.cpp \
    ./sources/credit_calc.cpp \
    ./sources/deposit_calc.cpp \
    ./sources/create_graph.cpp \
    ../../Backend/sources/validation.c

HEADERS += \
    ../../Backend/headers/calc.h \
    ../../Backend/headers/help.h \
    ../../Backend/headers/rpn.h \
    ../../Backend/headers/stack.h \
    ../../Backend/headers/help.h \
    ./headers/mainwindow.h \
    ./headers/qcustomplot.h \
    ../../Backend/headers/validation.h

FORMS += \
    ./forms/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
