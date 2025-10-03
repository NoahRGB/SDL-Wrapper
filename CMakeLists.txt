cmake_minimum_required(VERSION 3.16)
project(sdl-wrapper)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

add_subdirectory(vendored/SDL EXCLUDE_FROM_ALL)

add_executable(sdl-wrapper 
  main.cpp
  application.h
  application.cpp
  
  graphics/graphics.h
  graphics/graphics-application.h
  graphics/graphics-application.cpp
)

target_link_libraries(sdl-wrapper PRIVATE SDL3::SDL3)

add_custom_target(run
  COMMAND sdl-wrapper
  DEPENDS sdl-wrapper
  WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)