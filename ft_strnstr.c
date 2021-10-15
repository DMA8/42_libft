#include <stdlib.h>
#include <stdio.h>

static int  ft_strlen(const char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}


char *ft_strnstr (const char *src_str, const char *goal_str, size_t len)
{
    int len_goal_str;
    int len_src_str;
    int ind_src;
    int ind_goal;
    int common_letters;

    len_goal_str = ft_strlen(goal_str);
    len_src_str = ft_strlen(src_str);
    ind_src = 0;
    ind_goal = 0;
    common_letters = 0;
    if ((int)len > len_src_str)
        len = (size_t)len_src_str;
    while (ind_src < (int)len)
    {        
        while (src_str[ind_src + ind_goal] == goal_str[ind_goal])
        {
            common_letters++;
            ind_goal++;
            if (common_letters == len_goal_str && ind_src + ind_goal <= (int)len)
                return ((void *)src_str + ind_src);
        }
        ind_goal = 0;
        common_letters = 0;
        ind_src++;
    }    
    return (NULL);
}
