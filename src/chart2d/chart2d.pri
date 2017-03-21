
DEFINES += QWT_DLL

HEADER_PATH = $$PWD/../../include/chart2d/

INCLUDEPATH +=  $$PWD/../../include/qwt \
                $${HEADER_PATH}

HEADERS +=  $${HEADER_PATH}/chart2d_global.h \
            $${HEADER_PATH}/ChartWidget.h

SOURCES +=  ChartWidget.cpp

LIBS += -L$$DESTDIR/ -lqwt
