add_executable(test_vector test_vector.c)
target_include_directories(test_vector PUBLIC ${CMAKE_SOURCE_DIR}/vector)
target_link_libraries(test_vector PUBLIC vector)


add_test(
    "Vector Testing"
    test_vector
)