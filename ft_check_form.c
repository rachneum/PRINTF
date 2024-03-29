/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_form.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:35:46 by raneuman          #+#    #+#             */
/*   Updated: 2023/11/02 11:37:20 by raneuman         ###   ########.fr       */
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
		count += ft_putstr("0x")
			+ ft_putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
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
	return (write(1, &c, 1));
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

size_t	ft_putstr(char *s)
{
	size_t	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = ft_strlen(s);
	return (write(1, s, i));
}
