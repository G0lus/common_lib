add_executable(test_strings test_strings.c)

target_include_directories(test_strings PUBLIC ..)
target_link_libraries(test_strings PUBLIC strings)

add_test(
    "Strings Testing"
    test_strings
)
