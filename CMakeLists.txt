cmake_minimum_required(VERSION 3.20)
project(lib_LTC2481 C)

set(CMAKE_C_STANDARD 99)

# add dependencies
include(cpm/CPM.cmake)
CPMAddPackage("gh:JeroenVandezande/LowLevelCInterfaces@1.0.6")

add_library(lib_LTC2481 LTC2481.c)

target_include_directories (lib_LTC2481 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(lib_LTC2481 PUBLIC LowLevelCInterfaces m)
