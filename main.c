#include "libft.h"
#include <string.h>
#include <stdio.h>

char	**ft_split(char const *s, char const d);

int     main()
{
	char *test = "*hello**mahmudul***hasan**";
	char **ans;
	
	ans = ft_split(test, '*');

	int ind = 0;

	while (ans[ind])
	{
		printf("ind = %d str =  %s\n", ind, ans[ind]);
		ind++;
	}    
}