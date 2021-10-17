#include <stdlib.h>
#include <stdio.h>

static size_t   ft_strlen(const char *str)
{
    size_t len;

    len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);
}

static  int ft_char_in_set(char chr, char const *set)
{
    int     ind;

    ind = 0;
    while (set[ind])
    {
        if (set[ind] == chr)
            return (1);
        ind++;
    }
    return (0);
}

static  int get_start_ind_trimmed(char const *str, char const *set)
{
    int ind;

    ind = 0;
    while (str[ind] && ft_char_in_set(str[ind], set))
        ind++;
    return (ind);
}

static  int get_end_ind_trimmed(char const *str, char const *set)
{
    int ind;

    ind = ft_strlen(str) - 1;
    while (str[ind] && ft_char_in_set(str[ind], set))
        ind--;
    return (ind);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  start_ind_trimmed;
    size_t  end_ind_trimmed;
    char    *ans;
    char    ind;

    ind = 0;
    start_ind_trimmed = (size_t)get_start_ind_trimmed(s1, set);
    end_ind_trimmed = (size_t)get_end_ind_trimmed(s1, set);
    ans = (char *)malloc(end_ind_trimmed - start_ind_trimmed);
    if (!ans)
        return (NULL);
    while (start_ind_trimmed <= end_ind_trimmed)
    {
        ans[ind] = s1[start_ind_trimmed];
        start_ind_trimmed++;
        ind++;
    }
    return (ans);
}