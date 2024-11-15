/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:57:54 by ablabib           #+#    #+#             */
/*   Updated: 2024/11/15 15:57:55 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prints(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (ft_prints("(null)"));
	while (*s)
	{
		count += ft_printc(*s);
		s++;
	}
	return (count);
}
