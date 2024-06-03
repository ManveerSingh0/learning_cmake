cmake_minimum_required(VERSION 3.22.1) #[==[ you can setup maximum version by ...<max_version>]==]
project(
  learning_cmake 
  DESCRIPTION "learning cmake by udemy course"
  VERSION 1.0.0
  LANGUAGES C CXX
)



#seting up standard for cpp
set(CMAKE_CXX_STANDARD          20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)


set(EXECUTABLE_NAME "main")
set(LIBRARY_NAME "library")

option(COMPILE_EXECUTABLE "Where to execute this file or not" OFF)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)


add_subdirectory(src)
add_subdirectory(inc)

#[==[ you can activate this by using cmake .. -DCOMPILE_EXECUTABLE=ON ]==]
#[==[you can also specifiy which generator to use 
      cmake .. -G "MinGW Makefiles" and other too 
]==]
if(COMPILE_EXECUTABLE)
  add_subdirectory(app)
endif()
