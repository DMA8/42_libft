#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int   get_n_digits_in_int(int n)
{
    int     ndigits;
    int     delimiter;

    ndigits = 0;
    delimiter = 1;
    if (n < 0)
    {
        n *= -1;
        ndigits++;
    }
    while (n / delimiter > 9)
    {
        delimiter *= 10;
        ndigits++;
    }
    return (ndigits + 1);
}

static int   get_starting_delimiter(int n)
{
    int delimiter;

    if (n < 0)
        n *= -1;
    delimiter = 1;
    while (n / delimiter > 9)
    {
        delimiter *= 10;
    }
    return (delimiter);
}

char *ft_itoa(int n)
{
    char    digit;
    int     start_delimiter;
    char    *ans;
    int     ind;

    ind = 0;
    start_delimiter = get_starting_delimiter(n);
    ans = (char *)malloc((get_n_digits_in_int(n) + 1) * sizeof(char));
    if (!ans)
        return (NULL);
    if (n < 0)
    {
        ans[0] = '-';
        n *= -1;
        ind++;
    }
    while (start_delimiter != 0)
    {
        digit = n / start_delimiter;
        n = n - digit * start_delimiter;
        digit += '0';
        ans[ind] = digit;
        start_delimiter /= 10;
        ind++;
    }
    return (ans);
}