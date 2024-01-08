#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "strutils.h"

size_t test_empty_line(void){
    const char* str = "";
    char line[256] = {0};
    size_t ret = str_get_line(str, &line[0], strlen(str));
    printf("%ld - %s\n", ret, line);
    return ret;
}

size_t test_line_with_one_char(void){
    const char* str = "c";
    char line[256] = {0};
    size_t ret = str_get_line(str, &line[0], strlen(str));
    printf("%ld - %s\n", ret, line);
    return ret;
}

size_t test_line_with_one_newline(void){
    const char* str = "\n";
    char line[256] = {0};
    size_t ret = str_get_line(str, &line[0], strlen(str));
    printf("%ld - %s\n", ret, line);
    return ret;
}

size_t test_normal_line(void){
    const char* str = "test\ntest\ntest";
    char line[256] = {0};
    size_t ret = str_get_line(str, &line[0], strlen(str));
    printf("%ld - %s\n", ret, line);
    return ret;
}

int main(void)
{
    assert(test_empty_line() == 0);
    assert(test_line_with_one_char() == 1);
    assert(test_line_with_one_newline() == 0);
    assert(test_normal_line() == sizeof("test") - 1);
    return EXIT_SUCCESS;
}