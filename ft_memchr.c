#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	ind;

	ind = 0;
	while (ind < n)
	{
		if (*((unsigned char *)str + ind) == (unsigned char)c)
			return ((void *)(str + ind));
		ind++;
	}
	return (NULL);
}
