#-------------------------------------------------
#
# Project created by QtCreator 2018-01-27T12:16:04
#
#-------------------------------------------------

QT       += core gui
QT += network


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
    testwidget.cpp \
    index.cpp \
    friendlist.cpp \
    MegaScrollBar.cpp \
    ScrollButton.cpp \
    nbasetoastr.cpp \
    flisttopline.cpp \
    extrafont.cpp \
    flistbottomline.cpp \
    club.cpp \
    newfriendwidget.cpp \
    fitem.cpp \
    statusbar.cpp \
    dataprocess.cpp \
    newapptcpclient.cpp \
    networkdebughelper.cpp


HEADERS += \
        mainwindow.h \
    loginwidget.h \
    masklabel.h \
    testwidget.h \
    index.h \
    friendlist.h \
    MegaScrollBar.h \
    ScrollButton.h \
    nbasetoastr.h \
    nbaseuikit_global.h \
    flisttopline.h \
    extrafont.h \
    flistbottomline.h \
    club.h \
    newfriendwidget.h \
    fitem.h \
    statusbar.h \
    dataprocess.h \
    newapptcpclient.h \
    networkdebughelper.h




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
    android/gradlew.bat \
    android/res/values/styles.xml \
    android/src/an/qt/newactivity/Statusbar.java

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

