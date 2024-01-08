add_executable(test_strutils test_strutils.c)

target_include_directories(test_strutils PUBLIC ..)
target_link_libraries(test_strutils PUBLIC strutils)

add_test(
    "Strings Testing"
    test_strutils
)
