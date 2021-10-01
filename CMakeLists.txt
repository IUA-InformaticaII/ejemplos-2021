cmake_minimum_required(VERSION 3.13)
project(infoII)

set(CMAKE_CXX_STANDARD 14)

add_executable(potencia Recursividad/00-potencia.cpp)
add_executable(fibonacci Recursividad/01-fibonacci.cpp)
add_executable(ejPunto TDA/ejPunto.cpp TDA/lib/Point.cpp)
add_executable(archIn Archivos/input.cpp)
add_executable(archOut Archivos/output.cpp)
add_executable(archOutBinary Archivos/outputBin.cpp)
add_executable(puntero1 Punteros/puntero1.cpp)
add_executable(punteros_arreglos Punteros/punteros_arreglos.cpp)
add_executable(punteros_arreglos2 Punteros/punteros_arreglos2.cpp)
add_executable(funct_parameter Punteros/funct_parameter.cpp)
add_executable(malloc MemoriaDinamica/malloc.cpp)
add_executable(newDelete MemoriaDinamica/newDelete.cpp)
add_executable(newMatriz MemoriaDinamica/newMatriz.cpp)
add_executable(ej2 MemoriaDinamica/Ej2.cpp)

# Estructuras de datos
add_executable(test-lista  Estructuras/lista-test.cpp)