/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_form.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachou <rachou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:53:49 by rachou            #+#    #+#             */
/*   Updated: 2023/10/23 12:31:01 by rachou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checkform(const char *format, )
{
	if (*format == 'c')
		ft_putchar();
	if (*format == '%')
		ft_putchar();
	if (*format == 's')
		ft_pustr();
//if (*format == 'p')
	if (*format == 'd' || 'i')
		ft_putnbr();
	if (*format == 'u')
		ft_putnbr_base();
	if (*format == 'x')
		ft_putnbr_base();
	if (*format == 'x')
		ft_putnbr_base();
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
		return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}