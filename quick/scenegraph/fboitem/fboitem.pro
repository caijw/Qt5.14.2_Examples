QT += qml quick

HEADERS += fboinsgrenderer.h
SOURCES += fboinsgrenderer.cpp main.cpp

INCLUDEPATH += ../shared
HEADERS += ../shared/logorenderer.h
SOURCES += ../shared/logorenderer.cpp

RESOURCES += fboitem.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/quick/scenegraph/fboitem
INSTALLS += target

OTHER_FILES += \
    main.qml
