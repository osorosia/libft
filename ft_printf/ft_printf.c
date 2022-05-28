#include "libft.h"

int	_vprintf(const char *format, va_list ap)
{
	long	print_size;
	long	i;

	print_size = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			print_size += print_spec(format[++i], ap);
		else
		{
			ft_putchar_fd(format[i], 1);
			print_size++;
		}
		i++;
	}
	return ((int)print_size);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	print_size;

	if (format == NULL)
		return (0);
	va_start(ap, format);
	print_size = _vprintf(format, ap);
	va_end(ap);
	return (print_size);
}
