#include <stdio.h>
#include <string.h>
#include "main.h"
char *strncat(char *dest, const char *src, size_t n) {
  int i = 0, j;
  while (dest[i] != '\0') {
    i++;
  }
  for (j = 0; j < n && src[j] != '\0'; j++, i++) {
    dest[i] = src[j];
  }
  dest[i] = '\0';
  return dest;
}

int main() {
  char dest[100];
  char src[100] = "This is a string.";

  strncat(dest, src, 5);

  printf("%s\n", dest);

  return 0;
}
