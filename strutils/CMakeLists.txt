add_library(
    strutils

    strutils.c
    strutils.h
)

target_sources(strutils INTERFACE strutils.c)
target_sources(strutils PUBLIC strutils.h)

add_subdirectory(tests)