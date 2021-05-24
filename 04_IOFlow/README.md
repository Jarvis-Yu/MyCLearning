# printf

## %

c - character

d, u - signed(d) & unsigned(u) decimal integer

o, x - unsigned octal(o) & hexdecimal(x)

f, e - floating point value(f) in scientific notation (e)

s - string of characters

p - pointer value

## \

\n - newline, \f - new page

\t - tab, \b - backspace

\", \', \\ - literal double quote, single quote and backslash

# other

in *c*, a string is a sequence of chars terminated with the character '\0'

## scanf

similar to printf

### risk

```
char buffer[50];
int ret = scanf("%s", buffer);
assert(ret == 1);
```
in this case, by inputing a string longer than 50 chars may overwrite sth you don't want to be overwrited. use `"%50s` will be safer

## fgets()

read a string from an input stream

## getchar()

reads a single char from stdin
