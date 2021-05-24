#include <stdio.h>

int main(int argc, char **argv) {
  int firstNum = 0;
  if (argc > 1) firstNum = atoi(argv[1]); // atol for long...
  printf("%d\n", firstNum);
  
  return 0;
}
