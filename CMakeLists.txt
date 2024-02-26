cmake_minimum_required(VERSION 3.27)
project(Calculadora_FunTras)

set(CMAKE_CXX_STANDARD 14)

include_directories(.vscode)

add_executable(Calculadora_FunTras
        .vscode/fun_tras.cpp
        .vscode/fun_tras.h
        .vscode/main.cpp)

find_package(Boost)
IF (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
endif()
