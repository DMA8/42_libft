#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    **ft_split(char const *s, char c);

int main()
{
    char *s1 = "Valeriy Albertovich";
    char **res;

    res = ft_split(s1, ' ');
    printf("%s\n",res);
}