
include(../pedestrian-detection.pri)
SOURCES += \
    main.cpp \
    tool1.cpp \
    videosrc.cpp \
    pd.cpp

HEADERS += \
    tool1.h \
    videosrc.h \
    pd.h
CONFIG+=c++11


unix{
DEFINES +=IS_UNIX
}
win32{
DEFINES +=IS_WIN32
}
