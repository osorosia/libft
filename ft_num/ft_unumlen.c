#include "libft.h"

long ft_unumlen(size_t num, long base) {
    long    len;

    len = 0;
    while (true) {
        len++;
        num /= base;
        if (num == 0)
            break;
    }
    return (len);
}
