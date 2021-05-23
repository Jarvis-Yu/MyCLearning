void leading_dimension_ignore(int a[2][3]) { // the leading dimension is ignored so you may leave a[2][3] like a[][3]
}

void f(const int a[]) { // "const" means the array is not supposed to be read-only
  printf("a[0] = %d\n", a[0]);
}

int main(void) {
  int a[3] = {1, 2, 3};
  int b[10] = {1, 2, 3, 4};
  int c[] = {1, 2};
  int d[][2] = {{1}. {9, 10}};
  char str[] = "Hello!"; // it has a size of 7, ending with a '\0'
  // string constant in c is read-only  e.g. "hello"

  return 0;
}
