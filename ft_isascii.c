#include "libft.h"

int ft_isascii(const char s)
{
    if (s >= 0 && s <= 127)
        return (s);
    return (0);
}