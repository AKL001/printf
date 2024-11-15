#include "ft_printf.h"

int ft_printx(unsigned int nbr,char c)
{
    int count;

    count = 0;
    if (nbr > 16)
        count += ft_printx(nbr / 16, c);
    if (c == 'x')
        count += write(1,&"0123456789abcdef"[nbr % 16], 1);
    else
        count += write(1,&"0123456789ABCDEF"[nbr % 16], 1);
    return (count);
}