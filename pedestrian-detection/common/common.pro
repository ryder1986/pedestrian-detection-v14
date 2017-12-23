
include(../pedestrian-detection.pri)
SOURCES += \
    main.cpp \
    tool1.cpp \
    videosrc.cpp \
    pd.cpp \
    videowidget.cpp

HEADERS += \
    tool1.h \
    videosrc.h \
    pd.h \
    videowidget.h
CONFIG+=c++11
QT +=opengl

unix{
DEFINES +=IS_UNIX
}
win32{
DEFINES +=IS_WIN32
}

FORMS += \
    form.ui
