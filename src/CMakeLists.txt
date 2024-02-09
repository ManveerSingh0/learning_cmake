set(
    LIBRARY_SOURCE
    "player.cpp"
)
set(
    LIBRARY_HEADERS
    "player.h"
)


add_library(
    ${LIBRARY_NAME} STATIC 
    ${LIBRARY_SOURCE}
    ${LIBRARY_HEADERS}
)

target_include_directories(
    ${LIBRARY_NAME} PUBLIC 
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include"
    "${PROJECT_BINARY_DIR}/external/SFML/include/SFML"
)