#include <stdio.h>

int main(void) {
  int a = 1;
  int c = 11;
  {
    int b = 2;
    printf("%d\n", a + b);
    a = 3;
    int c = 21;
  }

  // b disappear now
  // a == 3, c == 11

  return 0;
}
