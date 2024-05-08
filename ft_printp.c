/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:45:07 by tomek             #+#    #+#             */
/*   Updated: 2024/05/08 19:15:35 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printp_rec(uintptr_t n)
{
	char	*hex_symbols;
	int		count;

	hex_symbols = "0123456789abcdef";
	count = 0;
	if (n < 16)
		return (ft_printchar(hex_symbols[n]));
	else
	{
		count = ft_printp_rec(n / 16);
		count += ft_printnbr(n % 16);
	}
	return (count);
}

int	ft_printp(void *p)
{
	uintptr_t	n;
	int			count;

	if (!p)
		return (ft_printstr("(nil)"));
	n = (uintptr_t)p;
	ft_printstr("0x");
	return (ft_printp_rec(n) + 2);
}
