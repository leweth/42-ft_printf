#include "ft_printf.h"

static int	ft_putchar2(char c)
{
	write(1, &c, 1);
	return (1);
}
static int	__putnbr(unsigned int n)
{
	if (n < 10)
		return (ft_putchar2(n + '0'));
	else
		return (__putnbr(n / 10) + __putnbr(n % 10));	
}

int		ft_putunint(const char *format, va_list args)
{
	unsigned int	num;

	if (format)
		num = va_arg(args, unsigned int);
	return (__putnbr(num));
}
