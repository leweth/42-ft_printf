/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:28:28 by mben-yah          #+#    #+#             */
/*   Updated: 2024/01/25 16:19:50 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int	ft_putchar2(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_puthexa2(unsigned int num, char *base)
{
	if (num < 16)
		return (ft_putchar2(base[num]));
	else
		return (ft_puthexa2(num / 16, base) + ft_puthexa2(num % 16, base));
}

int	ft_putaddress(const char *format, va_list args)
{
	uintptr_t	num;

	num = va_arg(args, uintptr_t);
	if (format)
		write(1, "0x", 2);
	return (2 + ft_puthexa2(num, "0123456789abcdef"));
}