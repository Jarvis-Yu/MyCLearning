#include <stdio.h>

enum Colour {RED, GREEN, YELLOW};

enum Mode {MODE1 = 1, MODE2 = 2, MODE3 = 4};

void modeExample(void) {
  int flags = MODE1 | MODE3;
  if (flags & MODE1) printf("Mode1 is set\n");
  if (flags & MODE2) printf("Mode2 is set\n");
  if (flags & MODE3) printf("Mode3 is set\n");
}

void printColour(enum Colour col) {
  switch(col) {
    case RED: printf("RED\n"); break;
    case GREEN: printf("GREEN\n"); break;
    case YELLOW: printf("YELLOW\n"); break;
  }
}

int main(void) {
  enum Colour col = YELLOW;
  printColour(col);
  // this gives "0, 1, 2"
  printf("%i, %i, %i\n", RED, GREEN, YELLOW);
  modeExample();
  return 0;
}
