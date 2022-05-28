#include "libft.h"

long	spec_c(va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	ft_putchar_fd(c, 1);
	return (1);
}
