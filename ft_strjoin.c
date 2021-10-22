#include <stdlib.h>
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  len1;
    size_t  len2;
    size_t  ind;
    char    *ans;

    ind = 0;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    ans = (char*)malloc(len1 + len2);
    if (!ans)
        return (NULL);
    while(s1[ind])
    {
        ans[ind] = s1[ind];
        ind++;
    }
    ind = 0;
    while(s2[ind])
    {
        ans[ind + len1] = s2[ind];
        ind++;
    }
    ans[ind + len1] = 0;
    return (ans);
}