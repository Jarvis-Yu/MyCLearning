# c types

char

(unsigned) short, (unsigned) int, (unsigned) long, long long

float, double, long double

# data models

          | LP32 | ILP32 | LLP64 | LP64
---       | ---  | ---   | ---   | ---
short     | 16   | 16    | 16    | 16
int       | 16   | 32    | 32    | 32
long      | 32   | 32    | 32    | 64
long long | 64   | 64    | 64    | 64

32-bit systems:
 - *LP32* or 2/4/4 (int is 16-bit, long and pointer are 32-bit): Win16 API
 - *ILP32* or 4/4/4 (int, long and pointer are 32-bit): Win32 API, Unix, Linux, MAC OS X

64-bit systems:
 - *LLP64* or 4/4/8: Win64 API
 - *LP64* or 4/8/8: Unix, Linux, and MAC OS X

# stdint.h

one can define the size by using `stdint.h`

e.g. *uint8_t* gives 8-bit unsigned int (8/16/32/64)
e.g. *int8_t* gives 8-bit signed int (8/16/32/64)
