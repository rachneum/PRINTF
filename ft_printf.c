/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachou <rachou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:08:09 by rachou            #+#    #+#             */
/*   Updated: 2023/10/24 17:01:16 by rachou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{              //ap = argument pointer.
    va_list ap;//va_list permet de regarder dans tous les variables arguments.
    int		count;
    //va_start makes ap point to the first arg.
    va_start(ap, format);
	count = 0; 
    while (*format)
    {
        if (*format == '%')
							//++format = format + 1. Incrémente d'abord puis exécute ce qu'il y a sur la ligne.
							//Hors que format++ fais ce qu'il y a sur la ligne puis incrémente.
            count += ft_check_form(*(format + 1), ap);
		else
			count += ft_putchar(*format); //count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}