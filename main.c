#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "ft_printf.h"
#include <stdint.h>
#include <limits.h>

static int count()
{
	static int i = 0;

	i++;
	if (i == 5)
		return (i);
	else
		return (count());
}/* 
static void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

int	ft_puthexa2(unsigned int num, char *base)
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
} */
int	main()
{
	// int b = printf("how you doing");
	// printf("ha%s", NULL);
	// print("yo", 'a');
	// print("ho");
	// ft_printf("%s", NULL);
	// int a = printf(0);
	// int a;
	// int b;

	// printf("%d\n", b);
	// printf("%d", b);
	// int a = printf("%x", -2147483648);
	// ft_puthexa2(-2147483648, "0123456789abcdef");
	// int b = printf("\n %x \n", -2147483648);
	int a = ft_printf("%d", -0x81);
	write(1, "\n", 1);
	int b = printf("%d", -0x81);
	/* write(1, "\n", 1);
	int c = ft_printf("%x", 0x81); */

	// strnstr("ho", "up", 0);
	// printf("%d\n", count());
	printf("\n%d-------------%d-------------d\n", a, b);
}
