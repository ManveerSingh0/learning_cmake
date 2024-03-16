add_library(
    ${LIBRARY_NAME} STATIC
    my_lib.cpp
)

target_include_directories(
    ${LIBRARY_NAME} PUBLIC 
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include/"
)

target_link_libraries(
    ${LIBRARY_NAME} PUBLIC 
    nlohmann_json::nlohmann_json
)