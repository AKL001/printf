#include "ft_printf.h"

int print_s(char c, va_list ap)
{
  int count;

  count = 0;
  if (c == 'c')
    ft_print_c(va_arg(ap,char));
  else
}


int ft_printf(const char *s, ...)
{
  
  va_list ap;
  int     count;

  va_start(ap, s);
  count = 0;

  
  if (!s)
    return (-1);
  while(*s)
  {
    if (*s == '%' && *(++s))
      count += print_s(*(++s), ap);
    else
      count += write(1, s, 1);
    s++;
  }
  va_end(ap);
  return (count);
}

int main()
{


}
