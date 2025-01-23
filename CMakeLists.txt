cmake_minimum_required(VERSION 3.5)

project(03.homework)

add_executable(
	main_basic
	random_value.h
	user_interface.h
	high_scores.h
	argument.h
	random_value.cpp
	user_interface.cpp
	main_basic.cpp
	high_scores.cpp
	argument.cpp
)


add_executable(
	main_print_only_max
	random_value.h
	user_interface.h
	high_scores.h
	argument.h
	random_value.cpp
	user_interface.cpp
	main_print_only_max.cpp
	high_scores.cpp
	argument.cpp
)


add_executable(
	main_save_only_max
	random_value.h
	user_interface.h
	high_scores.h
	argument.h
	random_value.cpp
	user_interface.cpp
	main_save_only_max.cpp
	high_scores.cpp
	argument.cpp
)