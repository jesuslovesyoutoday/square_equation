cmake_minimum_required(VERSION 3.16)
project(sq_eq)

set(LANGUAGE CXX)

add_executable(sq_eq
	main.c
	solver.c
	comp.c
	output.c
	input.c)
target_link_libraries(sq_eq m)
