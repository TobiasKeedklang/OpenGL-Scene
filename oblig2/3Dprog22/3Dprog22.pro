QT          += core gui widgets opengl

TEMPLATE    = app
CONFIG      += c++17

TARGET      = 3D-programmering

SOURCES += main.cpp \
    camera.cpp \
    curve.cpp \
    door.cpp \
    heightmap.cpp \
    house.cpp \
    interactiveobject.cpp \
    light.cpp \
    line.cpp \
    logger.cpp \
    mainwindow.cpp \
    npc.cpp \
    plane.cpp \
    renderwindow.cpp \
    shader.cpp \
    stb_image.cpp \
    texture.cpp \
    tobject.cpp \
    vertex.cpp \
    visualobject.cpp

HEADERS += \
    camera.h \
    controller.h \
    curve.h \
    door.h \
    heightmap.h \
    house.h \
    interactiveobject.h \
    light.h \
    line.h \
    logger.h \
    mainwindow.h \
    npc.h \
    plane.h \
    renderwindow.h \
    shader.h \
    stb_image.h \
    texture.h \
    tobject.h \
    vertex.h \
    visualobject.h

FORMS += \
    mainwindow.ui

DISTFILES += \
    phongshader.frag \
    phongshader.vert \
    plainshader.frag \
    plainshader.vert \
    textureshader.frag \
    textureshader.vert
