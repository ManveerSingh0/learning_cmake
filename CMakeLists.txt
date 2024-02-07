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

add_executable(main main.cpp)
