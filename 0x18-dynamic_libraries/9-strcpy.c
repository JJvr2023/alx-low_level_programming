#include <stdio.h>
#include "main.h"

char *strcpy(char *dest, const char *src) {
  char *ptr = dest;

  while (*src != '\0') {
    *dest = *src;
    dest++;
    src++;
  }

  *dest = '\0';

  return ptr;
}

int main() {
  char str1[100];
  char str2[] = "This is a string.";

  strcpy(str1, str2);

  printf("The string '%s' has been copied to the string '%s'.\n", str2, str1);

  return 0;
}
