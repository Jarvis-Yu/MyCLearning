#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct str {
  long a;
  int b;
  char c[10];
};

typedef struct str str;

typedef struct sss {
  long a;
  int b;
  char c[10];
} sss_t;

int main(void) {
  struct str s1 = {0xffffffff, 0x7fffffff, "hello"};
  str s2 = {0xffffffff, 0x7fffffff, "hello"};
  struct str *s3 = malloc(sizeof(struct str));
  assert(s3 != NULL);

  s3->a = 0xffffffff; // equivalent to (*s3).a = 0xffffffff;
  
  free(s3);

  return 0;
}
