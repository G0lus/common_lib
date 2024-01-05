add_library(
    strings

    strings.c
    strings.h
)

target_sources(
    strings
    INTERFACE strings.h
    PRIVATE strings.c
)

add_subdirectory(tests)