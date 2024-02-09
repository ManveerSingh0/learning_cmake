# Create Source and CMakeFi1e
# mkdir build
# cd build
# cmake ..  - Generting the Build Files / Configure the Projec
# cmake --build .
#./ Executable


#This define the version that every other programmer hsa to use
cmake_minimum_required(VERSION 3.22.1)
#now the name of the project , this is our version of this app more like defining something
project(
    learing_cmake 
    VERSION 1.0.0 
    LANGUAGES C CXX #CXX instead of c++ 
) 



set(CMAKE_CXX_STANDARD              20)
set(CMAKE_CXX_STANDARD_REQUIRED     ON)
set(CMAKE_CXX_EXTENSIONS            OFF)


#variables in cmake
set(LIBRARY_NAME library)
set(EXECUTABLE_NAME main)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/") #you specified where the module files are
include(addgitsubmodules) #this include cmake MODULE files only 

#to turn this on while compiling not here type 
#cmake .. -DCOMPILE_EXECUTABLE=ON //variable name without space after -D 
option(COMPILE_EXECUTABLE "whether to compile or not" ON)

#to add multiple files/directories name use this function
#define src first because these are libraries and they need to be used in our main function
add_git_submodule(external/SFML)
add_subdirectory(config)
add_subdirectory(src)
if(COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message("nope")
endif()

#[===[
--to add libraries use this function
--not putting them in different files to improve code


add_library(
    library STATIC 
    src/player.cpp 
    src/player.h
)


add_executable(main app/main.cpp) 



--you need to tell compiler that you have executable 
and library to link , to do that use this functiona 

-- target_link_libraries(main PUBLIC library)

]===] 
#To specificly execute file like library only use this 
#cmake --build . --target library