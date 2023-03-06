QT          += core gui widgets opengl

TEMPLATE    = app
CONFIG      += c++17

TARGET      = 3D-programmering

SOURCES += main.cpp \
    camera.cpp \
    curve.cpp \
    door.cpp \
    house.cpp \
    interactiveobject.cpp \
    line.cpp \
    logger.cpp \
    mainwindow.cpp \
    npc.cpp \
    plane.cpp \
    renderwindow.cpp \
    shader.cpp \
    tobject.cpp \
    vertex.cpp \
    visualobject.cpp

HEADERS += \
    camera.h \
    controller.h \
    curve.h \
    door.h \
    house.h \
    interactiveobject.h \
    line.h \
    logger.h \
    mainwindow.h \
    npc.h \
    plane.h \
    renderwindow.h \
    shader.h \
    tobject.h \
    vertex.h \
    visualobject.h

FORMS += \
    mainwindow.ui

DISTFILES += \
    plainshader.frag \
    plainshader.vert
