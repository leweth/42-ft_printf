/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:01:14 by mben-yah          #+#    #+#             */
/*   Updated: 2024/01/25 16:43:40 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

int	ft_puthexa(uintptr_t num, char *base)
{
	static int	i;

	if (num >= 0 && num < 16)
	{
		ft_putchar2(base[num]);
		i++;
	}
	else
	{
		ft_puthexa(num / 16, base);
		ft_puthexa(num % 16, base);
	}
	return (i);
}
