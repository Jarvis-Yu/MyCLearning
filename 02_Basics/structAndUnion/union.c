#include <stdio.h>

union u {
  char c[4];
  int x;
}; // in a union, all field overlap

// c[4]  0x7f | 0xab | 0x2b | 0x13
// x     0x7f | 0xab | 0x2b | 0x13

struct s {
  int select;
  union {
    char c[8];
    long a;
  };
};

int main(void) {
  return 0;
}
