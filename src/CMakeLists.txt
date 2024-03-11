add_library(
    library STATIC
    my_lib.cpp
)

target_include_directories(
    library PUBLIC 
    "./"
)