/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:07:01 by tomek             #+#    #+#             */
/*   Updated: 2024/05/06 21:40:16 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_option(va_list args, int c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_printchar(va_arg(args, int));
	else if (c == 's')
		i += ft_printstr(va_arg(args, char *));
	else if (c == 'p')
		i += ft_printp(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		i += ft_printnbr(va_arg(args, int), 10);
	else if (c == 'u')
		i += ft_printnbr(va_arg(args, unsigned int), 10);
	else if (c == 'x' || c == 'X')
		i += ft_printnbr(va_arg(args, int), 16);
	else if (c == '%')
		i += ft_printchar(c);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			len += ft_option(args, *(++format));
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
