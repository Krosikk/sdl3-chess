cmake_minimum_required(VERSION 3.16)
project(sdl3-chess)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")


add_subdirectory(vendored/SDL3-3.2.4 EXCLUDE_FROM_ALL)
add_subdirectory(vendored/SDL3_image-3.2.0 EXCLUDE_FROM_ALL)

set(SOURCE_FILES src/main.c)

add_executable(chess ${SOURCE_FILES})

include_directories(include/)

target_link_libraries(chess PRIVATE SDL3_image::SDL3_image SDL3::SDL3)
