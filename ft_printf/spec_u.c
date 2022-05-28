#include "libft.h"

long	spec_u(va_list ap, int fd)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	ft_putunbr_base_fd(num, "0123456789", fd);
	return (ft_unumlen(num, 10));
}
