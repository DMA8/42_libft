#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nbytes)
{
	unsigned char	*src2;
	unsigned char	*dst2;

	if (!dest || !src)
		return (NULL);
	dst2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;

	if (dst2 > src2)
	{
		while (nbytes--)
			*(dst2 + nbytes) = *(src2 + nbytes);
	}
	else
	{
		while (nbytes--)
			*(dst2++) = *(src2++);
	}
	return (dest);
}
