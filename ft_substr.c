#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char *	dest;
	size_t	ind;
	size_t	bcopied;

	ind = 0;
	bcopied = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (src[ind])
	{
		if (ind >= start && bcopied< len)
		{
			dest[bcopied] = src[ind];
			bcopied++;
		}
		ind++;
	}
	dest[bcopied] = 0;
	return (dest);
}
