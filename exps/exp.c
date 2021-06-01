#include <stdio.h>
#include "type.h"
#include "regFun.h"

int main (void) {
  printf("%d\n", SP);
  ARM.r[PC] = 0;
  increPC();
  printf("%d\n", ARM.r[PC]);

  return 0;
}
