cmake_minimum_required(VERSION 3.30.0...3.30.0 FATAL_ERROR) 
#[===[as name suggest works as #include "anyfile"
	 set(CMAKE_PROJECT_INCLUDE_BEFORE "to_file" or CMAKE_PROJECT_${PROJECT_NAME}_INCLUDE_BEFORE
]===]



project(
	learning_cmake
	VERSION 1.0.0
	DESCRIPTION "Learning cmake by udemy course"
	HOMEPAGE_URL "https://www.youtube.com"
	LANGUAGES CXX C #CXX C for object C --> OBJCXX , for C# --> CSharp
)

set(CMAKE_CXX_STANDARD		26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS 	OFF)


#[===[message("THIS IS THE PROJECT NAME AT TOP LEVEL --> ${CMAKE_PROJECT_NAME}")]===]


#PROJECT_NAME will tell local project name instead of top level one  (MOST RECENTLY CALLED PROJECT)
message("THIS IS THE PROJECT NAME AT LOW  LEVEL --> ${PROJECT_NAME}")

#[===[ ${PROJECT_SOURCE_DIR} or ${CMAKE_PROJECT_SOURCE_DIR}
       this will print at recently called project , and this one will at top level
       ${CMAKE_CURRENT_SOURCE_DIR} --> the works as ${PROJECT_SOURCE_DIR}
]===]


#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${${PROJECT_NAME}_BINARY_DIR})

#PROJECT_IS_TOP_LEVEL --> return OFF or ON you can use ${CMAKE_PROJECT_NAME}_IS_TOP_LEVEL

#message("${PROJECT_IS_TOP_LEVEL} or ${${CMAKE_PROJECT_NAME}_IS_TOP_LEVEL}")

#message("${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")
#message("${${CMAKE_PROJECT_NAME}_DESCRIPTION}")
#message("${CMAKE_PROJECT_HOMEPAGE_URL}")


add_subdirectory(src)
add_executable(${CMAKE_PROJECT_NAME})


#you can create alias but can only use with specific functions
#add_executable(alias_executable ALIAS ${CMAKE_PROJECT_NAME})

#[===[set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES
					    OUTPUT_NAME_DEBUG ${CMAKE_PROJECT_NAME}_debug
)]===]

set(my_list "apple;banana;cherry")

#this add elements to the last in a list 
list(APPEND my_list "data" "nothing")
#this add elements to begin() in a list
list(PREPEND my_list "first_list")

list(INSERT my_list 2 "another_fruit")
list(REMOVE_ITEM my_list "another_fruit")

#this to get the data from list
list(GET my_list 3 first_element)
message("${my_list}")


target_sources(
	${CMAKE_PROJECT_NAME} PRIVATE
	main.cpp
)



#This tells where your project should install CMAKE_INSTALL_PREFIX and this checks if it is to default location CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT 

#install(TARGETS ${CMAKE_PROJECT_NAME} DESTINATION ${${CMAKE_PROJECT_NAME}_BINARY_DIR/bin})
