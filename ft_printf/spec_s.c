#include "libft.h"

long	spec_s(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{	
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
