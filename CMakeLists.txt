cmake_minimum_required(VERSION 3.28)
project(szkopul_cwiczenia_kl_3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/Lib)
add_executable(szkopul_cwiczenia_kl_3 main.cpp
        Zadania/anm/anm.cpp
        Zadania/anm/anm.h
        Zadania/kwdrt1n/kwdrt1n.cpp
        Zadania/kwdrt1n/kwdrt1n.h
        Zadania/prof/prof.cpp
        Zadania/prof/prof.h
        Zadania/mys/mys.cpp
        Zadania/mys/mys.h
        Zadania/tmp/tmp.cpp
        Zadania/tmp/tmp.h)
