QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += \
            /usr/include/zebra-scanner/

LIBS += -L"/usr/lib/zebra-scanner/corescanner/" \
        -lcs-client -lcs-common -lhx711 -llgpio

SOURCES += \
    ConsoleSampleEventListener.cpp \
    ISO15434formatEnvelope.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ConsoleSampleEventListener.h \
    ISO15434formatEnvelope.h \
    mainwindow.h

FORMS += \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
