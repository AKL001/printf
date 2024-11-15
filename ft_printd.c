#include "ft_printf.h"

int	ft_printd(int n)
{
	int	digit;
    int count;

    count = 0;
	if (n == -2147483648)
		count += write(1, "-2147483648", 11);
	else if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
		count += ft_printd(n);
	}
	else
	{
		if (n > 9)
		{
			count += ft_printd(n / 10);
			count += ft_printd(n % 10);
		}
		else
		{
			digit = n + 48;
			count += write(1, &digit, 1);
		}
	}
    return count;
}