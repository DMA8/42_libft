#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char *ft_strnstr (const char *big_str, const char *little_str, size_t len);
void *ft_memset(void *s, int c, size_t n);
int ft_isascii(const char s);
int ft_isprint(char s);

int main()
{
    char *str = "ABOBA";
    printf("%c\n", str[0]);
    ft_memset(str, 'a', 1);
    //printf("%c\n", str[0]);
}