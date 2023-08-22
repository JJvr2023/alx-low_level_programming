#include <stdio.h>
#include "main.h"

int abs(int n) {
  return (n < 0) ? -n : n;
}

int main() {
  int n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  int result = abs(n);

  printf("The absolute value of %d is %d.\n", n, result);

  return 0;
}
