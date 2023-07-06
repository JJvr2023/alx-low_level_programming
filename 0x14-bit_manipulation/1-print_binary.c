#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n) {
  int i;

  for (i = 63; i >= 0; i--) {
    unsigned long int mask = 1 << i;
    char c;

    if (n & mask) {
      c = '1';
    } else {
      c = '0';
    }

    printf("%c", c);
  }

  printf("\n");
}
