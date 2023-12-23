add_executable(test_merge_sort test_merge_sort.c)

target_include_directories(test_merge_sort PUBLIC ..)
target_link_libraries(test_merge_sort PUBLIC merge_sort)

add_test(
    "Merge Sort Testing"
    test_merge_sort
)
