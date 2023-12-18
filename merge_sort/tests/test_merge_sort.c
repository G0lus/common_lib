#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "merge_sort.h"

#define test(type, n, ...)   \
    _Generic((type){0},      \
        int: test_int,       \
        double: test_double, \
        char: test_char)(n, __VA_ARGS__)

int compare_int(const void *a_ptr, const void *b_ptr)
{
    const int a = *(const int *)a_ptr;
    const int b = *(const int *)b_ptr;

    if (a < b)
    {
        return -1;
    }
    else if (a > b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int compare_double(const void *a_ptr, const void *b_ptr)
{
    const int a = *(const double *)a_ptr;
    const int b = *(const double *)b_ptr;

    if (a < b)
    {
        return -1;
    }
    else if (a > b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int merge_sort_test_int(void)
{
    int arr[4] = {3, 2, -1, 1};
    merge_sort(arr, 4, sizeof arr[0], compare_int);
    for (size_t i = 0; i < 4; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    assert(arr[0] == -1 && arr[1] == 1 && arr[2] == 2 && arr[3] == 3);
    return 0;
}

int merge_sort_test_double(void)
{
    double arr[4] = {3.1, 3.2, -1.9, 1.5};
    merge_sort(arr, 4, sizeof arr[0], compare_double);
    for (size_t i = 0; i < 4; i++)
    {
        printf("%lf\t", arr[i]);
    }
    printf("\n");
    assert(arr[0] == -1.9 && arr[1] == 1.5 && arr[2] == 3.1 && arr[3] == 3.2);
    return 0;
}

int main(void)
{
    assert(merge_sort_test_int() == 0);
    assert(merge_sort_test_double() == 0);

    return EXIT_SUCCESS;
}