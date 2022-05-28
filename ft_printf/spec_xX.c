#include "libft.h"

long	spec_x(va_list ap)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	ft_putunbr_base(num, "0123456789abcdef");
	return (ft_unumlen(num, 16));
}

long	spec_X(va_list ap)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	ft_putunbr_base(num, "0123456789ABCDEF");
	return (ft_unumlen(num, 16));
}
