#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t      ft_strlcat(char *dst, const char *src, size_t nbytes)
{
    size_t  len_dst;
    size_t  len_src;
    size_t  ind;

    ind = 0;
    len_src = ft_strlen(src);
    len_dst = ft_strlen(dst);
    if (nbytes > len_src)
        nbytes = len_src;
    while (ind < nbytes)
    {
        dst[len_dst+ ind] = src[ind];
        ind++; 
    }
    dst[len_dst + ind] = 0;
    return (len_dst + ind); 
}