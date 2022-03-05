QT       += core gui webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/main.cc \
    src/uestctools.cc \
    src/webview.cc

HEADERS += \
    src/uestctools.hh \
    src/webview.hh

FORMS += \
    src/uestctools.ui \
    src/webview.ui

RESOURCES += \
    resource/res.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    resource/icon.rc

RC_FILE += \
    resource/icon.rc

