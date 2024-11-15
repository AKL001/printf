/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:33:24 by ablabib           #+#    #+#             */
/*   Updated: 2024/11/15 15:33:25 by ablabib          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	ft_printu(unsigned int nbr)
{
	int count;

	count = 0;
	if (nbr > 9)
		count += ft_printu(nbr / 10);
	count += ft_printc(nbr % 10 + '0');
	return (count);
}