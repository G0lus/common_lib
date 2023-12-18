cmake_minimum_required(VERSION 3.23)
project(common_lib LANGUAGES C)

enable_testing()
add_subdirectory(merge_sort)

add_compile_options(-Wall -Werror)

add_subdirectory(tests)

