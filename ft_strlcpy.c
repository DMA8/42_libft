#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t nbytes)
{
	size_t	ind;
	size_t	src_len;

	ind = 0;
	src_len = ft_strlen(src);
	if (!nbytes)
		return (src_len);
	while (ind < (nbytes - 1) && src[ind])
	{
		dst[ind] = src[ind];
		ind++;
	}
	dst[ind] = 0;
	ind = 0;
	return (src_len);
}
