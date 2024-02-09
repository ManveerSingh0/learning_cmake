set( SOURCES
    "main.cpp"
)
set(SFML_LIBRARIES
    "${PROJECT_BINARY_DIR}/external/SFML/include/SFML/Graphics.hpp"
    "${PROJECT_BINARY_DIR}/external/SFML/include/SFML/Audio.hpp"
)

add_executable(${EXECUTABLE_NAME} ${SOURCES})
target_link_libraries(${EXECUTABLE_NAME} PUBLIC 
    ${LIBRARY_NAME}
    ${SFML_LIBRARIES}
    )


set_target_properties(main PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)