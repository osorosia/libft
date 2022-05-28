#include "libft.h"

long	print_spec(char c, va_list ap)
{
    if (c == 'c')
		return spec_c(ap);
	if (c == 's')
		return spec_s(ap);
	if (c == 'p')
		return spec_p(ap);
	if (c == 'd' || c == 'i')
		return spec_d(ap);
	if (c == 'u')
		return spec_u(ap);
	if (c == 'x')
		return spec_x(ap);
	if (c == 'X')
		return spec_X(ap);
	ft_putchar_fd(c, 1);
	return 1;
}
