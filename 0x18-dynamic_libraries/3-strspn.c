#include <stdio.h>
#include <string.h>
#include "main.h"

size_t strspn(const char *str, const char *accept) {
  size_t i = 0;
  size_t j;

  while (str[i] != '\0') {
    for (j = 0; accept[j] != '\0'; j++) {
      if (str[i] == accept[j]) {
        break;
      }
    }

    if (accept[j] == '\0') {
      break;
    }

    i++;
  }

  return i;
}

int main() {
  char *str = "This is a string.";
  char *accept = "aeiou";

  size_t len = strspn(str, accept);

  printf("The length of the initial substring consisting of only vowels is %zu.\n", len);

  return 0;
}
