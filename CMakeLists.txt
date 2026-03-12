cmake_minimum_required(VERSION 3.10)
project(Playground)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable(main main.cpp ${SOURCES})