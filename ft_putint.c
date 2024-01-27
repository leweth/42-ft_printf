/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:13:55 by mben-yah          #+#    #+#             */
/*   Updated: 2024/01/27 19:15:13 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar2(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	__putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		ft_putchar2('-');
		return (__putnbr(-n) + 1);
	}
	else if (n >= 0 && n <= 9)
		return (ft_putchar2(n + '0'));
	else
		return (__putnbr(n / 10) + __putnbr(n % 10));
}

int	ft_putint(const char *format, va_list args)
{
	int	num;

	num = 0;
	if (format)
		num = va_arg(args, int);
	return (__putnbr(num));
}
