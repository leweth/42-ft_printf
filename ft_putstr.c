/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:38:37 by mben-yah          #+#    #+#             */
/*   Updated: 2024/01/23 20:45:18 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	__strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_putstr(const char *format, va_list args)
{
	const char	*str;
	int			len;

	str = va_arg(args, char *);
	if (!str && format)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = __strlen(str);
	write(1, str, len);
	return (len);
}