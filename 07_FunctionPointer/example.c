#include <stdio.h>

typedef int (*int_int_int)(int, int);

int sum(int a, int b) {
  return a + b;
}

int diff(int a, int b) {
  return a - b;
}

void printf_f(int (*f)(int, int), int a, int b) {
  printf("%d\n", f(a, b));
}

int main(void) {
  int (*sum_ptr)(int, int);
  int (*f_ptr[2])(int, int) = {sum, diff};
  int_int_int fs[2] = {sum, diff};
  sum_ptr = sum; // it doesn't matter if it is &sum, *sum or sum
  printf_f(sum_ptr, 4, 5);
  printf_f(diff, 4, 5);

  return 0;
}
