#include "ft_printf.h"

int		ft_puthexa_X(const char *format, va_list args)
{
	unsigned int	num;

	num = 0;
	if (format)
		num = va_arg(args, unsigned int);			
	return (ft_puthexa(num, "0123456789ABCDEF"));
}