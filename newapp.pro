#-------------------------------------------------
#
# Project created by QtCreator 2018-01-27T12:16:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = newapp
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    loginwidget.cpp \
    masklabel.cpp \
<<<<<<< HEAD
    testwidget.cpp \
    index.cpp \
    friendlist.cpp \
    MegaScrollBar.cpp \
    ScrollButton.cpp
=======
    testwidget.cpp
>>>>>>> 190fa6dc33e7bdef75de5a6499fda4b3d0b66027

HEADERS += \
        mainwindow.h \
    loginwidget.h \
    masklabel.h \
<<<<<<< HEAD
    testwidget.h \
    index.h \
    friendlist.h \
    MegaScrollBar.h \
    ScrollButton.h
=======
    testwidget.h
>>>>>>> 190fa6dc33e7bdef75de5a6499fda4b3d0b66027

CONFIG += mobility
MOBILITY = 

DISTFILES += \
    template \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

