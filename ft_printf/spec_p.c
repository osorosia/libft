#include "libft.h"

long	spec_p(va_list ap, int fd)
{
	size_t	p;

	p = va_arg(ap, size_t);
	ft_putstr_fd("0x", fd);
	ft_putunbr_base_fd(p, "0123456789abcdef", fd);
	return (2 + ft_unumlen(p, 16));
}
