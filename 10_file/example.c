#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp;
  if ((fp = fopen("file.txt", "r")) == NULL) {
    perror("Error opening file.txt!");
    exit(EXIT_FAILURE);
  }
  /* Some read operation */
  fclose(fp);
}
