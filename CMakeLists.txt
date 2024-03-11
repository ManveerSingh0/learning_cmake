cmake_minimum_required(VERSION 3.22.1)
project(
  main
  DESCRIPTION "learning cmake"
  VERSION 1.0.0
  LANGUAGES CXX C
  )


add_library(
  library SHARED
  my_lib.cpp
  )

add_executable(
  ${PROJECT_NAME}
  main.cpp
  )

target_link_libraries(${PROJECT_NAME} PUBLIC library)
