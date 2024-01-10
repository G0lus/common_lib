#ifndef STRUTILS_H__
#define STRUTILS_H__
#include <stdlib.h>

size_t str_get_line(const char* restrict src, char* restrict dst, const size_t max_len);
size_t str_erase_char(const char* src, char* dst, const char ch, const size_t max_len);

#endif