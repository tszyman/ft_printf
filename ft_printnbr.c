/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:54:37 by tomek             #+#    #+#             */
/*   Updated: 2024/05/08 20:32:54 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(long n, int base)
{
	int		count;
	char	*hex_symbols;

	hex_symbols = "0123456789abcdef";
	if (n < 0)
	{
		ft_printchar('-');
		return (ft_printnbr(-n, base) + 1);
	}
	else if (n < base)
		return (ft_printchar(hex_symbols[n]));
	else
	{
		count = ft_printnbr(n / base, base);
		return count + ft_printnbr(n % base, base);
	}
}
