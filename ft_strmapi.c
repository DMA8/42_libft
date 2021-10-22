#include <stdlib.h>
int ft_strlen(char const *s)
{
    int ind;

    ind = 0;
    while(s[ind])
        ind++;
    return (ind);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *mapped_str;
    int     ind;

    if (!s)
        return (NULL);
    ind = 0;
    mapped_str = (char *)malloc(ft_strlen(s));
    if (!mapped_str)
        return (NULL);
    while (s[ind])
    {
        mapped_str[ind] = f(ind, s[ind]);
        ind++;
    }
    return (mapped_str);
}
