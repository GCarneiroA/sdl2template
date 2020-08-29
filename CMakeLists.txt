

cmake_minimum_required(VERSION 3.18)

project(sdl2template VERSION 0.1)       # Place your project name here

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)

add_subdirectory(src)
