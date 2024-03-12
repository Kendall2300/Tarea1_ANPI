cmake_minimum_required(VERSION 3.5)
project(Calculadora_Funtras VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(multiprecision-Boost_1_81_0)

# Qt finding package para versiones Qt5 y Qt6
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_executable(Calculadora_Funtras
        main.cpp
        funtras.h
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)




target_link_libraries(Calculadora_Funtras PUBLIC boost_multiprecision)
target_link_libraries(Calculadora_Funtras PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)



install(TARGETS Calculadora_Funtras
        BUNDLE DESTINATION .
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Calculadora_Funtras)
endif()