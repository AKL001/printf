#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int ft_printf(const char *format, ...);
int ft_printc(int c);
int	ft_printd(int n);
int ft_prints(char *s);
int ft_printp(unsigned int p);
int ft_printx(unsigned int nbr,char c);
int ft_printu(unsigned int nbr);

#endif