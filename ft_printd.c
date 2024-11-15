/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:57:47 by ablabib           #+#    #+#             */
/*   Updated: 2024/11/15 15:57:48 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printd(int n)
{
	int	count;

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
			count += write(1, &n + '0', 1);
	}
	return (count);
}
