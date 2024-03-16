#command to make graph in png file --> cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graph.png


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


#[==[
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)
]==]


set(LIBRARY_NAME "library")
option(COMPILE_EXECUTABLE "Whether to compile or not" OFF)

#add_git_submodule(external/json)

include(FetchContent)

FetchContent_Declare(
  nlohmann_json
  GIT_REPOSITORY https://github.com/nlohmann/json
  GIT_TAG v3.11.3
  GIT_SHALLOW  = True #this will not allow clone every single time 
)
FetchContent_MakeAvailable(nlohmann_json)

add_subdirectory(configured)
add_subdirectory(src)
add_subdirectory(app)
# if(COMPILE_EXECUTABLE)
#   add_subdirectory(app)
# else()
#   message("without executable compiling")
# endif()