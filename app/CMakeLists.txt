add_executable(
  ${CMAKE_PROJECT_NAME}
  main.cpp
  )
target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC 
  ${LIBRARY_NAME}
  nlohmann_json
)