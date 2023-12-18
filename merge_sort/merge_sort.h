#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <stdlib.h>

int merge_sort(void *base, size_t num, size_t width,
               int (*compare)(const void *, const void *));
#endif