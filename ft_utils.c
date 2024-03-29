/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:36:28 by raneuman          #+#    #+#             */
/*   Updated: 2023/11/02 11:37:36 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(long int nb)
{
	size_t	len;

	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
		len += ft_putchar(nb + 48);
	return (len);
}

size_t	ft_putnbr_base(unsigned long int nb, const char *base)
{
	size_t	len;
	size_t	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (nb < base_len)
		len += ft_putchar(base[nb]);
	else
	{
		len += ft_putnbr_base(nb / base_len, base);
		len += ft_putnbr_base(nb % base_len, base);
	}
	return (len);
}
