#include <stdlib.h>
#include "libft.h"


static int ft_strlen(char *s)
{
    int len;

    len = 0;
    while(s[len])
        len++;
    return (len);
}


char    *ft_strdup(const char*str)
{
    char    *ans;
    int     len_src;
    int     ind;

    ind = 0;
    len_src = ft_strlen((const)str);
    ans = (char*)malloc(len_src);
    while (ind < len_src)
    {
        ans[ind] = str[ind];
    }
    return (ans);
}