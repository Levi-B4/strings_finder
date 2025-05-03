cmake_minimum_required(VERSION 3.5)

project(strings_finder LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(strings_finder main.cpp
    aho_cNode.h
    aho_cnode.h aho_cnode.cpp
    aho_corasick.h aho_corasick.cpp)

include(GNUInstallDirs)
install(TARGETS strings_finder
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
