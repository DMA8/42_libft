#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	ind;

	ind = 0;
	while (ind < n)
	{
		if (*((unsigned char *)str1 + ind) != *((unsigned char *)str2 + ind))
			return ((int)((*((unsigned char *)str1 + ind) - \
			*((unsigned char *)str2 + ind))));
		ind++;
	}
	return (0);
}
