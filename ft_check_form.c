/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_form.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachou <rachou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:53:49 by rachou            #+#    #+#             */
/*   Updated: 2023/10/25 13:59:49 by rachou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_check_form(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	if (c == '%')
		count += ft_putchar('%');
	if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(ap, int));
	if (c == 'p')
		count += ft_putstr("0x") + ft_putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
	if (c == 'u')
		count += ft_putnbr_base(va_arg(ap, unsigned int), "0123456789");
	if (c == 'x')
		count += ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
	if (c == 'X')
		count += ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
	return (count);
}
size_t	ft_putchar(char c)
{
	write(1, &c, 1);
}
size_t	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
