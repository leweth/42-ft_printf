/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:54:51 by mben-yah          #+#    #+#             */
/*   Updated: 2024/01/27 19:12:09 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_formats	g_list[] = {{'c', ft_putchar}, {'s', ft_putstr}, 
{'%', ft_putpercent}, {'p', ft_putaddress}, {'x', ft_puthexa_x},
{'X', ft_puthexa_xup}, {'i', ft_putint}, {'d', ft_putint},
{'u', ft_putunint}};

static int	_check_specifier(char c)
{
	int	i;

	i = 0;
	while (i < 9)
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

	if (write(1, "gfg", 0) == -1)
		return (-1);
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
	va_end(args);
	return (len);
}
