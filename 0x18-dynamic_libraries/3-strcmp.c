#include <stdio.h>
#include "main.h"

int strcmp(const char *s1, const char *s2) {
  while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
    s1++;
    s2++;
  }

  return (*s1 - *s2);
}

int main() {
  char *str1 = "This is a string.";
  char *str2 = "This is another string.";

  int result = strcmp(str1, str2);

  if (result < 0) {
    printf("The string '%s' is less than the string '%s'.\n", str1, str2);
  } else if (result > 0) {
    printf("The string '%s' is greater than the string '%s'.\n", str1, str2);
  } else {
    printf("The strings '%s' and '%s' are equal.\n", str1, str2);
  }

  return 0;
}
