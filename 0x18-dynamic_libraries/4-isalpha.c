#include <stdio.h>
#include <ctype.h>
#include "main.h"

int isalpha(int c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
  int c;

  printf("Enter a character: ");
  scanf("%c", &c);

  if (isalpha(c)) {
    printf("The character '%c' is an alphabetic character.\n", c);
  } else {
    printf("The character '%c' is not an alphabetic character.\n", c);
  }

  return 0;
}
