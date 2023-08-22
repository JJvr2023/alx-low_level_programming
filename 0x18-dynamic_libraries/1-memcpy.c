#include <stdio.h>
#include <string.h>
#include "main.h"

void *memcpy(void *dest, const void *src, size_t n) {
  unsigned char *d = (unsigned char *)dest;
  unsigned char *s = (unsigned char *)src;
  while (n--) {
    *d++ = *s++;
  }
  return dest;
}

int main() {
  char dest[10];
  char src[10] = "This is a string.";

  memcpy(dest, src, sizeof(src));

  printf("%s\n", dest);

  return 0;
}
