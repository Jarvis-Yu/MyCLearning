# stdlib.h

## malloc

allocates a region of memory of `size` bytes and returns a pointer to the allocated memory

```c
void *malloc(size_t size);
```

## calloc

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
## Note!

if the memory allocation fail, `NULL` will be returned. You should check it!

# string.h

## memset

```c
void *memset(void *s, int c, size_t n);
```

Although `c` is an `int`, it is converted to an unigned char first. `s` is returned.

## memcpy

```c
void *mempy(void *dest, const void *src, size_t n);
```

Copies `n` bytes from src to `dst`, returning `dest`. The source and destination regions must not overlap.

# valgrind

## memcheck

```
$ valgrind --tool=memcheck ./executable
```

If we compile with the `-g` option to the C compiler, Valgrind will give us line numbers.

Supplying `--leak-check=full` to Valgrind will give details of individual memory leaks.
