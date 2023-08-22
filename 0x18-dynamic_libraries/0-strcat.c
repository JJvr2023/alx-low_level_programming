#include <stdio.h>
#include <string.h>
#include "main.h"

char *strcat(char *dest, const char *src) {
  while (*dest) {
    dest++;
  }
  while (*src) {
    *dest++ = *src++;
  }
  *dest = '\0';
  return dest;
}

int main() {
  char dest[100];
  char src[100] = "This is a string.";

  strcat(dest, src);

  printf("%s\n", dest);

  return 0;
}
