#include <stdlib.h> // for malloc, exit

void *malloc_checked(unsigned int b) {
  void *p = malloc(b);
  if (!p) {
    exit(98);
  }
  return p;
}

