project(src_directory)



#[===[ target_include_directory finds header files]===]
message("${${PROJECT_NAME}_SOURCE_DIR}")
#message("${${PROJECT_NAME}_BINARY_DIR}")



set(MY_VAR "Global Value")

message("before value change ${MY_VAR}")

block()
	#this don't change value inside the block but in global value 
	set(MY_VAR "BLOCK_VALUE" PARENT_SCOPE)
	message("IN THE BLOCK SCOPE: ${MY_VAR}")
endblock()

message("After value change ${MY_VAR}")
