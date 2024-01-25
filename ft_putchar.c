/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:10:15 by mben-yah          #+#    #+#             */
/*   Updated: 2024/01/23 19:23:49 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(const char *format, va_list args)
{
	char	a;

	if (format)
	{
		a = va_arg(args, int);
		write(1, &a, 1);
	}
	return (1);	
}
