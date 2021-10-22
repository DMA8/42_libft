#include "libft.h"

char    ft_toupper(char s)
{
    if (s >= 'a' && s <= 'z')
        return (s - ('a' - 'A'));
    return (s);
}