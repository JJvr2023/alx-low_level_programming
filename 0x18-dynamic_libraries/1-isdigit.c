#include <stdio.h>
#include "main.h"

int _isdigit(int c) {
  return (c >= '0' && c <= '9');
}

int main() {
  int c;

  printf("Enter a character: ");
  scanf("%c", &c);

  if (_isdigit(c)) {
    printf("The character '%c' is a digit.\n", c);
  } else {
    printf("The character '%c' is not a digit.\n", c);
  }

  return 0;
}
