#include <stdio.h>

int main(void) {
  int a = 1;
  const int *b = &a; // the const here means you cannot change *b, but can change b
  b = (int*) &b;

  return 0;
}
