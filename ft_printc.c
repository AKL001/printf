#include "ft_printf.h"

int ft_printc(int c)
{
  return write(1, &c, 1);
}