#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int     main()
{
	char s1[] = "          ";
	printf("%s\n", ft_strtrim(s1, " "));
	
}