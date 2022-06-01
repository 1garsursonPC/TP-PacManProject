QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    NotifierCollision.cpp \
    Personnage.cpp \
    animatedwidget.cpp \
    background.cpp \
    drawable.cpp \
    drawableelem.cpp \
    ennemis.cpp \
    interactive.cpp \
    main.cpp \
    movable.cpp \
    regularmove.cpp

HEADERS += \
    NotifierCollision.h \
    ObserverCollision.h \
    animatedwidget.h \
    background.h \
    consts.h \
    drawable.h \
    drawableelem.h \
    ennemis.h \
    interactive.h \
    movable.h \
    personnage.h \
    regularmove.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
# Un autre commentaire
