#include <stdio.h>

int f1(void) {
  printf("f1\n");
  return 1;
}

int f2(void) {
  printf("f2\n");
  return 2;
}

int f3(void) {
  printf("f3\n");
  return 3;
}

int main(void) {
  int y;
  // comma as sequence operator
  y = (f1(), f2(), f3()); // that is f1(); f2(); y = f3();
  for (int i = 0, j = 0; j < 3; i--, j++) {
    printf("i = %d, j = %d\n", i, j);
  }

  // comma as seperator
  printf("y = %d\n", y);
  int m, n;

  return 0;
}
