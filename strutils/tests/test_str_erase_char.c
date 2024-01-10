#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "strutils.h"

size_t test_empty_line(void){
    const char* str = "";
    char line[256] = {0};
    size_t ret = str_erase_char(str, &line[0], ' ', strlen(str));
    printf("%ld\n", ret);
    return ret;
}

size_t test_line_with_one_char(void){
    const char* str = " ";
    char line[256] = {0};
    size_t ret = str_erase_char(str, &line[0], ' ', strlen(str));
    printf("%ld\n", ret);

    return ret;
}

size_t test_line_with_one_erasing_char(void){
    const char* str = " ";
    char line[256] = {0};
    size_t ret = str_erase_char(str, &line[0], ' ', strlen(str));
    printf("%ld\n", ret);

    return ret;
}

size_t test_normal_line(void){
    const char* str = "test\ntest\ntest";
    char line[256] = {0};
    size_t ret = str_erase_char(str, &line[0], '\n', strlen(str));
    printf("%ld -> %s\n", ret, line);
    return ret;
}

int main(void)
{
    assert(test_empty_line() == 0);
    assert(test_line_with_one_char() == 0);
    assert(test_line_with_one_erasing_char() == 0);
    assert(test_normal_line() == 3*(sizeof("test") - 1));
    return EXIT_SUCCESS;
}