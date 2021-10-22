#include <stdlib.h>
#include <stdio.h>

static int  count_words(char const *s, char c)
{
    int ind;
    int nwords;

    nwords = 0;
    ind = 0;
    while (s[ind])
    {
        if (s[ind] == c)
            nwords++;
        ind++;
    }
    return (nwords + 1);
}

char    **ft_split(char const *s, char c)
{
    char    **ans;
    int     nwords;

    nwords = count_words(s, c);
    printf("%d\n", nwords);    
    ans = (char **)malloc(count_words(s, c) * sizeof(char *));
    ans[0]="asd";
   // free(ans);
    return (ans);

}