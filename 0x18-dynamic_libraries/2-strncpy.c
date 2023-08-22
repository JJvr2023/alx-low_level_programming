#include <stdio.h>
#include <string.h>
#include "main.h"

char *strncpy(char *dest, const char *src, size_t n) {
  int i;

  for (i = 0; i < n && src[i] != '\0'; i++) {
    dest[i] = src[i];
  }

  for (; i < n; i++) {
    dest[i] = '\0';
  }

  return dest;
}

int main() {
  char dest[100];
  char src[100] = "This is a string.";

  strncpy(dest, src, 5);

  printf("%s\n", dest);

  return 0;
}
