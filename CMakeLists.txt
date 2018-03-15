cmake_minimum_required(VERSION 2.8.9)
project(libGraph)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#headers
include_directories(include)

#sources
file(GLOB SOURCES "src/*.cpp")

#generate as shared library
add_library(Graph SHARED ${SOURCES})

#installation in /usr/lib - "sudo make install"
install(TARGETS Graph DESTINATION /usr/lib)
