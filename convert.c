#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *convert(unsigned int num, int base)
{
  static char AM[] = "0123456789ABCDEF";
  static char tma[50];
  char *ptr;

  ptr = &tma[49];
  *ptr = '\0';

  do
    {
      *--ptr = AM[num%base];
      num /= base;
    }
  while (num != 0);

  return (ptr);
}
