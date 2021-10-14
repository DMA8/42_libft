#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *ft_strnstr (const char *big_str, const char *little_str, size_t len);


int main()
{
    
    printf("ans is %p\n", ft_strnstr("Aaaaa", "a", 10));
 //   printf("ans orig %p\n", strnstr("Aboba", "Abob", 500));
}