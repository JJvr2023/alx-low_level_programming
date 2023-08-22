#include <stdio.h>
#include <string.h>
#include "main.h"

void *memset(void *dest, int c, size_t len) {
  unsigned char *ptr = (unsigned char *)dest;
  while (len--) {
    *ptr++ = c;
  }
  return dest;
}

int main() {
  char memory[10];

  memset(memory, 'A', 10);

  for (int i = 0; i < 10; i++) {
    printf("%c", memory[i]);
  }
  printf("\n");

  return 0;
}
