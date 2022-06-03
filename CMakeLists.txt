cmake_minimum_required(VERSION 3.12)

project(main)

set(CMAKE_CXX_STANDART 17)

# Add sub directories
add_subdirectory(formatter)
add_subdirectory(formatter_ex)
add_subdirectory(hello_world)
add_subdirectory(solver_lib)
add_subdirectory(solver)
