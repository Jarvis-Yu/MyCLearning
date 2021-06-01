## ferror
```c
int ferror(FILE *stream);

// example
double vertaxp[3];
fread(vertex, sizeof(vertex), 1, stream);

if (ferror(stream)) {
  perror("Error reading from stream.\n");
}
```

# ASCII file
## fopen
```c
FILE *fopen(const char *path, const char *mode);
```

`path` is the name of the file.

`mode`
 - r: Open for reading at start
 - w: Truncate and open for writing
 - a: Open for writing at the end of file (append)

If `fopen()` returns `NULL`, the file could not be opened

## feof

```c
 int feof(FILE *stream);
```

returns non-zero if the end of stream has been reached

## fclode
```
int fclode(FILE *fp);
```

returns 0 on success

## fscanf
```c
int fscanf(FILE *stream, const char *format, ...);
```

## fgets
```c
char *fgets(char *s, int size, FILE *stream);
```

Reads up to size-1 chars from `stream` into s until the next newline, or end-of-file or the buffer is full

# binary file
## fread & fwrite
```c
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
```

`ptr` is the address of the data to read or write

`nmemb` is a count of elements to write

`size` is the size of each element in chars

`stream` is the file being read/written to

Each method returns the **number of elements read/writte**. A value less than *nemeb* indicates an error

## fseek
```c
int fseek(FILE *stream, long offset, int origin);
```

`offset`: The new position, in bytes from supplied `origin`

`origin`: The location from which the new position is calculated

 - `SEEK_SET` - The start of the file
 - `SEEK_CUR` - The current position
 - `SEEK_END` - The end of the file

returns 1 on failure
