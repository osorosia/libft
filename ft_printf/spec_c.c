#include "libft.h"

long	spec_c(va_list ap, int fd)
{
	char	c;

	c = (char)va_arg(ap, int);
	ft_putchar_fd(c, fd);
	return (1);
}
