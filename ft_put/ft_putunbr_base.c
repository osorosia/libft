#include "libft.h"

void    ft_putunbr_base(size_t num, char *base) {
    const long    base_len = ft_strlen(base);

    if (num / base_len != 0)
        ft_putnbr_base(num / base_len, base);
    ft_putchar_fd(base[num % base_len], 1);
}
