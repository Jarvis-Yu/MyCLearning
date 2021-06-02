// whatever is defined will be replaced before compile
// e.g. "int x = B;" will become "int x = (10*10);"

#define A 10
#define B (10*10)

#define X(a, b, c) (a + b == c)

// this is limited to the file scope
// also C doesn't treat this as a true constant, cannot define a fixed size array with this
static const int C = 10

// in the case above, this is applicable
enum {D = 10};
int E[D];

int f() {
  return X(1, 2, 3) ? 100 : 1;
}
