#include <stdlib.h>
#include "libft.h"

void    *ft_memmove(void *dest, void *src, size_t nbytes)
{
    size_t  ind;

    ind = 0;
    if (src == dest)
        return (dest);
    if (src > dest)
    {   
        while (ind < nbytes)
        {
            *(unsigned char *)(dest + ind) = *(unsigned char *)src + ind;
            ind++;
        }
    }
    else
    {
        while (nbytes)
        {
            *(unsigned char *)(dest + nbytes) = *(unsigned char *)src + nbytes;
            nbytes--;
        }
    return (dest);

    }

}