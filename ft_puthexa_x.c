#include "ft_printf.h"

int		ft_puthexa_x(const char *format, va_list args)
{
	unsigned int	num;

	if (format)
		num = va_arg(args, unsigned int);	
	return (ft_puthexa(num, "0123456789abcdef"));
}