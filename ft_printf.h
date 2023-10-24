#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>//permet d'apl fct variadiques
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
size_t	ft_check_form(char c, va_list ap);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
size_t	ft_putnbr(long int nb);
size_t	ft_putnbr_base(unsigned long int nb, const char *base);
#endif