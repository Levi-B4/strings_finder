cmake_minimum_required(VERSION 3.5)

project(AhoCAlgo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AhoCAlgo main.cpp
    ahonode.h ahonode.cpp
    ahoctrie.h ahoctrie.cpp)

include(GNUInstallDirs)
install(TARGETS AhoCAlgo
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
