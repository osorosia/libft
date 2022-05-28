#include "libft.h"

long ft_numlen(long num, long base) {
    long    len;

    len = 0;
    if (num < 0) {
        num *= -1;
        len++;
    }
    while (true) {
        len++;
        num /= base;
        if (num == 0)
            break;
    }
    return (len);
}
