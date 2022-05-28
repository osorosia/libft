#include "libft.h"

void    ft_putnbr_base(long num, char *base) {
    const long    base_len = ft_strlen(base);
    
    if (num < 0)
    {
        ft_putchar_fd('-', 1);
        num *= -1;
    }
    if (num / base_len != 0)
        ft_putnbr_base(num / base_len, base);
    ft_putchar_fd(base[num % base_len], 1);
}
