#include <stdio.h>
#include <string.h>
#include "main.h"

char *strpbrk(const char *str, const char *accept) {
  size_t i = 0;
  size_t j;

  while (str[i] != '\0') {
    for (j = 0; accept[j] != '\0'; j++) {
      if (str[i] == accept[j]) {
        return (char *)str + i;
      }
    }

    i++;
  }

  return NULL;
}

int main() {
  char *str = "This is a string.";
  char *accept = "aeiou";

  char *ptr = strpbrk(str, accept);

  if (ptr != NULL) {
    printf("The first occurrence of a vowel in the string is at index %d.\n", ptr - str);
  } else {
    printf("There are no vowels in the string.\n");
  }

  return 0;
}
