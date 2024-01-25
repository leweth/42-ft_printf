/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:54:51 by mben-yah          #+#    #+#             */
/*   Updated: 2024/01/25 15:40:07 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_formats	g_list[] = {{'c', ft_putchar}, {'s', ft_putstr}, 
{'%', ft_putpercent}, {'p', ft_putaddress}};

static int	_check_specifier(char c)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (c == g_list[i].spec)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && _check_specifier(format[i + 1]) == -1)
		{
			i++;
			continue ;
		}
		else if (format[i] == '%' && _check_specifier(format[i + 1]) > -1)
			len += g_list[_check_specifier(format[i++ + 1])].f(format, args);
		else
		{
			write(1, format + i, 1);
			len++;
		}
		i++;
	}
	return (len);
}
