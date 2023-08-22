#include <stdio.h>
#include "main.h"

char *strchr(const char *str, int c) {
  int i;

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == c) {
      return (char *)str + i;
    }
  }

  return NULL;
}

int main() {
  char *str = "This is a string.";
  char ch = 's';

  char *ptr = strchr(str, ch);

  if (ptr != NULL) {
    printf("The first occurrence of '%c' is at index %d.\n", ch, ptr - str);
  } else {
    printf("The character '%c' was not found in the string.\n", ch);
  }

  return 0;
}
