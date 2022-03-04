QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addauthor.cpp \
    addcategory.cpp \
    addquote.cpp \
    deleteauthor.cpp \
    deletecategory.cpp \
    deletequote.cpp \
    editauthor.cpp \
    editcategory.cpp \
    editquote.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    addauthor.h \
    addcategory.h \
    addquote.h \
    deleteauthor.h \
    deletecategory.h \
    deletequote.h \
    editauthor.h \
    editcategory.h \
    editquote.h \
    mainwindow.h

FORMS += \
    addauthor.ui \
    addcategory.ui \
    addquote.ui \
    deleteauthor.ui \
    deletecategory.ui \
    deletequote.ui \
    editauthor.ui \
    editcategory.ui \
    editquote.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
