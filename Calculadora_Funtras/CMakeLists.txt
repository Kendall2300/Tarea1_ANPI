cmake_minimum_required(VERSION 3.27)
project(Calculadora_Funtras)

set(CMAKE_CXX_STANDARD 17)

message(STATUS "start running cmake...")

find_package(Boost 1.84.0 COMPONENTS system filesystem REQUIRED)

if(Boost_FOUND)

    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")

    include_directories(${Boost_INCLUDE_DIRS})

endif()

add_executable(Calculadora_Funtras main.cpp
        funtras.cpp
        funtras.h

)