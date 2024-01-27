/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:10:39 by mben-yah          #+#    #+#             */
/*   Updated: 2024/01/27 19:10:54 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_x(const char *format, va_list args)
{
	unsigned int	num;

	num = 0;
	if (format)
		num = va_arg(args, unsigned int);
	return (ft_puthexa(num, "0123456789abcdef"));
}
