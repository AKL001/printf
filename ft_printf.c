/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:57:28 by ablabib           #+#    #+#             */
/*   Updated: 2024/11/16 19:02:05 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	print_format(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_printc(va_arg(ap, int));
	else if (c == 's')
		count += ft_prints(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count += ft_printd(va_arg(ap, int));
	else if (c == 'u')
		count += ft_printu(va_arg(ap, unsigned int));
	else if (c == 'p')
		count += ft_printp(va_arg(ap, unsigned long));
	else if (c == 'x' || c == 'X')
		count += ft_printx(va_arg(ap, unsigned int), c);
	else
		count += write(1, &c, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (!format || write(1, 0, 0) == -1)
		return (-1);
	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%' && *(++format))
			count += print_format(*(format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
