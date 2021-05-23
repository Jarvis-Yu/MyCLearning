#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
  int *a = malloc(sizeof(int));
  assert(a != NULL);
  int *b = malloc(sizeof(int));
  assert(b != NULL);
  *a = 1;
  *b = 2;
  printf("%d %d\n", *a, *b);
  
  free(a);
  free(b);
  return 0;
}
