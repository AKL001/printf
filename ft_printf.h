/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:32:58 by ablabib           #+#    #+#             */
/*   Updated: 2024/11/15 15:33:02 by ablabib          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printc(int c);
int	ft_printd(int n);
int	ft_prints(char *s);
int	ft_printp(unsigned long nbr);
int	ft_printu(unsigned int nbr);
int	ft_printx(unsigned long nbr, char c);

#endif