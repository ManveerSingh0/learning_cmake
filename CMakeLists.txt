cmake_minimum_required(VERSION 3.22.1)
project(
  main
  DESCRIPTION "learning cmake"
  VERSION 1.0.0
  LANGUAGES CXX C
  )

#important for cpp files to set their standard version 
set(CMAKE_CXX_STANDARD          20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS       OFF)

set(LIBRARY_NAME "library")



option(COMPILE_EXECUTABLE "Whether to compile or not" OFF)

add_subdirectory(src)
if(COMPILE_EXECUTABLE)
  add_subdirectory(app)
else()
  message("without executable compiling")
endif()