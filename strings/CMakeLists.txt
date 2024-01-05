add_library(
    strings

    strings.c
    strings.h
)

target_sources(strings PUBLIC strings.h)
target_sources(strings INTERFACE strings.c)

add_subdirectory(tests)