#include "libft.h"

char    *ft_strchr(const char *src_str, int  char_to_find)
{
    int     ind;

    ind = 0;
    while (src_str[ind])
    {
        if (src_str[ind] == char_to_find)
            break;
        ind++;
    }
    return ((char *)src_str + ind);
    
}