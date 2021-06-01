# fopen
```c
FILE *fopen(const char *path, const char *mode);
```
`path` is the name of the file.

`mode`
 - r: Open for reading at start
 - w: Truncate and open for writing
 - a: Open for writing at the end of file (append)

 If `fopen()` returns `NULL`, the file could not be opened

 # feof
 ```c
 int feof(FILE *stream);
 ```
 returns non-zero if the end of stream has been reached

 # fclode
 ```
 int fclode(FILE *fp);
 ```
 returns 0 on success
