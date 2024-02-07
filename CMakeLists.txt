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
#to add multiple files/directories name use this function
#define src first because these are libraries and they need to be used in our main function
add_subdirectory(src)
add_subdirectory(app)


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