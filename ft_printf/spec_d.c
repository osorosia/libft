#include "libft.h"

long	spec_d(va_list ap)
{
	int	num;

	num = va_arg(ap, int);
	ft_putnbr_base(num, "0123456789");
	return (ft_numlen(num, 10));
}
