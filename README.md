# common_lib
Implementation in C of the common data structures.

## Done

[x] Merge sort



### Merge Sort

```C
int merge_sort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *))
```
Implemented the same way as stdlib's qsort.

```C
void qsort(void * base, size_t num, size_t width, int( * compare )( const void *, const void * ));
```