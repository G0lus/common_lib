add_executable(test_str_get_line test_str_get_line.c)

target_include_directories(test_str_get_line PUBLIC ..)
target_link_libraries(test_str_get_line PUBLIC strutils)

add_test(
    "Testing str_get_line"
    test_str_get_line
)

add_executable(test_str_erase_char test_str_erase_char.c)

target_include_directories(test_str_erase_char PUBLIC ..)
target_link_libraries(test_str_erase_char PUBLIC strutils)

add_test(
    "Testing str_erase_char"
    test_str_erase_char
)
