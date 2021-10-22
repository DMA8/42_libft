#include <stdlib.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t nbytes)
{
    size_t  ind;

    ind = 0;
    while (ind < nbytes)
    {
        *(unsigned char*)(dest + ind) = *(unsigned char*)(src + ind);
        ind++;
    }
    return (dest);
}