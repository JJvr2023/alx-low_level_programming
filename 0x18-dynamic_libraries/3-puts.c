#include <stdio.h>
#include "main.h"

void puts(const char *str) {
  while (*str != '\0') {
    putchar(*str++);
  }
  putchar('\n');
}

int main() {
  char *str = "This is a string.";

  puts(str);

  return 0;
}
