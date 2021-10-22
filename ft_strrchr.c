#include "libft.h"

char    *ft_strrchr(const char *src_str, int  char_to_find)
{
    int     ind;

    ind = ft_strlen(src_str) - 1;
    while (ind)
    {
        if (src_str[ind] == char_to_find)
            return ((char *)src_str + ind);
        ind--;
    }
    return ((char *)src_str + ft_strlen(src_str));
    
}

