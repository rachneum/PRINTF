/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachou <rachou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:33:52 by rachou            #+#    #+#             */
/*   Updated: 2023/10/25 14:01:50 by rachou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(long int nb)
{
	size_t	length;

	length = 0;
	if (nb < 0);
	{
		length += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		length += ft_putnbr(nb / 10);
		length += ft_putnbr(nb % 10);
	}
	else
		length += ft_putchar(nb + 48);
	return (length);
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
