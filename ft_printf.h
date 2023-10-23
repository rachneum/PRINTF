#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>//permet d'apl fct variadiques
# include <stdio.h>
# include <unistd.h>

size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_putnbr(long int nb);
size_t	ft_putnbr_base(unsigned long int nb, const char *base);
#endif