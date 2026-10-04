QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

TARGET = HotelUFSC
TEMPLATE = app

SOURCES += \
    main.cpp \
    janelainicial.cpp \
    janelacadastro.cpp \
    janelaprincipal.cpp \
    janelareservas.cpp \
    janeladetalhes.cpp \
    janelasobre.cpp \
    hospede.cpp

HEADERS += \
    janelainicial.h \
    janelacadastro.h \
    janelaprincipal.h \
    janelareservas.h \
    janeladetalhes.h \
    janelasobre.h \
    hospede.h

FORMS += \
    janelainicial.ui \
    janelacadastro.ui \
    janelaprincipal.ui \
    janelareservas.ui \
    janeladetalhes.ui \
    janelasobre.ui

RESOURCES += \
    resources.qrc

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
