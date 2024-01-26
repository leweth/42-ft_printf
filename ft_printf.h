/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-yah <mben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:52 by mben-yah          #+#    #+#             */
/*   Updated: 2024/01/25 16:21:09 by mben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdint.h>

typedef struct s_formats{
	char	spec;
	int		(*f)(const char *format, va_list args);
}	t_formats;

int		ft_printf(const char *format, ...);
int		ft_putchar(const char *format, va_list args);
int		ft_putstr(const char *format, va_list args);
int		ft_putpercent(const char *format, va_list args);
int		ft_putaddress(const char *format, va_list args);
int		ft_puthexa(unsigned int num, char *base);
int		ft_puthexa_x(const char *format, va_list args);
int		ft_puthexa_X(const char *format, va_list args);
int		ft_putint(const char *format, va_list args);
int		ft_putunint(const char *format, va_list args);

#endif