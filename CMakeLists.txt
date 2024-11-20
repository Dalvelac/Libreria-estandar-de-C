cmake_minimum_required(VERSION 3.29)
project(Libreria_estandar_de_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Libreria_estandar_de_C Funciones-comunes-de-C.c)
add_executable(Archivos Archivos.c)
add_executable(Cadenas Cadenas.c)

