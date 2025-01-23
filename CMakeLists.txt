cmake_minimum_required(VERSION 3.5)

project(03.homework)

add_executable(
	check_value
	random_value.h
	user_interface.h
	high_scores.h
	random_value.cpp
	user_interface.cpp
	check_value.cpp
	high_scores.cpp
)

#if(0)
add_executable(
	argument
	argument.cpp
)
#endif
