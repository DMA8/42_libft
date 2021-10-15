#include <stdlib.h>
void *ft_memset(void *s, int c, size_t n)
{
    size_t ind;

    ind = 0;
    while(ind < n)
    {
        *(unsigned char *)(s + (int)ind) = (unsigned char)c;
        ind++;
    }
    return (s);
}