#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


size_t ft_strlcpy(char *dst, const char *src, size_t nbytes);
size_t ft_strlcat(char *dst, const char *src, size_t nbytes);

int main()
{
    unsigned char src[5] = {'a', 'b', 'c', 'd', 0};
    unsigned char dest[3] = {'e', 'f', 0};
    printf("%d\n", ft_strlcat(dest, src, 2));
    printf("%c, %c, %c, %c, %c, %c", dest[0], dest[1], dest[2], dest[3], dest[4], dest[5]);
}