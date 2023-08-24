#include <stdio.h>
#include "main.h"

int _atoi(const char *str) {
  int sign = 1;
  int num = 0;
  int i = 0;

  while (str[i] == ' ') {
    i++;
  }

  if (str[i] == '-') {
    sign = -1;
    i++;
  } else if (str[i] == '+') {
    i++;
  }

  while (str[i] >= '0' && str[i] <= '9') {
    num = num * 10 + (str[i] - '0');
    i++;
  }

  return num * sign;
}
