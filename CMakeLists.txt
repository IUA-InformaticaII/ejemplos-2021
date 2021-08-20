cmake_minimum_required(VERSION 3.13)
project(infoII)

set(CMAKE_CXX_STANDARD 14)

add_executable(potencia Recursividad/00-potencia.cpp)
add_executable(fibonacci Recursividad/01-fibonacci.cpp)
add_executable(ejPunto TDA/ejPunto.cpp TDA/lib/Point.cpp)