QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    decode.cpp \
    enter_value.cpp \
    main.cpp \
    mainwindow.cpp \
    second.cpp

HEADERS += \
    decode.h \
    enter_value.h \
    mainwindow.h \
    second.h

FORMS += \
    decode.ui \
    enter_value.ui \
    mainwindow.ui \
    second.ui

INCLUDEPATH += "..\AES"

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
