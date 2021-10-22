#include <stdlib.h>
#include "libft.h"


static void     *ft_free_if_malloc_fail(char  **ptr)
{
    int ind;

    ind = 0;
    while ((char *)(ptr + ind))
    {
        free((void*)ptr + ind);
        ind++;
    }
    return (NULL);
}

static int      ft_count_words(char const *s, char c)
{
    int ind;
    int nwords;
    int stringlen;

    nwords = 0;
    ind = 0;
    stringlen = ft_strlen(s);
    if (s[0] != c)
        nwords++;
    while (ind < stringlen)
    {
        if ((s[ind] != c && s[ind + 1] == c) || s[ind + 1] == 0 || (s[ind] == c && s[ind + 1] != c))
            nwords++;
        ind++;
    }
    return (nwords / 2);
}
static char     *ft_extract_word(char const *str, char delimiter, int *start_index, char **to_free)
{
    int     word_len;
    int     word_start_ind;
    char    *word_to_put;
    int     ind_for_out_word;

    ind_for_out_word = 0;
    word_len = 0;
    word_start_ind = 0;
    while(str[*start_index] == delimiter)
        *start_index += 1;
    word_start_ind = *start_index;
    while (str[*start_index] != delimiter)
    {
        word_len ++;
        *start_index += 1;
    }
    word_to_put = (char *)malloc((word_len + 1) * sizeof(char));
    word_to_put[word_len + 1] = 0;
    if (!word_to_put)
        return (ft_free_if_malloc_fail(to_free)); 
    while (ind_for_out_word < word_len)
    {
        word_to_put[ind_for_out_word] = str[word_start_ind + ind_for_out_word];
        ind_for_out_word++;
    }
    return (word_to_put);   
}
char            **ft_split(char const *s, char c)
{
    char    **ans;
    int     nwords_in_str;
    int     start;
    int     nwords_extracted;

    nwords_extracted = 0;
    start = 0;
    nwords_in_str = ft_count_words(s, c);
    ans = (char **)malloc((nwords_in_str + 1) * sizeof(char *));
    if (ans == NULL)
        return (NULL);
    ans[nwords_in_str] = (NULL);
    while (nwords_extracted < nwords_in_str)
    {   
        ans[nwords_extracted] = ft_extract_word(s, c,  &start, ans);
        nwords_extracted++;
    }
    return (ans);
}