# assert.h

```c
assert(logical_expression);
```

If `logical_expression` evaluates to false (zero) then:

 - Program execution stops immediately.

 - An error message is sent to stderr stating the line number
 
 ## switch it off

 Placing `#define NDEBUG` before all the `#include <assert.h>` statements de-activates assertion checking.
