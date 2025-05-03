cmake_minimum_required(VERSION 3.5)

project(strings_finder LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(strings_finder main.cpp
    aho_cNode.h)

include(GNUInstallDirs)
install(TARGETS strings_finder
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
