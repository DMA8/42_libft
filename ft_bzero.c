#include <stdlib.h>
void ft_bzero(void *dest, size_t nbytes)
{
    size_t  ind;

    ind = 0;
    while(ind < nbytes)
    {
        *(unsigned char*)(dest + ind) = (unsigned char)'\0';
        ind++;
    }
}