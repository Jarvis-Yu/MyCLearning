#include <stdio.h>

void f(int a, int *b) {
  a = 2;
  *b = 2;
}

int main(void) {
  int a = 1, b = 1;
  printf("a = %d, b = %d\n", a, b);
  f(a, &b); // only b will be modified (possibily)
  printf("a = %d, b = %d\n", a, b);

  return 0;
}
