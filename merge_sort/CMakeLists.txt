add_library(
    merge_sort

    merge_sort.c
    merge_sort.h
)

target_sources(merge_sort PUBLIC merge_sort.h)
target_sources(merge_sort INTERFACE merge_sort.c)

add_subdirectory(tests)