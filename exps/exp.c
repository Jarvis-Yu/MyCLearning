#include <stdio.h>

int main(void) {
  int c[] = {1, 2, 3};
  int a = 12321;
  int *cp = c;
  printf("%p -> %d\n%p -> %d\n\n", cp, *(++cp), &a, a);
  // c = {5, 6};
  // printf("%p -> %d\n%p -> %d\n\n", c, *c, &a, a);
  return 0;
}
