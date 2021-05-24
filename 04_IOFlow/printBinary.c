// not original

#include <stdio.h>
#include <stdint.h>

void printBits(uint32_t x) {
  int i;
  uint32_t mask = 1 << 31;

  for (i = 0; i < 32; i++) {
    if ((x & mask) == 0) {
      printf("0");
    } else {
      printf("1");
    }
    x <<= 1;
  }
  printf("\n");
}

int main(void) {
  printBits(19);
  return 0;
}
