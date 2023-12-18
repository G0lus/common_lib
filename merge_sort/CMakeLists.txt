add_library(
    merge_sort

    merge_sort.c
    merge_sort.h
)

target_sources(
    merge_sort
    INTERFACE merge_sort.h
    PRIVATE merge_sort.c
)