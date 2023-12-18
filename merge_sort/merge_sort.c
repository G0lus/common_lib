#include "merge_sort.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

static void swap(void *a, void *b, size_t width)
{
    if (!a || !b)
    {
        return;
    }

    void *tmp = calloc(1, width);
    memmove(tmp, b, width);
    memmove(b, a, width);
    memmove(a, tmp, width);
    free(tmp);
    tmp = 0;
}

/**
 * @param base_1 Has same amount or more elements as base_2.
 * @param base_2 Pointer to another subarray to merge with. There should be no
 *              gap between base_1 and base_2, so base_1[num_1] == base_2[0].
 */
static void merge_array(void *base_1, void *base_2, size_t num_2, size_t width,
                        int (*compare)(const void *, const void *))
{
    size_t num_1 = (base_2 - base_1) / width;
    for (size_t i = num_2; i > 0; i--)
    {
        void *b = base_2 + ((i - 1) * width);
        /* if element from base_2 arr is less than */

        for (size_t n = num_1 + num_2 - 1; n > 0; n--)
        {
            void *a = base_1 + ((n - 1) * width);
            if (compare(a, b) > 0)
            {
                swap(a, b, width);
                b = a;
            }
        }
    }
}

int merge_sort(void *base, size_t num, size_t width,
               int (*compare)(const void *, const void *))
{

    assert(compare);
    assert(base);

    void *base_upper_half = base;
    void *base_bottom_half = base + (width * (num / 2));

    /* If there is unit array there is nothing to be done with it. */
    if (num == 1)
    {
        return 0;
    }
    /* Array with 2 elements can be sorted with basic comparison */
    else if (num == 2)
    {
        void *a = base;
        void *b = base + width;
        int res = compare(a, b);
        if (res > 0)
        {
            swap(a, b, width);
        }

        return 0;
    }
    /* Array with 2 elements can be sorted with basic comparison */
    else
    {
        size_t num_upper = (base_bottom_half - base_upper_half) / width;
        size_t num_bottom = num - num_upper;
        merge_sort(base_upper_half, num_upper, width, compare);
        merge_sort(base_bottom_half, num_bottom, width, compare);
        merge_array(base_upper_half, base_bottom_half, num_bottom, width, compare);
    }

    return 0;
}