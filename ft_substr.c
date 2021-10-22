#include <stdlib.h>
#include "libft.h"


char    *ft_substr(char const *src, unsigned int start, size_t len)
{
    char    *dest;
    size_t  len_src;
    size_t  ind;

    ind = 0;
    len_src = ft_strlen(src);
    if (start > len_src)
        return (NULL); 
    if (len_src - (size_t) start < len)
        len = len_src - (size_t)start;
    dest = (char *)malloc(sizeof(char) * len);
    while(ind < len)
    {
        dest[ind] = src[start + ind];
        ind++;
    }
    dest[ind] = 0;
    return (dest);
}