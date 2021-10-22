#include "libft.h"

int ft_isalnum(char c)
{
    return (ft_isalpha(c) || (c >= '0' && c <= '9'));
}