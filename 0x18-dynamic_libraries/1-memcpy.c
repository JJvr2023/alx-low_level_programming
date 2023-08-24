#include <stdio.h>
#include <string.h>
#include "main.h"

void memcpy(char *dest, const char *src, int n) {
  int i;

  for (i = 0; i < n; i++) {
    dest[i] = src[i];
  }
}

int main() {
  char dest[10];
  char src[] = "This is a string.";

  memcpy(dest, src, strlen(src));

  printf("%s\n", dest);

  return 0;
}
