#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);

  switch(a) {
    case 0:
      printf("a is 0\n");
      break;
    case 1:
      printf("a should be 1\n");
    default:
      printf("'a is 1' is satisfiable\n");
  }

  return 0;
}
