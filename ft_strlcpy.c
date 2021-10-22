#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t nbytes)
{
    size_t ind;

    ind = 0;
    while (ind < nbytes && src[ind])
    {
        dst[ind] = src[ind];
        ind++;
    }
    dst[ind] = 0;
    ind = 0;
    while (src[ind])
        ind++;
    return (ind);
}