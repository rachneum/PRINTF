/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachou <rachou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:08:09 by rachou            #+#    #+#             */
/*   Updated: 2023/10/17 18:54:26 by rachou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>//permet d'apl fct variadiques

int	ft_printf(const char *format, ...)
{
    while(*format)
    {
        if(*format == '%')

        {
            ft_check_form();
            format++;
        }
    }
}