#include <stdlib.h>
#include <stdio.h>

static int ft_strlen(const char *str)
{
    int ind;

    ind = 0;
    while (str[ind])
        ind++;
    return (ind);
}

static  int minInt(int a, int b)
{
    if (a < b)
        return (a);
    return (b);
}


int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    unsigned int ind;
    unsigned int minLength;

    minLength = minInt(ft_strlen(str1), ft_strlen(str2));
    if (n > minLength)
        n = minLength;
    printf("%d\n", minLength);
    ind = 0;
    while (ind <= n)
    {
        if (str1[ind] != str2[ind])
            return (str1[ind] - str2[ind]);
        ind++;
    }
    return (0);      
}
