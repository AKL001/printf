/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:57:35 by ablabib           #+#    #+#             */
/*   Updated: 2024/11/15 15:57:37 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long nbr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_printx(nbr, 'x');
	return (count);
}
