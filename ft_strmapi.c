#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char *	mapped_str;
	int		ind;

	if (!s || !f)
		return (NULL);
	ind = 0;
	mapped_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!mapped_str)
		return (NULL);
	while (s[ind])
	{
		mapped_str[ind] = f(ind, s[ind]);
		ind++;
	}
	mapped_str[ind] = 0;
	return (mapped_str);
}
