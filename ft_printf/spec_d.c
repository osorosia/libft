#include "libft.h"

long	spec_d(va_list ap, int fd)
{
	int	num;

	num = va_arg(ap, int);
	ft_putnbr_base_fd(num, "0123456789", fd);
	return (ft_numlen(num, 10));
}
