# stdlib.h

## malloc

allocates a region of memory of `size` bytes and returns a pointer to the allocated memory

```c
void *malloc(size_t size);
```

## valloc

allocates a region of memory that can hold `nmemb` elements of `size` bytes. The region is initialised to 0.

```c
void *calloc(size_t nmemb, size_t size);
```

## realloc

reallocates a region of memory to the supplied size, preserving the contents.

```c
void *realloc(void *ptr, size_t size);
```

## free

frees a memory region previously allocated using the above.

```c
void free(void *ptr);
```
