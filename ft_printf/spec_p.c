#include "libft.h"

long	spec_p(va_list ap)
{
	size_t	p;

	p = va_arg(ap, size_t);
	ft_putstr_fd("0x", 1);
	ft_putunbr_base(p, "0123456789abcdef");
	return (2 + ft_unumlen(p, 16));
}
