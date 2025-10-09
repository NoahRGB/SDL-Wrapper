cmake_minimum_required(VERSION 3.16)
project(sdl-wrapper)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

add_subdirectory(vendored/SDL EXCLUDE_FROM_ALL)

add_executable(sdl-wrapper 
  main.cpp
  application.h
  application.cpp
  
  graphics/graphics.h
  graphics/graphics.cpp
  graphics/graphics-application.h
  graphics/graphics-application.cpp
  graphics/circle.h
  graphics/circle.cpp
  graphics/vec2.h
  graphics/vec2.cpp
  graphics/colour.h
  graphics/colour.cpp
)

target_link_libraries(sdl-wrapper PRIVATE SDL3::SDL3)

add_custom_target(run
  COMMAND sdl-wrapper
  DEPENDS sdl-wrapper
  WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)