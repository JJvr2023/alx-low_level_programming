#include <stdio.h>
#include "main.h"

int strlen(const char *str) {
  int len = 0;

  while (str[len] != '\0') {
    len++;
  }

  return len;
}

int main() {
  char *str = "This is a string.";
  int len = strlen(str);

  printf("The length of the string is %d.\n", len);

  return 0;
}
