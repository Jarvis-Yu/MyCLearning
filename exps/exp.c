#include <stdio.h>

int main(void) {
  int a = 100, b = 200;
  int *p = &a;

  printf("%d\n", *p);
  p++;
  printf("%d\n", *p);

  p = &a;
  printf("%d\n", *p);
  p = p + 1;
  printf("%d\n", *p);

  return 0;
}
