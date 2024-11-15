#include "ft_printf.h"

int ft_printu(unsigned int nbr)
{
    int count;

    count = 0;
    if (nbr > 9)
        count += ft_printu(nbr / 10);
    count += ft_printc(nbr + '0');
}