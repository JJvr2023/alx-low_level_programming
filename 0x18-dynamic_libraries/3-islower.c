#include <stdio.h>
#include <ctype.h>
#include "main.h"

int islower(int c) {
  return (c >= 'a' && c <= 'z');
}

int main() {
  int c;

  printf("Enter a character: ");
  scanf("%c", &c);

  if (islower(c)) {
    printf("The character '%c' is lowercase.\n", c);
  } else {
    printf("The character '%c' is not lowercase.\n", c);
  }

  return 0;
}
