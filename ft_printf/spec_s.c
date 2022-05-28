#include "libft.h"

long	spec_s(va_list ap, int fd)
{
	char	*str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{	
		ft_putstr_fd("(null)", fd);
		return (6);
	}
	ft_putstr_fd(str, fd);
	return (ft_strlen(str));
}
