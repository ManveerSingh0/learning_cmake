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


set(EXECUTABLE_NAME main)
set(LIBRARY_NAME library)


set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_subdirectory(src)
add_subdirectory(app)
