#include <stdlib.h>
#include "libft.h"


char    *ft_strdup(const char*str)
{
    char    *ans;
    int     len_src;
    int     ind;

    ind = 0;
    len_src = ft_strlen(str);
    ans = (char*)malloc(len_src);
    while (ind < len_src)
    {
        ans[ind] = str[ind];
    }
    return (ans);
}