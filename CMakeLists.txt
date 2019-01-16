cmake_minimum_required (VERSION 3.1)


include_directories ("${PROJECT_SOURCE_DIR}/include") 
# add the executable
add_executable(unit_test test/test.c src/matrix_math.c)
