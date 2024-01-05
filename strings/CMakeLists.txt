add_library(
    strings

    strings.c
    strings.h
)

target_sources(
    strings
    PUBLIC strings.h
    INTERFACE strings.c
)

add_subdirectory(tests)