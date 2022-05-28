#include "libft.h"

long	spec_u(va_list ap)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	ft_putunbr_base(num, "0123456789");
	return (ft_unumlen(num, 10));
}
