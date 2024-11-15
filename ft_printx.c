/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:33:32 by ablabib           #+#    #+#             */
/*   Updated: 2024/11/15 15:33:34 by ablabib          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	ft_printx(unsigned long nbr, char c)
{
	int count;

	count = 0;
	if (nbr > 16)
		count += ft_printx(nbr / 16, c);
	if (c == 'x')
		count += write(1, &"0123456789abcdef"[nbr % 16], 1);
	else
		count += write(1, &"0123456789ABCDEF"[nbr % 16], 1);
	return (count);
}