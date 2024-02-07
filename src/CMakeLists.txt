add_library(
    library STATIC 
    player.cpp 
)


target_include_directories(
    library PUBLIC 
    "./"
)