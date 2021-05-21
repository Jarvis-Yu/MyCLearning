# basic ways to compile

 - check ./compile.sh out
 - check Makefile and use make

# gcc flags

## -o <file>

It places the primary output in the <file>. This applies to whatever output being produced. (executable, object file...)

## -v

Print (on standard error output) the commands executed to run the staes of compilation. Also print the version number of the compiler driver program and of the preprocessor and the complier proper.

## -g

Enables some debug flags, which'll allow us to us gdb to debug

## -Wall

It turns on a lot of warning flags

## -Werror

It'll treat all warnings as errors

## -pedantic

Turn on for better standards compliance checks
