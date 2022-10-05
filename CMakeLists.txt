cmake_minimum_required(VERSION 3.20)
project(Calcio)

set(CMAKE_CXX_STANDARD 14)

add_executable(Calcio main.cpp Team.cpp Team.h Championship.cpp Championship.h)
set(CMAKE_EXE_LINKER_FLAGS "-static")
