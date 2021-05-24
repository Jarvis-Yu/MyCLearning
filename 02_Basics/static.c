#include <stdio.h>

void f(void) {
  static depth = 0; // shared between f, only declare once
  depth++;
  printf("%d\n", depth);
  if (depth > 5) return;
  f();
}

int main(void) {
  f();
  return 0;
}
