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

int	ft_printd(int nb)
{
	long	nbr;
	int		len;

	len = 0;
	nbr = nb;
	if (nbr < 0)
	{
		len += ft_printc('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
		len += ft_printd(nbr / 10);
	len += ft_printc(nbr % 10 + '0');
	return (len);
}
