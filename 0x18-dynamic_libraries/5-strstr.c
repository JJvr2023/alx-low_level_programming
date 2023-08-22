#include <stdio.h>
#include <string.h>
#include "main.h"

char *strstr(const char *haystack, const char *needle) {
  size_t i = 0;
  size_t j;

  while (haystack[i] != '\0') {
    j = 0;

    while (needle[j] != '\0' && haystack[i + j] == needle[j]) {
      j++;
    }

    if (needle[j] == '\0') {
      return (char *)haystack + i;
    }

    i++;
  }

  return NULL;
}

int main() {
  char *haystack = "This is a string.";
  char *needle = "is";

  char *ptr = strstr(haystack, needle);

  if (ptr != NULL) {
    printf("The first occurrence of the substring '%s' in the string '%s' is at index %d.\n", needle, haystack, ptr - haystack);
  } else {
    printf("The substring '%s' was not found in the string '%s'.\n", needle, haystack);
  }

  return 0;
}
