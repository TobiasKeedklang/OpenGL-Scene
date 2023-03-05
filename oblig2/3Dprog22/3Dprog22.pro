QT          += core gui widgets opengl

TEMPLATE    = app
CONFIG      += c++17

TARGET      = 3D-programmering

SOURCES += main.cpp \
    camera.cpp \
    door.cpp \
    house.cpp \
    interactiveobject.cpp \
    logger.cpp \
    mainwindow.cpp \
    plane.cpp \
    renderwindow.cpp \
    shader.cpp \
    tobject.cpp \
    vertex.cpp \
    visualobject.cpp

HEADERS += \
    camera.h \
    controller.h \
    door.h \
    house.h \
    interactiveobject.h \
    logger.h \
    mainwindow.h \
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
