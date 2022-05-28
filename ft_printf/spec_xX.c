#include "libft.h"

long	spec_x(va_list ap, int fd)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	ft_putunbr_base_fd(num, "0123456789abcdef", fd);
	return (ft_unumlen(num, 16));
}

long	spec_X(va_list ap, int fd)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	ft_putunbr_base_fd(num, "0123456789ABCDEF", fd);
	return (ft_unumlen(num, 16));
}
