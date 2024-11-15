#include "ft_printf.h"

int ft_prints(char *s)
{
  int  i;

  i = 0;
  while(*s)
  {
    ft_printc(*s);
    s++;
    i++;
  }
  return (i);
}