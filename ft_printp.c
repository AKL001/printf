#include "ft_printf.h"

int ft_printp(unsigned long nbr)
{
    int count;

    count = 0;
    count += write(1, "0x",2);
    count += ft_printx(nbr , 'x');
}