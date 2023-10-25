/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachou <rachou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:08:09 by rachou            #+#    #+#             */
/*   Updated: 2023/10/25 13:59:54 by rachou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
    va_list	ap;
    int		count;

    va_start(ap, format);
	count = 0;
    while (*format)
    {
        if (*format == '%')
            count += ft_check_form(*(format + 1), ap);
		else
			count += ft_putchar(*format);
		++format;
	}
	va_end(ap);
	return (count);
}
