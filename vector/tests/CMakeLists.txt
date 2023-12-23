add_executable(test_vector test_vector.c)
target_include_directories(test_vector PUBLIC ..)
target_link_libraries(test_vector PUBLIC vector)


add_test(
    "Vector Testing"
    test_vector
)